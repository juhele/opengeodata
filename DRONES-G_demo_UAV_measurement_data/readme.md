# DEMO UAV radiation monitoring data from DRONES-G detector

## Measuring device ##

The data were measured using the DRONES-G device for UAVs, with native output in PEI format defined by Pico Envirotec. Can be opened (and was also tested) using PEI software like [PEIView](http://picoenvirotec.com/enviro/peiview/) or [PEIConvert](http://picoenvirotec.com/enviro/peiconvert/).

![Alt text](img/mobdose.jpg?raw=true "Mob-DOSE device")

"DRONES-G is a modular detection system for the radiation situation monitoring using unmanned aerial system. This system is completely independent of the carrier itself and allows the application of various detection modules depending on the task being performed.

Modules for gamma spectrometry and radionuclide identification, neutron detection module, plastic scintillation module for high sensitivity dose metering, GM for higher gamma radiation levels, air sampling module, and other options are available. The system is complemented with modules for RF communication and GPS reception.

All measured data is synchronized with GPS position and time and it is transmitted via RF Data Link 433MHz to a ground station with DRONIC SW. This software allows a set up of a system and the real-time data visualization. The data is also stored in the base on a SD card.

The internal battery allows independent operation of the modular system for up to 4 hours." 
(equipment description source -  [NUVIA Czech website](https://nuvia.cz/en/aktuality/437-drones-g---new-product-of-nuvia-cz))

## About the data ##

- real data - all the radiation data incl. dose rate values, raw pulses, spectra etc.
- contains raw 1024 channel NaITl spectra
- the radiation data are real but the location and time/date parameters were changed

## package 1 - Chateau Lednice park, Lednice, Czech Republic ##

- fictional measurement position [here](https://en.mapy.cz/s/pazezolepo)
- fictional measurement date and start time: 1.4.2019 1:14:19 GMT/UTC
- fictional measurement dose rate (DosL_NAI2_uGy/h) range (microGy/h): 0 - 0,0724 (in flight height, not recalculated to ground)

## package contents ##

Each package contains data from fictional measurement in particular area using the Mob-DOSE portable device, in PEI format.

Also contains "details" folder with exported PEI header and data in CSV and QGIS... folder with full project for [QGIS](https://qgis.org)  including styled point layer in [OGC GeoPackage standard format](https://www.geopackage.org).

## data previews (DosL_NAI2, microGy/h) ##

![Alt text](img/MobDose_CZ_demo.jpg?raw=true "demo 1 - Czech Republic")
background map: Microsoft® BingTM Maps via QGIS OpenLayers plugin

## data source for citation etc.: ##

National Radiation Protection Institute (SURO)

Prague, Czech Republic

www.suro.cz

