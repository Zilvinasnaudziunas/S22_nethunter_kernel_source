#ifndef IS_VENDOR_CONFIG_RSW_V11_H
#define IS_VENDOR_CONFIG_RSW_V11_H

#define USE_CAMERA_HEAP
#ifdef USE_CAMERA_HEAP
#define CAMERA_HEAP_NAME	"camera"
#define CAMERA_HEAP_NAME_LEN	6
#define CAMERA_HEAP_UNCACHED_NAME	"camera-uncached"
#define CAMERA_HEAP_UNCACHED_NAME_LEN	15
#endif

/* #define CAMERA_DTP_TIMER_MS	600 */
#define CAMERA_EEPROM_SUPPORT_FRONT

#define VENDER_PATH
#define USE_CAMERA_SENSOR_RETENTION 1
#if IS_ENABLED(USE_CAMERA_SENSOR_RETENTION)
#define CAMERA_RETENTION_SHARE_POWER	"VDDIO_WIDE_1P8"
#endif
#define CAMERA_REAR_DUAL_CAL
#define CAMERA_REAR2
#define CAMERA_REAR2_AF /* related to OIS */
#define CAMERA_REAR2_TILT
#define CAMERA_REAR2_MODULEID
#define CAMERA_REAR3
#define CAMERA_REAR3_AFCAL
#define CAMERA_REAR3_AFHALL
#define CAMERA_REAR3_TILT
#define CAMERA_REAR3_MODULEID

#define CAMERA_REAR_PAFCAL
#define CAMERA_FRONT_PAFCAL

#define USE_SELECT_GN3_DUAL_SYNC_PIN	1
#define CAMERA_3K1_MIRROR_FLIP	1

#define CAMERA_MODULE_DUAL_CAL_AVAILABLE_VERSION 'A'
#define IS_MAX_FW_BUFFER_SIZE (4100 * 1024)
#define IS_MAX_CAL_SIZE (64 * 1024)

#define CAMERA_REAR2_SENSOR_SHIFT_CROP
//#define USE_CAMERA_EMBEDDED_HEADER

#define USE_CAMERA_ADAPTIVE_MIPI
#ifdef USE_CAMERA_ADAPTIVE_MIPI
/*#define USE_CAMERA_ADAPTIVE_MIPI_RUNTIME*/
#endif

/* #define USE_CAMERA_CHECK_SENSOR_REV */

#define USE_CAMERA_HW_BIG_DATA
#ifdef USE_CAMERA_HW_BIG_DATA
/* #define CSI_SCENARIO_COMP		(0) This value follows dtsi */
#define CSI_SCENARIO_SEN_FRONT	(1)
#define CSI_SCENARIO_TELE		(2)
#define CSI_SCENARIO_SECURE		(3)
#define CSI_SCENARIO_SEN_REAR	(0)
#endif

#define USE_AF_SLEEP_MODE

/* It should be align with DDK and RTA side */
#define USE_NEW_PER_FRAME_CONTROL

#ifdef CAMERA_REAR_TOF
#define REAR_TOF_ROM_ID ROM_ID_REAR3
#endif

#define LEDS_S2MPB02_ADAPTIVE_MOVIE_CURRENT 120
/* #define LEDS_S2MPB02_FLASH_GPIO_CONTROL */

#define USE_SENSOR_LONG_EXPOSURE_SHOT

#define CONFIG_SECURE_CAMERA_USE 1

#define AK737X_SOFT_LANDING_DELAY_ON_DIRECTORS_VIEW 40 // 40ms

/* OIS */
#define CAMERA_2ND_OIS
/* #define CAMERA_USE_OIS_VDD_1_8V */
#define CAMERA_OIS_DOM_UPDATE_VERSION 'O'
#define CAMERA_OIS_SEC_UPDATE_VERSION 'P'
#define CAMERA_OIS_GYRO_OFFSET_SPEC 15000
#define OIS_DUAL_CAL_DEFAULT_VALUE_WIDE 0
#define OIS_DUAL_CAL_DEFAULT_VALUE_TELE 0
#define WIDE_OIS_ROM_ID ROM_ID_REAR
#define TELE_OIS_ROM_ID ROM_ID_REAR3
#define TELE_OIS_TILT_ROM_ID TELE_OIS_ROM_ID
//#define USE_OIS_HALL_DATA_FOR_VDIS
#define USE_OIS_STABILIZATION_DELAY 7000 //7ms
/* Tele sensor crop shift and OIS calibration will be applied instead of this feature in this project */
/* #define OIS_CENTERING_SHIFT_ENABLE */

#if defined(CONFIG_USE_CAMERA_LDU) || defined(CONFIG_SEC_FACTORY)
//#define USE_OIS_SHIFT_FOR_APERTURE
#endif

#ifdef USE_OIS_SHIFT_FOR_APERTURE
#if defined(CONFIG_SEC_FACTORY)
#define OIS_SHIFT_OFFSET_VALUE_NORMAL 0
#else
#define OIS_SHIFT_OFFSET_VALUE_NORMAL 1000
#endif
#endif

//#define TEMP_WIDE_DUALIZED
//#define USE_SHARE_I2C_CLIENT
#ifdef USE_SHARE_I2C_CLIENT
#define SOURSE_SENSOR_NAME SENSOR_NAME_S5KGN3
#define TARGET_SENSOR_NAME SENSOR_NAME_S5K2LD
#endif

#define USE_CAMERA_MCD_SW_DUAL_SYNC

#if 0
#define USE_CAMERA_IOVM_BEST_FIT

#define CAMERA_CSI_B_PHY_CFG (0x8044) /* U Wide */
#define CAMERA_CSI_C_PHY_CFG (0x8042) /* Wide */
#endif

#define USE_CAMERA_CHECK_EEPROM_STATUS

//#define USE_SENSOR_TEST_SETTING
#if !IS_ENABLED(CONFIG_USE_SIGNED_BINARY)
#define USE_MIPI_PHY_TUNING
#endif

#define USE_CAMERA_HEAP_FOR_ALL

#endif /* IS_VENDOR_CONFIG_RSW_V11_H */
