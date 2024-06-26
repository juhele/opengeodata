# Simulated radiation monitoring data for training and testing purposes

These datasets could be useful for training - data processing, conversions, creating maps etc. or development / testing new software tools as the data can be freely distributed.

Currently only dose rate measurements are available, spectrometry data will hopefully be added later.

## "Stromovka" simulated data ##

The fictional measurements were placed in [Stromovka park](https://en.wikipedia.org/wiki/Uluru) (Royal Game Reserve) in Prague. Prague was chosen due to the availability of open data of a detailed digital terrain model and aerial orthophoto imagery free of charge from the [Geoportál hl. m. Prahy](https://www.geoportalpraha.cz/en) website. Stromovka Park was chosen because it is a free green area with a large number of walking paths crossing it so both airborne and walking measurements can be simulated there. In addition, when using an aerial orthophoto background, it makes working with data visually attractive.
All the fictional measurements have date set to 2021-04-01 (April Fools' Day) to rule out the possibility that someone will consider the files as real measurements. That's why measurements also start at obviously "weird" times - 11:04:11, 11:14:11 and 14:20:21. 

The terrain data was processed using open-source programs [SAGA-GIS](https://saga-gis.sourceforge.io/en/index.html) and [QGIS](https://www.qgis.org/en/site/). Terrain data and aerial imagery was obtained from [Geoportál hl. m. Prahy](https://www.geoportalpraha.cz/en) operated by
**The Prague Institute of Planning and Development (IPR Prague)** (Czech: Institut plánování a rozvoje hlavního města Prahy (IPR) ):

### [Digital terrain model](https://www.geoportalpraha.cz/en/data/opendata/6F72EDDF-CAA4-4243-8776-7006CB0B2521) ###
- source data (packages TER_Prah60_polygonZ.zip and TER_Prah70_polygonZ.zip), license [CC BY-SA 4.0](https://www.geoportalpraha.cz/en/licence-terms-opendata) - triangular mesh in ESRI Shapefile format, in [ESRI:102067 S-JTSK Krovak East North](https://epsg.io/102067) coordinate system was converted to 
[EPSG:32633  WGS 84 / UTM zone 33N](https://epsg.io/32633) and converted to points in [QGIS](https://www.qgis.org/en/site/)
- postprocessing using [SAGA-GIS](https://saga-gis.sourceforge.io/en/index.html) - applied smoothing [Multilevel B-Spline interpolation](https://saga-gis.sourceforge.io/saga_tool_doc/7.9.0/grid_spline_4.html) and added artificial height error with [fractal Brownian noise (FBN)](https://saga-gis.sourceforge.io/saga_tool_doc/7.9.0/grid_calculus_17.html) so the resulting data has higher resolution and variability than the original data

![DTM processing](img/DTM_processing.jpg?raw=true "DTM processing")

### Radiation data

The simulated datasets (both walking and airborne) are based on simulated data for natural K, U, Th radionuclides using ranges of "usual" values for the Czech Republic according to Manová, Matolín (1995) (1). Data were generated using [fractal Brownian noise (FBN)](https://saga-gis.sourceforge.io/saga_tool_doc/7.9.0/grid_calculus_17.html) algorithm and therefore do not correspond in any way to the real geological bedrock at the measuring point. The contribution of cosmic rays is calculated from real altitude using the DTM data mentioned above.

Instead of simply simulating the dose rate values this more complicated approach was used as this parameters were needed for simulating the airborne spectrometric data (with raw spectra to be added later).

![Simulated K-U-Th data](img/nuclides_K-U-Th_simulated.jpg?raw=true "Simulated K-U-Th data")

The resulting dose rate levels are values within the normal radiation background levels. Additionally, some "noise" - measurement error +/-30% generated with the FBN algorithm was applied to each dataset so points of the two walking measurements in the same location should not have the exactly same dose rate value.

The Mob-DOSE device also measures about 15% higher dose rate values than the IRIS airborne instrument (comparing data for 1 m height above ground in both cases) - this difference was also implemented in the datasets.

References:

(1) Atlas map České republiky GEOČR 500: geologická mapa : radiometrická mapa : mapa radonového rizika : geomagnetická mapa : metalogenetická mapa : mapa minerálních vod : gravimetrická mapa : digitální výškopis : družicová mapa : mapa krajinného pokryvu : topografická mapa. c1998. Praha: Český geologický ústav. (CD-ROM)



### Simulated airborne monitoring "Stromovka" ###

The data do not contain any values above normal radiation background - the range of the fictional measurement data is 55-115 nGy/h = 0.05-0.115 microGy/h.

![Stromovka simulated airborne data](img/Stromovka_airborne.jpg?raw=true "Stromovka simulated airborne data")
*(background map © OpenStreetMap contributors)*

The data [is available to download here](https://github.com/juhele/opengeodata/blob/master/Simulated_radiation_monitoring_data/package_simulated_airborne_IRIS_B2021_04_01_14_20_DEMO_Stromovka_without_spectra.zip) in native IRIS instrument binary format - PEI file, but also in common CSV file and styled point layer in [OGC GeoPackage standard format](https://www.geopackage.org) which can be easily loaded in programs like [QGIS](https://qgis.org).

### Simulated walk monitoring "Stromovka" ###

The data do not contain any values above normal radiation background - the range of the fictional measurement data is 0.101-0.174 microGy/h. Both simulated walks were created by combining [Mapy.cz](https://mapy.cz/) route planning tool and further postprocessing (refining, adding more points, some track edits) of the exported GPX using [GPS Track Editor](http://www.gpstrackeditor.com/) and [RouteConverter](https://www.routeconverter.com/home/en).

![Stromovka simulated walk 1 data](img/Stromovka_walk1.jpg?raw=true "Stromovka simulated walk 1 data")
*(background map © OpenStreetMap contributors)*

![Stromovka simulated walk 2 data](img/Stromovka_walk2.jpg?raw=true "Stromovka simulated walk 2 data")
*(background map © OpenStreetMap contributors)*

The data is available to download here - [walk measurement no. 1](https://github.com/juhele/opengeodata/blob/master/Simulated_radiation_monitoring_data/package_simulated_walk1_Mob-DOSE_B_PDOSE777-8888_2021_04_01_11_04_11.zip) and [walk measurement no. 2](https://github.com/juhele/opengeodata/blob/master/Simulated_radiation_monitoring_data/package_simulated_walk2_Mob-DOSE_B_PDOSE777-9999_2021_04_01_11_14_11.zip) in native Mob-DOSE instrument binary format - PEI file, but also in common CSV file and styled point layer in [OGC GeoPackage standard format](https://www.geopackage.org) which can be easily loaded in programs like [QGIS](https://qgis.org).

## Device compatibility (walking / carborne) ##

The data structure and format was created in order to be compatible with real data files obtained with the Mob-DOSE (also called PDOSE-3) portable device, with native output in PEI format defined by Pico Envirotec. Can be opened (and was also tested) using PEI software like [PEIView](http://picoenvirotec.com/enviro/peiview/) or [PEIConvert](http://picoenvirotec.com/enviro/peiconvert/).

![Mob-DOSE device](img/mobdose.jpg?raw=true "Mob-DOSE device")

"Equipped with two energy compensated Geiger Tubes, the device covers a wide range of measurements from 50nSv/h up to 400 mSv/h of GDER (Gamma-Dose Equivalent Rate)." (equipment description source -  [NUVIA Dynamics website](http://picoenvirotec.com/enviro/pdose-3/))


## Device compatibility (airborne) ##

The data structure and format was created in order to be compatible with real data files obtained with the IRIS airborne gamma-ray spectrometric system developed by Pico Envirotec Inc. Company in Toronto, Canada. Two boxes (Master and Slave), each box with 2 NaI(Tl) crystals with dimensions 10x10x40 cm were used. (equipment description source -  [PSI Bericht Nr. 18-04](https://www.researchgate.net/publication/330482739_International_Intercomparison_Exercise_of_Airborne_Gamma-Spectrometric_Systems_of_the_Czech_Republic_France_Germany_and_Switzerland_in_the_Framework_of_the_Swiss_Exercise_ARM17))

