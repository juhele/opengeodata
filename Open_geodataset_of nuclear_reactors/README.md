Open dataset and map of nuclear reactors in the world

see my blog for more:
http://juhele.blogspot.com/2018/01/open-dataset-and-map-of-nuclear.html

I am still working on it but I hope I will add some preliminary version here


2018-09-07 update:

World nuclear power reactors files available for download

![Alt text](World_nuclear_power_reactors_preview.jpg?raw=true "World nuclear power reactors in QGIS")
Background map © OpenStreetMap contributors

The dataset is available in CSV format and also in OGC GeoPackage format (geodatabase with vector points) with style included so you can easily load it in your GIS software like QGIS for example.

Data sources

I also started with the Power Reactor Information System (PRIS)(1), developed and maintained by the IAEA. All the data used in my dataset were obtained from publicly available PRIS website.

For the positions I used Wikipedia (2) to get approximate NPP positions and then adjusted them in Google Maps using Google Satellite map layer so the points are placed on each reactorblock if there is information about the block numbering (photos, internet news articles etc.). In other cases the point is placed in the middle of the reactor blocks or in a similar way. OpenStreetMap (OSM) (3) helped me much as it often contains more information then Google Maps so many thanks to all OSM contributors. Another useful source was Wikimapia.org (4).

I also want to enrich (like uranium :-) ) the dataset with reactors not present in the PRIS database but mentioned on the Wikipedia “List of nuclear reactors” page. Some are already in the map like the infamous Windscale Piles etc.


(1) https://pris.iaea.org/PRIS/home.aspx

(2) https://en.wikipedia.org/wiki/List_of_nuclear_reactors

(3) https://www.openstreetmap.org

(4) http://wikimapia.org
