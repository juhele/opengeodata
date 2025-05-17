#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <sstream>
#include <iterator>

namespace fs = std::filesystem;

// Function to split a string by delimiter
std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
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

// Function to check if header file already contains specific comment lines
bool hasCommentLines(const std::vector<std::string>& headerLines, const std::string& comment) {
    for (const auto& line : headerLines) {
        if (trim(line) == comment) return true;
    }
    return false;
}

// Function to process a pair of header and data files to create an ERS file
bool processFilePair(const fs::path& headerPath, const fs::path& dataPath, const fs::path& outputDir) {
    // Open header file
    std::ifstream headerFile(headerPath);
    if (!headerFile.is_open()) {
        std::cerr << "Error opening header file: " << headerPath << std::endl;
        return false;
    }

    // Open data file
    std::ifstream dataFile(dataPath);
    if (!dataFile.is_open()) {
        std::cerr << "Error opening data file: " << dataPath << std::endl;
        headerFile.close();
        return false;
    }

    // Prepare output ERS file
    std::string baseName = headerPath.stem().string();
    baseName = baseName.substr(0, baseName.find("_1_header"));
    fs::path ersPath = outputDir / (baseName + ".ers");
    std::ofstream ersFile(ersPath);
    if (!ersFile.is_open()) {
        std::cerr << "Error opening output file: " << ersPath << std::endl;
        headerFile.close();
        dataFile.close();
        return false;
    }

    // Read header content to check for existing comments
    std::vector<std::string> headerLines;
    std::string line;
    while (std::getline(headerFile, line)) {
        headerLines.push_back(line);
    }
    headerFile.clear();
    headerFile.seekg(0);

    // Write header start comment if not already present
    bool hasHeaderComment = hasCommentLines(headerLines, "/* header data");
    if (!hasHeaderComment) {
        ersFile << "/*\n/* header data\n/*\n";
    }

    // Copy header content
    while (std::getline(headerFile, line)) {
        ersFile << line << "\n";
    }
    headerFile.close();

    // Write header end comment if not already present
    bool hasDataExportComment = hasCommentLines(headerLines, "/* data export starts here");
    if (!hasDataExportComment) {
        ersFile << "/*\n/* data export starts here\n/*\n";
    }

    // Process CSV data
    std::vector<std::string> headers;
    bool firstLine = true;
    int paCounter = 1;

    while (std::getline(dataFile, line)) {
        line = trim(line);
        if (line.empty()) continue;

        std::vector<std::string> tokens = split(line, ',');

        if (firstLine) {
            headers = tokens; // Store headers
            firstLine = false;
            continue;
        }

        // Write PA line
        ersFile << "PA " << paCounter++ << ";";
        for (size_t i = 0; i < tokens.size(); ++i) {
            if (i < headers.size()) {
                ersFile << headers[i] << " " << tokens[i];
                if (i < tokens.size() - 1) {
                    ersFile << ";";
                }
            }
        }
        ersFile << "\n";
    }

    // Write end of file comment
    ersFile << "/*\n/* end of file\n/*\n";

    dataFile.close();
    ersFile.close();
    std::cout << "Processed: " << headerPath.filename() << " and " << dataPath.filename() << " -> " << ersPath.filename() << "\n";
    return true;
}

int main() {
    fs::path inputDir = "input";
    fs::path outputDir = "output";

    // Create output directory if it doesn't exist
    if (!fs::exists(outputDir)) {
        fs::create_directory(outputDir);
    }

    // Collect pairs of *_1_header.txt and *_2_data.csv files
    std::vector<std::pair<fs::path, fs::path>> filePairs;
    std::vector<fs::path> txtFiles;
    std::vector<fs::path> csvFiles;

    for (const auto& entry : fs::recursive_directory_iterator(inputDir)) {
        if (entry.is_regular_file()) {
            std::string filename = entry.path().filename().string();
            if (filename.find("_1_header.txt") != std::string::npos) {
                txtFiles.push_back(entry.path());
            } else if (filename.find("_2_data.csv") != std::string::npos) {
                csvFiles.push_back(entry.path());
            }
        }
    }

    // Match pairs
    for (const auto& txtPath : txtFiles) {
        std::string baseName = txtPath.stem().string();
        baseName = baseName.substr(0, baseName.find("_1_header"));
        for (const auto& csvPath : csvFiles) {
            if (csvPath.stem().string() == baseName + "_2_data") {
                filePairs.emplace_back(txtPath, csvPath);
                break;
            }
        }
    }

    // Process each file pair
    for (const auto& [headerPath, dataPath] : filePairs) {
        if (processFilePair(headerPath, dataPath, outputDir)) {
            // Move the input files to output directory
            fs::path txtDest = outputDir / headerPath.filename();
            fs::path csvDest = outputDir / dataPath.filename();
            try {
                fs::rename(headerPath, txtDest);
                fs::rename(dataPath, csvDest);
                std::cout << "Moved: " << headerPath.filename() << " to " << txtDest << "\n";
                std::cout << "Moved: " << dataPath.filename() << " to " << csvDest << "\n";
            } catch (const fs::filesystem_error& e) {
                std::cerr << "Error moving files: " << e.what() << "\n";
            }
        }
    }

    // Delete contents of input folder
    for (const auto& entry : fs::directory_iterator(inputDir)) {
        fs::remove_all(entry.path());
    }

    std::cout << "Job finished. Input folder cleared.\n";
    std::cout << "Press Enter to close the window...";
    std::cin.get();

    return 0;
}

// Created with Grok AI, released under MIT No Attribution License
// Copyright 2025 Jan Helebrant, czechrad@suro.cz, www.suro.cz
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.