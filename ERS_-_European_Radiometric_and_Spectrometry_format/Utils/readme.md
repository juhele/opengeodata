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

```
/*
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
/*
```

The data lines are converted into standard CSV file so it can be easily loaded in spreadsheet program (MS Excel or LibreOffice Calc) or a GIS software like QGIS.

input ERS:
```
PA demo_point-0001;CD 2015-04-01;CT 12:12:12;PE 14.960050;PN 38.383420;PH 49; AD_K-40 2.512445e+02;AD_U-238 9.557773e+01;AD_Th-232 1.181432e+01;AA_Cs-137 1.219730e+03;DHSR 5.766440e-02
PA demo_point-0002;CD 2015-04-01;CT 12:12:13;PE 14.960210;PN 38.383610;PH 50; AD_K-40 2.307089e+02;AD_U-238 3.503777e+01;AD_Th-232 1.285644e+01;AA_Cs-137 1.929000e+01;DHSR 5.764430e-02
PA demo_point-0003;CD 2015-04-01;CT 12:12:14;PE 14.960380;PN 38.383800;PH 52; AD_K-40 2.159979e+02;AD_U-238 1.714167e+01;AD_Th-232 7.676540e+00;AA_Cs-137 2.401170e+03;DHSR 5.545540e-02
```

output CSV:
```
PA,CD,CT,PE,PN,PH,AD_K-40,AD_U-238,AD_Th-232,AA_Cs-137,DHSR
demo_point-0001,2015-04-01,12:12:12,14.960050,38.383420,49,2.512445e+02,9.557773e+01,1.181432e+01,1.219730e+03,5.766440e-02
demo_point-0002,2015-04-01,12:12:13,14.960210,38.383610,50,2.307089e+02,3.503777e+01,1.285644e+01,1.929000e+01,5.764430e-02
demo_point-0003,2015-04-01,12:12:14,14.960380,38.383800,52,2.159979e+02,1.714167e+01,7.676540e+00,2.401170e+03,5.545540e-02
```

All files - both input ERS and resulting TXT and CSV are saved in the "output" folder.

**Download:** 

**MS Windows - EXE application:**
[CzechRad_script_004_LOG2CSV-converter_Windows_x86_EXE.zip (680.0 KB)](https://github.com/juhele/CzechRad/blob/main/SCRIPTS/CzechRad_script_004_LOG2CSV-converter_Windows_x86_EXE.zip)


## License:

Code created with Grok AI, released under MIT No Attribution License

Copyright 2025 Jan Helebrant, czechrad@suro.cz, www.suro.cz

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
