#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <sstream>

namespace fs = std::filesystem;

// Function to split a string by delimiter
std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to trim whitespace from a string
std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t");
    size_t last = str.find_last_not_of(" \t");
    if (first == std::string::npos) return "";
    return str.substr(first, last - first + 1);
}

// Function to process a single ERS file
void processERSFile(const fs::path& inputPath, const fs::path& outputDir) {
    std::ifstream inFile(inputPath);
    if (!inFile.is_open()) {
        std::cerr << "Error opening input file: " << inputPath << std::endl;
        return;
    }

    std::string outputBaseName = inputPath.stem().string();
    fs::path csvOutputPath = outputDir / (outputBaseName + ".csv");
    fs::path txtOutputPath = outputDir / (outputBaseName + "_header.txt");

    std::ofstream csvFile(csvOutputPath);
    std::ofstream txtFile(txtOutputPath);

    if (!csvFile.is_open() || !txtFile.is_open()) {
        std::cerr << "Error opening output files for: " << inputPath << std::endl;
        inFile.close();
        return;
    }

    std::string line;
    std::vector<std::string> headers;
    std::vector<std::string> values;
    bool headerSection = true;

    while (std::getline(inFile, line)) {
        line = trim(line);
        if (line.empty()) continue;

        if (headerSection) {
            if (line.find("PA") == 0) {
                headerSection = false;
                txtFile.close(); // Close header file
            } else {
                txtFile << line << "\n";
                continue;
            }
        }

        // Process data lines starting with "PA"
        if (!headerSection) {
            std::vector<std::string> tokens = split(line, ';');
            headers.clear();
            values.clear();

            for (const auto& token : tokens) {
                std::string trimmed = trim(token);
                if (trimmed.empty()) continue;

                size_t spacePos = trimmed.find(' ');
                if (spacePos != std::string::npos) {
                    std::string header = trimmed.substr(0, spacePos);
                    std::string value = trimmed.substr(spacePos + 1);
                    headers.push_back(header);
                    values.push_back(value);
                }
            }

            // Write headers only once (for the first PA line)
            if (csvFile.tellp() == 0) {
                for (size_t i = 0; i < headers.size(); ++i) {
                    csvFile << headers[i];
                    if (i < headers.size() - 1) csvFile << ",";
                }
                csvFile << "\n";
            }

            // Write values
            for (size_t i = 0; i < values.size(); ++i) {
                csvFile << values[i];
                if (i < values.size() - 1) csvFile << ",";
            }
            csvFile << "\n";
        }
    }

    inFile.close();
    csvFile.close();
    std::cout << "Processed: " << inputPath.filename() << " -> " << csvOutputPath.filename() << " and " << txtOutputPath.filename() << "\n";
}

int main() {
    fs::path inputDir = "input";
    fs::path outputDir = "output";

    // Create output directory if it doesn't exist
    if (!fs::exists(outputDir)) {
        fs::create_directory(outputDir);
    }

    // Process all .ERS and .ers files
    for (const auto& entry : fs::recursive_directory_iterator(inputDir)) {
        if (entry.is_regular_file()) {
            std::string ext = entry.path().extension().string();
            std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
            if (ext == ".ers") {
                processERSFile(entry.path(), outputDir);
            }
        }
    }

    // Move .LOG files
    for (const auto& entry : fs::directory_iterator(inputDir)) {
        if (entry.is_regular_file()) {
            std::string ext = entry.path().extension().string();
            std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
            if (ext == ".log") {
                fs::path dest = outputDir / entry.path().filename();
                fs::rename(entry.path(), dest);
                std::cout << "Moved: " << entry.path().filename() << " to " << outputDir << "\n";
            }
        }
    }

    // Delete contents of input folder
    for (const auto& entry : fs::directory_iterator(inputDir)) {
        fs::remove_all(entry.path());
    }

    std::cout << "Job finished. Input folder cleared.\n";
    return 0;
}