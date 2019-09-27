# DEMO Airborne gammaspectrometric data "Uluru"

![Alt text](img/Uluru_airborne_measurements_web.jpg?raw=true "Uluru DEMO data - photo")
*this could it look like if the measurement was real :-)*

## Measuring device ##

The data were measured using IRIS airborne gamma-ray spectrometric system developed by Pico Envirotec Inc. Company in Toronto, Canada. Two boxes (Master and Slave), each box with 2 NaI(Tl) crystals with dimensions 10x10x40 cm were used. (equipment description source -  [PSI Bericht Nr. 18-04](https://www.researchgate.net/publication/330482739_International_Intercomparison_Exercise_of_Airborne_Gamma-Spectrometric_Systems_of_the_Czech_Republic_France_Germany_and_Switzerland_in_the_Framework_of_the_Swiss_Exercise_ARM17))

## About the data ##

- real data - all the radiation data incl. dose rate values, raw 512 channel spectra etc.
- changed location (to well known [Uluru/Ayers Rock, Australia](https://en.wikipedia.org/wiki/Uluru))
- changed date and time information (date is now 01.04.2017 - e.g. 1st April :-) and starting time 11:11:11)
- height values calculated to match the new location
- for more information check the data packages

## Data packages: ##

### 1) package_0_Australia_demo_airborne_gammaspectrometry_data_PEI_project_data ###

- This package contains data for flight project (including separate files with survey- and tie-lines definitions) in 
Pico Envirotec defined format. Can be loaded using [PEIConvert](http://picoenvirotec.com/enviro/peiconvert/) or AGIS software. The files themselves are formatted text files which can be opened using an advanced text editor like [Notepad++](https://notepad-plus-plus.org)

AUS_Uluru_IRIS_demo_project_2017-04-01_final.xyz - main file (incl. flight polygon definition etc.)

AUS_Uluru_IRIS_demo_project_2017-04-01_final_sl.xyz - survey lines data

AUS_Uluru_IRIS_demo_project_2017-04-01_final_tl.xyz - tie lines data


### 2) package_1_Australia_demo_airborne_gammaspectrometry_data_PEI_measurement_data ###

Data file in Pico Envirotec PEI format - can be loaded using [PEIView](http://picoenvirotec.com/enviro/peiview/)

Ready to download - [get the dataset from MediaFire](http://www.mediafire.com/file/tsn5886x633hxd8/package_1_Australia_demo_airborne_gammaspectrometry_data_PEI_measurement_data.7z/file)

### 3) package_2_Australia_demo_airborne_gammaspectrometry_data_CSV_measurement_data ###

Data in a simple text or CSV format. Plus data from PEI header as a reference.

### 4) package_3_Australia_demo_airborne_gammaspectrometry_data_GIS ###

This package contains fully usable GIS project for [QGIS](https://qgis.org/en/site/), including background map using Copernicus Sentinel data [2019] processed by [Sentinel Hub EO Browser](https://apps.sentinel-hub.com/eo-browser/). See the data preview below - these are screenshots of QGIS with the project. 
To run the project in QGIS (you need to have QGIS installed on your PC) just unpack the 7z file and run "_Australia_Uluru_airborne_demo_project_v01.qgs".

The data layers are in [OGC GeoPackage](https://www.geopackage.org) standard format:

*A GeoPackage (GPKG) is an open, non-proprietary, platform-independent and standards-based data format for geographic information system implemented as a SQLite database container. Defined by the Open Geospatial Consortium (OGC) with the backing of the US military and published in 2014, GeoPackage has seen wide widespread support from various government, commercial, and open source organizations.
(source: [Wikipedia](https://en.wikipedia.org/wiki/GeoPackage))*

The main benefit here is that GeoPackage (GPKG) is one file able to store data, color style, coordinate system data and other information so you just drag and drop the *.gpkg file in empty QGIS window and the layer is loaded with color style applied and without any additional settings required. 

The package is too big (GitHub has 25MB limit) so [get the dataset from MediaFire](http://www.mediafire.com/file/wdbcm4ombw46o7h/package_3_Australia_demo_airborne_gammaspectrometry_data_GIS.7z/file) - it has about 33MB.

## Data source for citation etc.: ##

National Radiation Protection Institute (SURO)

Prague, Czech Republic

www.suro.cz

- made almost manually using QGIS (1), LibreOffice (2) and Notepad++ (3)

## Data previews: ##

**Dose rate values in nGy/h (DosG_nGyph) recalculated to height 1 meter above ground:**

![Alt text](img/QGIS_preview_DosG.jpg?raw=true "Uluru DEMO data - dose rate values preview")
*background map: Contains modified Copernicus Sentinel data [2019] processed by Sentinel Hub*

**Height above ground (UsedAlt_m) values:**

![Alt text](img/QGIS_preview_UsedAlt.jpg?raw=true "Uluru DEMO data - heights above ground values preview")
*background map: Contains modified Copernicus Sentinel data [2019] processed by Sentinel Hub*

Software links:

(1) https://qgis.org
(2) https://www.libreoffice.org
(3) https://notepad-plus-plus.org

