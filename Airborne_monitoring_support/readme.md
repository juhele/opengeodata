<img src="Images/logo_SURO_MV_CZ.png" alt="SURO and MVČR logo" width="800"/>

# Podpůrné GIS vrstvy pro letecký radiační monitoring

Tyto datové vrstvy vznikly v rámci řešení výzkumného projektu "[Posílení a rozvoj nástrojů, schopností a dovedností pro zajištění efektivního řízení odezvy na radiační havárii ve všech fázích včetně zohlednění požadavků Národního radiačního havarijního plánu ČR (VC20232025007)](https://starfos.tacr.cz/projekty/VC20232025007)" řešeného v Programu bezpečnostního výzkumu pro potřeby státu 2022-2027 (SecPro) jehož poskytovatelem je Ministerstvo vnitra České Republiky.

Vrstvy jsou k dispozici ve standardních formátech, ale primárně jsou určeny pro použití v bezplatně dostupném open-source programu [QGIS](https://qgis.org/), doporučena je verze 3.40 a vyšší.

## Vrstva českých a slovenských letišť

<img src="Images/Airports_CZ-SK_preview.jpg" alt="SURO and MVČR logo" width="600"/>

*(background map © OpenStreetMap contributors)*

- bodová vrstva letišť vč. vloženého stylu zobrazení bodů i popisků
- polygonová vrstva kruhů o poloměru 5,5 km kolem bodů letišť - zóny ATZ (Aerodrome traffic zone), CTR (Control Zone) s ohledem na použití [UAV](https://ans.cz/services/UASoperaions/operationofdronesinthevicinityofaerodromes)
- doplňková data v atributové tabulce
- souřadnicový systém vrstvy [WGS 84 / UTM zone 33N - EPSG:32633](https://epsg.io/32633), klasické GPS souřadnice jsou k dispozici v atributové tabulce 
- formát OGC Geopackage, ke stažení zde: [Airports_CZ-SK.zip (615 kb)](https://github.com/juhele/opengeodata/blob/master/Airborne_monitoring_support/Data/Airports_CZ-SK.zip)

Data pochází z databáze vnitrostátních i neveřejných letišť, které se nacházejí v České a Slovenské republice zveřejněné na webu [SkyFly](https://www.skyfly.cz/databaze-letist.php?kraje=&zeme=&povrch=&stranka=11)

## ENR 5.1 - Vrstva prostorů v ČR - zakázané, omezené a nebezpečné prostory

-
- typy prostorů: Prohibited Area (Zakázaný prostor, No-fly zone / bezletová zóna), Restricted Area (Omezený prostor), Dangerous Area (Nebezpečný prostor) - vysvětlené např. na Wikipedii na stránce [Vzdušný prostor](https://cs.wikipedia.org/wiki/Vzdu%C5%A1n%C3%BD_prostor)
-

Datová vrstva vychází z informací z [VFR příručky ČR](https://aim.rlp.cz/vfrmanual/), konkrétně dokumentu [ENR 5.1-1](https://aim.rlp.cz/ais_data/aip/data/valid/e5-1.pdf), vydaného Leteckou informační službou ŘLP ČR, s.p., snahou bylo sjednotit vzhled s online aplikací [AisView](https://aisview.rlp.cz). 


## ENR 5.2 - Vrstva prostorů v ČR - TRA, TSA

-
- typy prostorů: TRA - Temporary Reserved Area (Dočasně vymezený (rezervovaný) prostor), TSA - Temporary Segregated Area (Dočasně vyhrazený prostor) - vysvětlené např. na Wikipedii na stránce [Vzdušný prostor](https://cs.wikipedia.org/wiki/Vzdu%C5%A1n%C3%BD_prostor)
-

Datová vrstva vychází z informací z [VFR příručky ČR](https://aim.rlp.cz/vfrmanual/), konkrétně dokumentů [ENR 5.1-1](https://aim.rlp.cz/ais_data/aip/data/valid/e5-1.pdf)(verze 29 DEC 22) a [ENR 5.2-1](https://aim.rlp.cz/ais_data/aip/data/valid/e5-2.pdf), vydané Leteckou informační službou ŘLP ČR, s.p., snahou bylo sjednotit vzhled s online aplikací [AisView](https://aisview.rlp.cz). 

----na obsahu se pracuje----

## Tematické online mapy ČR

[k dispozici zde](opengeodata/GIS_supporting_layers/) - například:
- Radiometrická mapa 1 : 500 000 (GEOČR500)(rastr)
- Radiometrická mapa 1 : 500 000 (GEOČR500)(vektor) - tato vrstva lze uložit pro offline použití
- Mapa radonového indexu 1 : 500 000 (GEOČR500)(rastr)

K dispozici ve formě souborů *.QLR (QGIS Layer Definition file), což je soubor XML, který kromě informací o stylu QGIS pro vrstvu obsahuje ukazatel na zdroj dat vrstvy. QLR soubor lze snadno použít i jako zástupce pro různé typy online datových zdrojů. Uživatel nemusí konfigurovat připojení k online službě, pouze přetáhne QLR soubor do mapového okna QGISu a vrstva se načte.

Varování: QLR soubor pouze usnadňuje načtení vrstvy ze serveru poskytovatele vč. možnosti dalšího nastavení v QGISu (varianty vrstev ve stupní šedi). Nemůžeme garantovat funkčnost - poskytovatel dat může provést změny mapové služby - pokud to zjistíme, pokusíme se to opravit i v našem QLR.

## Podkladové online mapy ČR

[k dispozici zde](opengeodata/GIS_supporting_layers/) - například:
- CENIA Historická ortofotomapa (50. léta)
- ČÚZK Ortofoto ČR (aktuální ortofoto)
- ČÚZK Ortofoto ČR (aktuální ortofoto) - grayscale version / černobílá varianta

K dispozici ve formě souborů *.QLR (QGIS Layer Definition file), což je soubor XML, který kromě informací o stylu QGIS pro vrstvu obsahuje ukazatel na zdroj dat vrstvy. QLR soubor lze snadno použít i jako zástupce pro různé typy online datových zdrojů. Uživatel nemusí konfigurovat připojení k online službě, pouze přetáhne QLR soubor do mapového okna QGISu a vrstva se načte.

Varování: QLR soubor pouze usnadňuje načtení vrstvy ze serveru poskytovatele vč. možnosti dalšího nastavení v QGISu (varianty vrstev ve stupní šedi). Nemůžeme garantovat funkčnost - poskytovatel dat může provést změny mapové služby - pokud to zjistíme, pokusíme se to opravit i v našem QLR.



*Disclaimer:*
*Obsah tohoto repozitáře je poskytován "TAK JAK JE" a veškeré výslovné nebo předpokládané záruky, včetně, ale bez omezení na - předpokládané záruky obchodovatelnosti a vhodnosti pro specifické účely se odmítají. Autor nebo přispěvatelé nebudou v žádném případě odpovídat za jakékoliv přímé, nepřímé, náhodné, speciální, exemplární, nebo následné škody; ztrátu uplatnění, dat, nebo zisku) způsobené jakkoliv a na základě jakékoli teorie o
odpovědnosti, ať už smluvní odpovědnosti, přesně vymezené odpovědnosti, nebo občanskoprávní odpovědnosti (včetně zanedbání nebo jinak), vzniklé jakýmkoli způsobem, souvisejícím s používáním těchto datových vrstev.*
