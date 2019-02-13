#ifndef CONFIG_H
#define CONFIG_H

// Uncomment ONE if PAL/NTSC autodetection does not work
//======================================================
//#define FORCE_NTSC
//#define FORCE_PAL

//#define NEW_FILTER
//#define MAH_CORRECTION

// INTERNALS - DO NOT CHANGE
//=============================

//#define UPDATE_FONT_ONLY
//#define FORCE_CLEAN_EEPROM
//#define STEELE_PDB
//#define STEELE_PDB_OVERRIDE
//#define BF32_MODE

#define PIGGY_OSD

#ifdef PIGGY_OSD
#define STEELE_PDB
#define STEELE_PDB_OVERRIDE_LED
#define OD_LED_PIN  PIND7
#define OD_LED_PORT PORTD
#define OD_LED_DDR  DDRD
#endif

// vTx config
//=============================
//#define IMPULSERC_VTX
//#define AUSSIE_CHANNELS

#endif
