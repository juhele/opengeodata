# DEMO ground radiation monitoring data from Mob-DOSE detector

## Measuring device ##

The data were measured using the Mob-DOSE (also called PDOSE-3) portable device, with native output in PEI format defined by Pico Envirotec. Can be opened (and was also tested) using PEI software like [PEIView](http://picoenvirotec.com/enviro/peiview/) or [PEIConvert](http://picoenvirotec.com/enviro/peiconvert/).

![Alt text](img/mobdose.jpg?raw=true "Mob-DOSE device")

"Equipped with two energy compensated Geiger Tubes, the device covers a wide range of measurements from 50nSv/h up to 400 mSv/h of GDER (Gamma-Dose Equivalent Rate)." (equipment description source -  [NUVIA Dynamics website](http://picoenvirotec.com/enviro/pdose-3/))

## About the data ##

- real data - all the radiation data incl. dose rate values, raw pulses from both GM tubes etc.
- the radiation data are real but the location and time/date parameters were changed
- the device number (PDOSE666-9999) is fictional

## package 1 - Václav Havel Airport Prague / formerly Prague Ruzyně International Airport, Prague, Czech Republic ##

- fictional measurement position [here](https://mapy.cz/s/3pXH3)
- fictional measurement date and start time: 1.4.2013 12:11:12
- fictional measurement dose rate (FastDose) range (microSv/h): 0 - 0,098

## package 2 - Waiotapu, New Zealand ##

- fictional measurement position [here](https://mapy.cz/s/3pXJ7)
- fictional measurement date and start time: 1.4.2014 14:14:14
- fictional measurement dose rate (FastDose) range (microSv/h): 0,050 - 0,219
- location info: https://en.wikipedia.org/wiki/Waiotapu

## package 3 - Kilauea section of Hawaii Volcanoes National Park, Hawaii, USA ##

- fictional measurement position [here](https://mapy.cz/s/3pXKF)
- fictional measurement date and start time: 1.4.2015 15:15:15
- fictional measurement dose rate (FastDose) range (microSv/h): 0,055 - 0,244
- location info: https://en.wikipedia.org/wiki/Kilauea

## package contents ##

Each package contains data from fictional measurement in particular area using the Mob-DOSE portable device, in PEI format.

Also contains "details" folder with exported PEI header and data in CSV and QGIS... folder with full project for [QGIS](https://qgis.org)  including styled point layer in [OGC GeoPackage standard format](https://www.geopackage.org).

## data previews (FastDose, microSv/h) ##

![Alt text](img/MobDose_CZ_demo.jpg?raw=true "demo 1 - Czech Republic")
background map: Microsoft® BingTM Maps via QGIS OpenLayers plugin

![Alt text](img/MobDose_NZ_demo.jpg?raw=true "demo 2 - New Zealand")
background map: Microsoft® BingTM Maps via QGIS OpenLayers plugin

![Alt text](img/MobDose_US_demo.jpg?raw=true "demo 3 - Hawaii, USA")
background map: Microsoft® BingTM Maps via QGIS OpenLayers plugin

## data source for citation etc.: ##

National Radiation Protection Institute (SURO)

Prague, Czech Republic

www.suro.cz
