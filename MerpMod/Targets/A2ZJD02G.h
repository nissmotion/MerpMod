#define MOD_ECUID 8647A48EE0
#define MOD_DATE 14.10.17.17.37
#include "Flash.h"
#define MOD_CONFIG Flash
#define MOD_BUILD Debug
#define MOD_RELEASE 0
#define ECU_CALIBRATION_ID A2ZJD02G
#define ECU_IDENTIFIER 2F54505406
/////////////////////
// NonSpecific Rom Info and Routines
/////////////////////

#define dCalId (0x00002000)
#define dEcuId (0x00068F38)
#define dRomHoleStart (0x00075300)
#define pRamHoleStart (0xFFFFC360)
#define sPull2DFloat (0x0000208C)
#define sPull3DFloat (0x00002140)

/////////////////////
// Switch Hacks
/////////////////////

#define tTipInEnrich (0x0005C360)
#define tCrankingFuelA (0x0005C0A8)
#define tCrankingFuelB (0x0005C0BC)
#define tCrankingFuelC (0x0005C0D0)
#define tCrankingFuelD (0x0005C0E4)
#define tStartupEnrich2_1A (0x0005C148)
#define tStartupEnrich2_1B (0x0005C170)
#define tStartupEnrich2_2A (0x0005C15C)
#define tStartupEnrich2_2B (0x0005C184)
#define tStartupEnrich3_1A (0x0005C0F8)
#define tStartupEnrich3_1B (0x0005C10C)
#define tStartupEnrich3_2A (0x0005C120)
#define tStartupEnrich3_2B (0x0005C134)

/////////////////////
// Rev Limit Hack
/////////////////////

#define hRevLimDelete (0x00011478)
#define sRevLimStart (0x0002BF68)
#define sRevLimEnd (0x0002BF9E)
#define pFlagsRevLim ((unsigned char*)0xFFFFAFCC)
#define RevLimBitMask (0x80)

/////////////////////
// Speed Density Hack
/////////////////////

#define hMafCalc (0x00007844)
#define sMafCalc (0x000077E4)

/////////////////////
// Injector Hack
/////////////////////

#define dInjectorScaling ((float*)0x00061FA4)

/////////////////////
// Cel Hacks
/////////////////////

#define sCelTrigger (0x00053E58)
#define hCelSignal (0x00053F70)
#define hCelTriggerShort (0x00053F64)
#define pCelSignalOem ((unsigned char*)0xFFFFBF62)

/////////////////////
// Boost Hacks
/////////////////////


/////////////////////
// WGDC Hacks
/////////////////////

#define hWgdc (0x00011144)
#define sWgdc (0x00013E68)
#define tWgdcMax (0x0005B73C)

/////////////////////
// Primary Open Loop Fueling Hacks
/////////////////////

#define pPolf4Byte (0xFFFFAE70)
#define pPolfEnrich (0xFFFFAE70)

/////////////////////
// Timing Hacks
/////////////////////

#define pBaseTiming (0xFFFFB17C)
#define pKcaIam (0xFFFFB2A4)

/////////////////////
// Spark Cut
/////////////////////


/////////////////////
// Flags-Signals
/////////////////////

#define pResumeFlags ((unsigned char*)0xFFFFA460)
#define ResumeBitMask ((unsigned char)0x04)
#define pCoastFlags ((unsigned char*)0xFFFFA460)
#define CoastBitMask ((unsigned char)0x02)
#define pBrakeFlags ((unsigned char*)0xFFFFA460)
#define BrakeBitMask ((unsigned char)0x08)
#define pClutchFlags ((unsigned char*)0xFFFFA845)
#define ClutchBitMask ((unsigned char)0x80)

/////////////////////
// NonSpecific Engine params
/////////////////////

#define pFbkc4 ((float*)0xFFFFB260)
#define pIam4 ((float*)0xFFFF822C)
#define pEngineSpeed ((float*)0xFFFFA874)
#define pVehicleSpeed ((float*)0xFFFFA864)
#define pCoolantTemp ((float*)0xFFFF90C8)
#define pAtmoPress ((float*)0xFFFF913C)
#define pManifoldAbsolutePressure ((float*)0xFFFFA618)
#define pIntakeAirTemp ((float*)0xFFFF90B8)
#define pMassAirFlow ((float*)0xFFFF90F4)
#define pMafSensorVoltage ((short*)0xFFFF9022)
#define pEngineLoad ((float*)0xFFFFA770)
#define pReqTorque ((float*)0xFFFFB43C)
#define pThrottlePlate ((float*)0xFFFFA6A8)
#define pCurrentGear ((unsigned char*)0xFFFFA969)
#define pAf1Res ((float*)0xFFFFA120)

/////////////////////
// OBD Experimental stuff
/////////////////////


/////////////////////
// New Definitions
/////////////////////

#define dLoadSmoothingA (0x00060CC8)
#define dLoadSmoothingB (0x00060CCC)
#define dLoadSmoothingFinal (0x00060CD0)

/////////////////////
// Memory Reset
/////////////////////

#define sMemoryReset (0x0000EF3C)
#define hMemoryReset (0x0000CAC0)
#define pMemoryResetLimit (0xFFFFDFFB)
#define hMemoryResetLimit (0x0000F124)

