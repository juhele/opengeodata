# Open dataset of uranium mines and deposits

## Usage:
- .geojson files can be displayed directly in the map, it is a GitHub feature, for GIS aplications download the *.gpkg file
- the GeoPackage (*.gpkg) file contains a "built-in" symbology style including symbols and labels

## Changelog:

2023-11-23 added some sites in Bolivia, mainly using Mindat.org + a lot of manual work
  
2023-11-22 added many sites in Mongolia, one in Brazil, mainly using Mindat.org + NEA/IAEA "Uranium Resources, Production and Demand 2022" report [available online here](https://www.oecd-nea.org/upload/docs/application/pdf/2023-04/7634_uranium_-_resources_production_and_demand_2022.pdf) a lot of manual work
    
2023-08-03 added many sites in Slovakia, Poland, Russia etc., mainly using Mindat.org + a lot of googling and manual work
  
2020-03-04 added Africa, Asia and the rest of the world data derived from USGS MRDS

2020-03-05 some newly added sites in Italy and Switzerland using IAEA UDEPO + Mindat.org + a lot of googling and manual work


The dataset is available in CSV format and also in OGC GeoPackage format (geodatabase with vector points) with style included so you can easily load it in your GIS software like QGIS for example. All datasets have standard GPS coordinates - e.g. EPSG:4326 Geodetic coordinate system for World - https://epsg.io/4326


## Data resources:

Czech Republic - data from Czech Geological Survey: [ČGS - Důlní díla a poddolování](https://mapy.geology.cz/dulni_dila_poddolovani/)

Finland - Geological Survey of Finland / Geologian tutkimuskeskus: [FinU - a database on uranium deposits in Finland](http://tupa.gtk.fi/raportti/arkisto/m60_2000_1.pdf)

France - position:  [Programme MIMAUSA – Carte des anciens sites miniers d'uranium](https://mimausabdd.irsn.fr/), details: IAEA-TECDOC-1843

North America, South America, Africa, Asia etc. - [USGS Mineral Resource Data System (MRDS)](https://mrdata.usgs.gov/mrds/)
- these data taken as a base for countries where no better spatial data are available
- to be updated later if possible

## Previews:

Entire map extent:

![entire map extent](uranium_mines_preview01_world.jpg?raw=true "entire map extent")
Background map © OpenStreetMap contributors

Map detail with labels:

![map detail with labels](uranium_mines_preview02_detail.jpg?raw=true "map detail with labels")
Background map © OpenStreetMap contributors
