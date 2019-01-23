the PSI Bericht Nr. 18-04 (1) defines this color scale:

![Alt text](img/tab26.png?raw=true "Color scale - PSI Bericht Nr. 18-04, p65, Table 26")

and particular color codes derived from the image are following:
```
percentage; RGB color values; HTML code
≤0; 5:5:255; #0505FF
10; 51:85:255; #3355FF
20; 59:154:255; #3B9AFF
30; 36:229:255; #24E5FF
40; 112:255:210; #70FFD2
50; 182:255:145; #B6FF91
60; 228:255:76; #E4FF4C
70; 255:234:0; #FFEA00
80; 255:170:0; #FFAA00
90; 255:101:0; #FF6500
≥100; 255:0:0; #FF0000
```
provided files:

**ERS_color_ramps_QGIS.xml**
- preconfigured color ramps in QGIS XML format for easy import
- contains definition of the color classes / gradient, can be used for styling both vector and raster layers in QGIS

**QGIS_layer_color_style_example_ERS_DHSR_uSvph.qml**
- QGIS layer style file in native QML format
- QML file is defined for particular layer, contains information about used data column, value ranges and attached colors
- this example is derived from "Italy" demo data, but can be changed in QGIS and used for another layer and data column (requires changes and re-classification of the data in QGIS)

preconfigured color ramps in QGIS XML format for easy import
QGIS layer style file (QML) example derived from "Italy" demo data

(1) Butterweck, G., Bucher, B., Gryc, L., Debayle, C., Strobl, C.,  Maillard, S., Thomas, M., Helbig, A., Krol, I., Chuzel, S., Couvez, C., Ohera, M., Rybach, L., Poretti, C.,  Hofstetter-Boillat, B., Mayer, S., Scharding, G.: International Intercomparison Exercise of Airborne Gamma-Spectrometric Systems of the Czech Republic, France, Germany and Switzerland in the Framework of the Swiss Exercise ARM17. PSI-Report No. 18-04, ISSN 1019-0643, Paul Scherrer Institut, Villigen, Switzerland, 2018.
https://www.researchgate.net/publication/330482739_International_Intercomparison_Exercise_of_Airborne_Gamma-Spectrometric_Systems_of_the_Czech_Republic_France_Germany_and_Switzerland_in_the_Framework_of_the_Swiss_Exercise_ARM17
