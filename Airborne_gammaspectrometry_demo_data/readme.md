# DEMO Airborne gammaspectrometric data "Uluru"

## Measuring device ##

The data were measured using IRIS airborne gamma-ray spectrometric system developed by Pico Envirotec Inc. Company in Toronto, Canada. Two boxes (Master and Slave), each box with 2 NaI(Tl) crystals with dimensions 10x10x40 cm were used. (equipment description source -  [PSI Bericht Nr. 18-04](https://www.researchgate.net/publication/330482739_International_Intercomparison_Exercise_of_Airborne_Gamma-Spectrometric_Systems_of_the_Czech_Republic_France_Germany_and_Switzerland_in_the_Framework_of_the_Swiss_Exercise_ARM17))

## About the data ##

- real data - all the radiation data incl. dose rate values, raw 512 channel spectra etc.
- changed location (to well known Uluru/Ayers Rock, Australia)
- changed date and time information (date is now 01.04.2017 - e.g. 1st April and starting time 11:11:11)
- height values calculated to match the new location
- for more information check the data packages

## Data packages: ##

**1) package_0_Australia_demo_airborne_gammaspectrometry_data_PEI_project_data**

- This package contains data for flight project (including separate files with survey- and tie-lines definitions) in 
Pico Envirotec defined format. Can be loaded using [PEIConvert](http://picoenvirotec.com/enviro/peiconvert/) or AGIS software. Tthe files themselves are formatted text files which can be opened using an advanced text editor like [Notepad++](https://notepad-plus-plus.org)

AUS_Uluru_IRIS_demo_project_2017-04-01_final.xyz

AUS_Uluru_IRIS_demo_project_2017-04-01_final_sl.xyz

AUS_Uluru_IRIS_demo_project_2017-04-01_final_tl.xyz

*2) 

## Data source for citation etc.: ##

National Radiation Protection Institute (SURO)

Prague, Czech Republic

www.suro.cz

- made almost manually using QGIS (1), LibreOffice (2) and Notepad++ (3)

## Data previews: ##

Dose rate values in nGy/h (DosG_nGyph) recalculated to height 1 meter above ground:
![Alt text](img/QGIS_preview_DosG.jpg?raw=true "Uluru DEMO data - dose rate values preview")
background map: Contains modified Copernicus Sentinel data [2019] processed by Sentinel Hub

Height above ground (UsedAlt_m) values:
![Alt text](img/QGIS_preview_UsedAlt.jpg?raw=true "Uluru DEMO data - heights above ground values preview")
background map: Contains modified Copernicus Sentinel data [2019] processed by Sentinel Hub

Software links:

(1) https://qgis.org
(2) https://www.libreoffice.org
(3) https://notepad-plus-plus.org

