# ERS processing utilities source code

This folder contains source code for all ERS related utilities and all things needed for compilation.
Requires mingw-w64 - in Ubuntu / Debian based linux distributions use this command:

`sudo apt-get install mingw-w64`

to install it. 
Compilation was performed in current Kubuntu LTS, compilation commands creating a static Windows binary are provided below.

Compilation Instructions:

Use a C++17-compliant compiler (e.g., MSVC in Visual Studio).

Link against the Windows API (included by default in Windows environments).

Ensure the C++ standard library supports <filesystem> (C++17 or later).

## ERS2CSV-converter:

- run in terminal:

`x86_64-w64-mingw32-g++ -std=c++17 -I fmt/include ERS2CSV-converter.cpp -o ERS2CSV-converter.exe -static`
