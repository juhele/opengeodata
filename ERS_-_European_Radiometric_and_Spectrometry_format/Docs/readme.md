# ERS (European Radiometric and Spectrometry format) attribute description for ERS 2.0

For easier use for software developmnent and format implementation the description was moved in separate CSV file.

**"ERS2.0_data_attributes_1.csv"**

and

**"ERS2.0_data_attributes_2_identifier_tails.csv"**

The attributes and identifier tails are sometimes combined so the software implementation needs to handle these "new" attributes - but luckily, "DHSR" and "DHSR_COS" are different parameters so loading them as a separate columns is perfect. I do not remember any case requiring to load differently named attributes (for example from two files) in the same column.

Few examples of combining the field names (attributes) and the identifier tails are described below.
In the testing packages you have data with following attributes:

```
PA
CD
CT
PE
PN
PH
AD_K-40
AD_U-238
AD_Th-232
AA_Cs-137
DHSR
```

as you see, these:

AD_K-40
AD_U-238
AD_Th-232
AA_Cs-137

are created by combining:

AD ... activity per unit dry weight of a source distributed in a volume (Bq/kg)

with parcticular radionuclide:

_Xx-000m	... radionuclide, all radionuclides allowed. Examples: _Cs-137, _Tc-99m. Decision limit for Cs-137 per unit area AA_LC_Cs-137

Similarly,
you can also (although not in this demo data) find "DHSR_COS" attribute in some files which is combination of:

DHSR ...	Ambient dose equivalent rate dH*(10)/dt	μSv/h

and identifier tail:

_COS	... Cosmic contribution. Example: DHSR_COS includes contributions of photons, neutrons and charged particles produced by cosmic radiation

source of the ERS2.0 format definitions:

Butterweck, G., Bucher, B., Gryc, L., Debayle, C., Strobl, C.,  Maillard, S., Thomas, M., Helbig, A., Krol, I., Chuzel, S., Couvez, C., Ohera, M., Rybach, L., Poretti, C.,  Hofstetter-Boillat, B., Mayer, S., Scharding, G.: International Intercomparison Exercise of Airborne Gamma-Spectrometric Systems of the Czech Republic, France, Germany and Switzerland in the Framework of the Swiss Exercise ARM17. PSI-Report No. 18-04, ISSN 1019-0643, Paul Scherrer Institut, Villigen, Switzerland, 2018.

available here:

https://www.researchgate.net/publication/330482739_International_Intercomparison_Exercise_of_Airborne_Gamma-Spectrometric_Systems_of_the_Czech_Republic_France_Germany_and_Switzerland_in_the_Framework_of_the_Swiss_Exercise_ARM17
