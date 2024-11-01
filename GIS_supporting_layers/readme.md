# GIS supporting layers - various sources of geographic data for easy use in GIS - primarily targeted at QGIS 

*GIS - podpůrné vrstvy - různé zdroje geografických dat pro snadné použití v GIS - primárně zaměřené na QGIS*

## Introduction

QGIS Layer Definition file (QLR) is an XML file that contains a pointer to the layer data source in addition to QGIS style information for the layer. A QLR file can also be easily used as a shortcut file for various types of online data sources. The user does not need to configure the connection to the online service, he just drags and drops the QLR file into the QGIS map window and the layer is loaded.

Warning: The QLR file only facilitates the loading of the layer from the provider's server incl. options for further settings in QGIS (variants of grayscale layers). We cannot guarantee functionality - the data provider may make changes to the map service - if we find out, we will try to fix it in our QLR as well.

The use of map layers is subject to the license terms of the respective data provider. Please read the license terms of the given map layer and respect them. In most cases, the citation of the source in a certain wording is required in map outputs  (figures, publications, printed maps).

*Úvod*

*QGIS Layer Definition file (QLR) je soubor XML, který kromě informací o stylu QGIS pro vrstvu obsahuje ukazatel na zdroj dat vrstvy. QLR soubor lze snadno použít i jako zástupce pro různé typy online datových zdrojů. Uživatel nemusí konfigurovat připojení k online službě, pouze přetáhne QLR soubor do mapového okna QGISu a vrstva se načte.*

*Varování: QLR soubor pouze usnadňuje načtení vrstvy ze serveru poskytovatele vč. možnosti dalšího nastavení v QGISu (varianty vrstev ve stupní šedi). Nemůžeme garantovat funkčnost - poskytovatel dat může provést změny mapové služby - pokud to zjistíme, pokusíme se to opravit i v našem QLR.*

*Použití mapových vrstev se řídí licenčními podmínkami příslušného poskytovatele dat. Přečtete si prosím licenční podmínky dané mapové vrstvy a respektujte je. Většinou je v mapových výstupech (obrázky, publikace, tištěné mapy) vyžadována citace zdroje v určitém znění.*

## Global scope layers

*Vrstvy globálního rozsahu*

[Click here / Klikněte zde](https://github.com/juhele/opengeodata/tree/master/GIS_supporting_layers/GIS_layers_1_global)

OpenStreetMap color, OpenStreetMap grayscale, OpenTopoMap color, OpenTopoMap grayscale, ESRI World Imagery


## Country-specific layers

*Vrstvy pro specifické země*

### Czech Republic / Česká republika (CZE)
[Click here / Klikněte zde](https://github.com/juhele/opengeodata/tree/master/GIS_supporting_layers/GIS_layers_2_CZE)

CENIA Historická ortofotomapa (50. léta), ČÚZK Ortofoto ČR (aktuální ortofoto), ČÚZK Ortofoto ČR (aktuální ortofoto) - grayscale version / černobílá varianta, Mapa radonového indexu 1 : 500 000 (GEOČR500) / Radon risk map 1 : 500,000 (GEOCR500)

### Slovak Republic / Slovenská republika (SVK)
[Click here / Klikněte zde](https://github.com/juhele/opengeodata/tree/master/GIS_supporting_layers/GIS_layers_3_SVK)

ZBGIS Ortofotomozaika, ZBGIS®/DMR3/Tieňovaný reliéf, ZBGIS Digitálny model reliéfu (DMR3.5), ZBGIS Administratívne hranice (vector data)

### Republic of Poland / Rzeczpospolita Polska (POL)
[Click here / Klikněte zde](https://github.com/juhele/opengeodata/tree/master/GIS_supporting_layers/GIS_layers_4_POL)

Orthophotomap - high resolution, Mapa Geologiczna Polski w skali 1:500 000, Digital Terrain Model - Hillshade
