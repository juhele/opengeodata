# ERS processing utilities

Here I provide small EXE applications for working with ERS data. I am not a programmer, but I can do fine tuning / debugging of the scripts if AI writes them for me first. If it helps you, feel free to use the apps published here. I cannot provide technical support for these scripts or modify them at your request. If you make any useful modifications to the script, or write a new script, please consider sharing it with other CzechRad users here. Thank you

## Supported Platforms

**Microsoft Windows 64bit**

Tested on Windows 10 and 11. The exe files are portable, do not require admin rights or external librarires.

**GNU/Linux / Mac**

Should work using [Wine](https://en.wikipedia.org/wiki/Wine_(software))


**Use:**

Download package in ZIP file (click the link and then the Download raw file icon):

<img src="download_raw.png" alt="Download raw file icon">

Unpack to your computer. Simple EXE application running in command line (CLI). No configuration, just put your files in "input" folder and run the EXE. The result will be saved in output folder.

## ERS2CSV-converter

Simple EXE application running in command line (CLI). No configuration, just put your ERS files in "input" folder and run the EXE. The result will be saved in output folder.

The application scans "input" directory for *.ERS or *.ers files in the “input” folder including subfolders and writes the result in the “output” folder. The files are converted to CSV and TXT files. CSV contains the data part (lines beginning with “PA”), TXT the header. 

For each *.ERS or *.ers file in “input” perform this task “convert to CSV” and write results as a new CSV file with the same filename as source file  “_2_data” in the filename. Write the header part of the file - eg, the part before the lines with “PA” string begin, as a TXT file with the same filename as source file + “_1_header” in the filename.

**Download:** 

**MS Windows - EXE application:**
[CzechRad_script_004_LOG2CSV-converter_Windows_x86_EXE.zip (680.0 KB)](https://github.com/juhele/CzechRad/blob/main/SCRIPTS/CzechRad_script_004_LOG2CSV-converter_Windows_x86_EXE.zip)


## License:

Code created with Grok AI, released under MIT No Attribution License
Copyright 2025 Jan Helebrant, czechrad@suro.cz, www.suro.cz

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
