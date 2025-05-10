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

Unpack to your computer. The application is just simple EXE running in command line (CLI). No configuration, just put your files in "input" folder and run the EXE. The result will be saved in output folder.

## ERS2CSV-converter

Simple EXE application running in command line (CLI). No configuration, just put your ERS files in "input" folder and run the EXE. The result will be saved in output folder.

The application scans "input" directory for *.ERS or *.ers files in the “input” folder including subfolders and writes the result in the “output” folder. The files are converted to CSV and TXT files. CSV contains the data part (lines beginning with “PA”), TXT the header. 

**Example:**

input: DEMO_ERS2.0_Area1_Italy_v01_without_spectra.ers

output: DEMO_ERS2.0_Area1_Italy_v01_without_spectra_1_header.txt, DEMO_ERS2.0_Area1_Italy_v01_without_spectra_2_data.csv

the header data has the same structure in the ERS and TXT files - example:

`/*
/* header data
/*
V 2.0
HCTRY Czech Republic
HORG SURO
HTEAM SURO-DEMO
HSURVEY Demo data - fictional monitoring - Italy, line spacing: 100m, flight altitude 100 m
HSITE demo monitoring
/*
/* measuring equipment
/*
IAP IRIS - NaI(Tl)-16L
ICA Bell HP-412
IPR Garmin
IPC WGS84
IPU deg
IPP m
IPG radar altimeter - TRA-3000
/*
/* detection limit
AA_LD 2000 Bq/m2 - for Cs-137: window method
/*
/* measuring methods and parameters
/*
ISW windows integrals with stripping
ISWT exp(-mueh*h)
/* used windows lower and upper energy
ISWE1_Kalium 1370.00
ISWE2_Kalium 1570.00
ISWE1_Uran_2 1660.00
ISWE2_Uran_2 1860.00
ISWE1_Thorium 2410.00
ISWE2_Thorium 2810.00
ISWE1_TOT 400.00
ISWE2_TOT 2810.00
/*
/* data export starts here
/*`



For each *.ERS or *.ers file in “input” perform this task “convert to CSV” and write results as a new CSV file with the same filename as source file  “_2_data” in the filename. Write the header part of the file - eg, the part before the lines with “PA” string begin, as a TXT file with the same filename as source file + “_1_header” in the filename.

**Download:** 

**MS Windows - EXE application:**
[CzechRad_script_004_LOG2CSV-converter_Windows_x86_EXE.zip (680.0 KB)](https://github.com/juhele/CzechRad/blob/main/SCRIPTS/CzechRad_script_004_LOG2CSV-converter_Windows_x86_EXE.zip)


## License:

Code created with Grok AI, released under MIT No Attribution License
Copyright 2025 Jan Helebrant, czechrad@suro.cz, www.suro.cz

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
