# GIS supporting layers - various sources of geographic data for easy use in GIS - primarily targeted at QGIS 

*GIS - podpůrné vrstvy - různé zdroje geografických dat pro snadné použití v GIS - primárně zaměřené na QGIS*

## QGIS Layer Definition file (QLR)

QLR is an XML file that contains a pointer to the layer data source in addition to QGIS style information for the layer. A QLR file can also be easily used as a shortcut file for various types of online data sources. The user does not need to configure the connection to the online service, he just drags the QLR file into the QGIS map window and the layer is loaded.

Warning: The QLR file only facilitates the loading of the layer from the provider's server incl. options for further settings in QGIS (variants of grayscale layers). We cannot guarantee functionality - the data provider may make changes to the map service - if we find out, we will try to fix it in our QLR as well.
  
*QLR je soubor XML, který kromě informací o stylu QGIS pro vrstvu obsahuje ukazatel na zdroj dat vrstvy. QLR soubor lze snadno použít i jako zástupce pro různé typy online datových zdrojů. Uživatel nemusí konfigurovat připojení k online službě, pouze přetáhne QLR soubor do mapového okna QGISu a vrstva se načte.*

*Varování: QLR soubor pouze usnadňuje načtení vrstvy ze serveru poskytovatele vč. možnosti dalšího nastavení v QGISu (varianty vrstev ve stupní šedi). Nemůžeme garantovat funkčnost - poskytovatel dat může provést změny mapové služby - pokud to zjistíme, pokusíme se to opravit i v našem QLR.*
