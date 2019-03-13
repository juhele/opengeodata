PEI airborne gammaspectrometric data description (in the same order as in the provided demo data):

LineNo - Locked line number
Line - Locked line number (ASCII)
RECS - fiducial-records
DTsc_sec - elapsed time (sec)
SyncTime_ms - Synchronization time msec of the day (ms)
RecTime_ms - Recording time msec of the day (ms)
Sync - Synchronization tick
RecTick - Recording Tick
RecDev - GPS=1 Mag=2 GRS10=3 AGRS=4 AGRSC=5 GPS2=6 SpecRSI=7 Dosemeter=8 Timer=20 Force=+10
MarkTm - mark time
UsedAlt_m - Used altitude (m) (e.g. height above ground)
XTE_m - Cross Track Error (m)
InOut - Inside/Outside of the area: I – inside; i – outside
GHead_deg - GPS heading (deg)
GSpeed_km/hr - GPS speed (km/h)
Galt_m - GPS Altitude (m)
XCo_m - X coordinate (m), for "Uluru" demo data is it UTM coordinate - exactly WGS84 UTM Zone 52S - EPSG:32752
YCo_m - Y coordinate (m), for "Uluru" demo data is it UTM coordinate - exactly WGS84 UTM Zone 52S - EPSG:32752
Lat_deg - latitude coordinate in decimal degrees (WGS84 - EPSG:4326)
Lon_deg - longitude coordinate in decimal degrees (WGS84 - EPSG:4326)
Geos_m  - Geoidal separation (m)
Gtm_sec - GPS Time - UTC / GMT - (sec)
GPSFix - GPS Fix
Stl - Number of Used Satellites
Epoch_sec - Epoch - number of sec since 12:00AM 1-Jan-1970 
TickGPS - Tick GGA string
SpecTick - Spec data tick
ISPS - Spectrometer tuning status. Possible values: T - Thorium, U - Uranium, K - Potassium, A – Almanac, N - not tuned, 0 –not connected, n – invalid data received from detector. 
Th_cps - Thorium window Down (cps)
U_cps - Uranium window Down (cps)
K_cps - Potassium window Down (cps)
Co_cps - Cobalt window Down (cps)
Cs_cps - Cesium window Down (cps)
Uu_cps - Uranium window Up (cps)
Cos_cps - Cosmic channel (cps)
TC_cps - Total count Down (cps)
TCu_cps - Total count Up (cps)
LSp_cps - Low spectrum (110 – 1200 keV) window Down (cps)
LSpu_cps - Low spectrum (110 – 1200 keV) window  Up (cps)
I_cps - Iodine window Down (AGRS IRIS only)(cps)
Ru_cps - Ruthenium window Down (AGRS IRIS only)(cps)
DosL_nGyph - Local dose rate (nGyph)
DosG_nGyph - Ground dose rate (nGyph)
ETms_msec - Elapsed Time - spectrometer sampling interval (AGRS only)(msec)
ALTsp_m - Altitude (m)
BARsp_kPa - Barometric pressure (kPa) 
TMPsp_deg - Temperature (degree)
HUMsp_pct - Humidity (%)
cI_Bqpm2 - Iodine contamination (Bq/m2)
cRu_Bqpm2 - Ruthenium contamination (Bq/m2)
cCs_Bqpm2 - Cesium contamination (Bq/m2)
cCo_Bqpm2 - Cobalt contamination (Bq/m2)
cK_Bqpkg - Potassium contamination (Bq/kg)
cU_Bqpkg - Uranium contamination (Bq/kg)
cTh_Bqpkg - Thorium contamination (Bq/kg)
ConcK_pct - Potassium concentration (%)
ConcU_ppm - Uranium concentration (ppm)
ConcTh_ppm - Thorium concentration (ppm)
G130014_ratio - ratio,gain
G130015_ratio - ratio,gain
G130032_ratio - ratio,gain
G130030_ratio - ratio,gain
TA130014_µs - TAcq (µs)
TA130015_µs - TAcq (µs)
TA130032_µs - TAcq (µs)
TA130030_µs - TAcq (µs)
TL130014_µs - TLive (µs)
TL130015_µs - TLive (µs)
TL130032_µs - TLive (µs)
TL130030_µs - TLive (µs)
ReV130014_mV - ADC_Ref_V (mV)
ReV130015_mV - ADC_Ref_V (mV)
ReV130032_mV - ADC_Ref_V (mV)
ReV130030_mV - ADC_Ref_V (mV)
Tmp130014_deg - Temperature (deg)
Tmp130015_deg - Temperature (deg)
Tmp130032_deg - Temperature (deg)
Tmp130030_deg - Temperature (deg)

spc_ch001-spc_ch512 - raw spectra channels (ISPD) in the "Uluru" CSV and GIS files

PEI binary file uses this:

ISPD,512,wd*,1.000000,0.000000,cps,
ISPU,512,wd*,1.000000,0.000000,cps,

this file was created for:
https://github.com/juhele/opengeodata/tree/master/Airborne_gammaspectrometry_demo_data

References:
1) PEI binary file header
2) AGIS/IRIS Airborne Geophysical Information System Operation Manual, Revised Oct l 2004, Version 2.3.2, Pico Envirotc Inc. 
publicly available from: http://intranet.geoecomar.ro/rchm/wp-content/uploads/downloads/2013/05/Agis-OM_VER2_2.3.2_.pdf