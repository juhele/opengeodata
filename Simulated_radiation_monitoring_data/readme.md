# Simulated radiation monitoring data for training and testing purposes

These datasets could be useful for training - data processing, conversions, creating maps etc. or development / testing new software tools as the data can be freely distributed.

Currently only dose rate measurements are available, spectrometry data will hopefully be added later.

## "Stromovka" simulated data ##

The fictional measurements were placed in [Stromovka park](https://en.wikipedia.org/wiki/Uluru) (Royal Game Reserve). The terrain data was generated using open-source programs [SAGA-GIS](https://saga-gis.sourceforge.io/en/index.html) and [QGIS](https://www.qgis.org/en/site/).

Terrain data and aerial imagery was obtained from [Geoportál hl. m. Prahy](https://www.geoportalpraha.cz/en) operated by
**The Prague Institute of Planning and Development (IPR Prague)** (Czech: Institut plánování a rozvoje hlavního města Prahy (IPR) ):

### [Digital terrain model](https://www.geoportalpraha.cz/en/data/opendata/6F72EDDF-CAA4-4243-8776-7006CB0B2521) ###
- source data - triangular mesh in ESRI Shapefile format was converted to points in [QGIS](https://www.qgis.org/en/site/)
- postprocessing using [SAGA-GIS](https://saga-gis.sourceforge.io/en/index.html) - applied smoothing


### Simulated airborne monitoring "Stromovka" ###

The data do not contain any values above normal radiation background

### Simulated walk monitoring "Stromovka" ###

The data do not contain any values above normal radiation background


## Device compatibility (walking / carborne) ##

The data structure and format was created in order to be compatible with real data files obtained with the Mob-DOSE (also called PDOSE-3) portable device, with native output in PEI format defined by Pico Envirotec. Can be opened (and was also tested) using PEI software like [PEIView](http://picoenvirotec.com/enviro/peiview/) or [PEIConvert](http://picoenvirotec.com/enviro/peiconvert/).

![Alt text](img/mobdose.jpg?raw=true "Mob-DOSE device")

"Equipped with two energy compensated Geiger Tubes, the device covers a wide range of measurements from 50nSv/h up to 400 mSv/h of GDER (Gamma-Dose Equivalent Rate)." (equipment description source -  [NUVIA Dynamics website](http://picoenvirotec.com/enviro/pdose-3/))


## Device compatibility (airborne) ##

The data structure and format was created in order to be compatible with real data files obtained with the IRIS airborne gamma-ray spectrometric system developed by Pico Envirotec Inc. Company in Toronto, Canada. Two boxes (Master and Slave), each box with 2 NaI(Tl) crystals with dimensions 10x10x40 cm were used. (equipment description source -  [PSI Bericht Nr. 18-04](https://www.researchgate.net/publication/330482739_International_Intercomparison_Exercise_of_Airborne_Gamma-Spectrometric_Systems_of_the_Czech_Republic_France_Germany_and_Switzerland_in_the_Framework_of_the_Swiss_Exercise_ARM17))

