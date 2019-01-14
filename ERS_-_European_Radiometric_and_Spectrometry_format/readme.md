# ERS (European Radiometric and Spectrometry format) data for software development and testing

*NOTE: implementation of the new version ERS 2.0 is currently in progress. I would like to also add specification and sample data of ERS version 2.0 later.*

Description from the documentation (link to "PSI Bericht Nr. 09-07" below)

*DESCRIPTION OF THE ERS FORMAT

*A major goal of the European ECCOMAGS-project was the creation of a common data format for uncomplicated transfer between the participating measurement teams.

*General principles

*The ERS-format (European Radiometric and Spectrometry format) is primarily designed for mobile measurements but can also be applied to In-situ measurements, to measurements on soil samples, to laboratory gamma spectrometry, to fixed measurement stations and so on. The objective is to have a general format, enough flexible to fit with the needs of various measurement techniques. In agreement with the format syntax, each community of users would recommend some rules to standardize the use of this format.

*The ERS-format uses ASCII characters to provide easy access and easy use. There is no need to have reading and writing routines just to see the data. An ASCII format is also more flexible. It would make it easier to compose files with various contents. Some files would content spectral data, processed data or both. The syntax should be simple and easily readable. A format based on entities consisting of identifiers-value pairs describing the quantities and measured values was introduced in the PRD (Paired Radiation Data)-format defined by R.Finck (SSI) in 2002. The ERS-format uses the same syntax. It allows flexibility in the file content while providing good readability. A list of identifiers is defined and would be upgraded when needed. To maintain backward compatibility of the upgraded versions with the lower versions, all identifiers defined in the lower versions should be kept unchanged.

# ERS version 1.0
- data built following the official documentation:

Bucher B, Guillot L, Strobl C, Butterweck G, Gutierrez S, Thomas M, Hohmann C, Krol I, Rybach L, Schwarz G. International intercomparison exercise of airborne gammaspectrometric systems of Germany, France and Switzerland in the framework of the Swiss Exercise ARM07. Villigen, Switzerland: Paul Scherrer Institut PSI; 2009. 130p. PSI Bericht Nr. 09-07.

available here:

http://www.lib4ri.ch/archive/nebis/PSI_Berichte_000478272/PSI-Bericht_09-07_2D.pdf

or:

https://inis.iaea.org/collection/NCLCollectionStore/_Public/41/030/41030200.pdf

About the data:
- real data, but changed location, date and time information
- for more information check the data packages

Data source for citation etc.:

National Radiation Protection Institute (SURO)

Prague, Czech Republic

www.suro.cz


- made almost manually using QGIS (1), LibreOffice (2) and Notepad++ (3)

Data previews:

![Alt text](package_1A_ERS1.0_demo_data_ITALY_preview2_detail.jpg?raw=true "Italy dataset preview")

![Alt text](package_2A_ERS1.0_demo_data_PERU_preview.jpg?raw=true "Peru dataset preview")

Software links:

(1) https://qgis.org
(2) https://www.libreoffice.org
(3) https://notepad-plus-plus.org
