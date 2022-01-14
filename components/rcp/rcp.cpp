

#include "rcp.hpp"

/*
 RCP_PARAM_AF_ENABLE : Type : Value - target AF Enable
 RCP_PARAM_AF_MODE : Type : Value - AF Mode
 RCP_PARAM_AF_POINT : Type : Action - status
 RCP_PARAM_AF_POSITION : Type : Value - AF Position
 RCP_PARAM_AF_RECT : Type : Status - 
 RCP_PARAM_AF_SIZE : Type : Value - AF Size
 RCP_PARAM_AF_STATE : Type : Action - status Auto Focus State
 RCP_PARAM_APERTURE : Type : Value - target Iris
 RCP_PARAM_APERTURE_CONTROL : Type : Status - Aperture Control
 RCP_PARAM_APERTURE_LIST_MODE : Type : Value - Aperture Increments
 RCP_PARAM_APPLIED_CAMERA_LUT : Type : Status - 3D LUT Returns the name of the 3D LUT that is currently applied If no LUT is applied or if the current 3D LUT is disabled an empty string is returned
 RCP_PARAM_AUDIO_EXTERNAL_LEFT_GAIN : Type : Value - External Audio Ch 3 Gain
 RCP_PARAM_AUDIO_EXTERNAL_LIMITER : Type : Value - External Audio Limiter
 RCP_PARAM_AUDIO_EXTERNAL_LINK_GAIN : Type : Value - External Audio Link Ch 3 Ch 4 Gain
 RCP_PARAM_AUDIO_EXTERNAL_RIGHT_GAIN : Type : Value - External Audio Ch 4 Gain
 RCP_PARAM_AUDIO_HEADPHONE_MUTE : Type : Value - Mute Headphones
 RCP_PARAM_AUDIO_HEADPHONE_SOURCE : Type : Value - target Headphone Source Headphone source selection
 RCP_PARAM_AUDIO_INTERNAL_LEFT_GAIN : Type : Value - Internal Microphone Left Gain 1
 RCP_PARAM_AUDIO_INTERNAL_LIMITER : Type : Value - Internal Microphone Limiter
 RCP_PARAM_AUDIO_INTERNAL_LINK_GAIN : Type : Value - Internal Microphone Link Left Right Gain
 RCP_PARAM_AUDIO_INTERNAL_RIGHT_GAIN : Type : Value - Internal Microphone Right Gain 2
 RCP_PARAM_AUDIO_SOURCE : Type : Value - target Audio Source Audio input source selection
 RCP_PARAM_AUDIO_VU_DATA : Type : Status - Audio VU Meter Data
 RCP_PARAM_AUTO_WHITE_BALANCE : Type : Action - Auto White Balance Perform auto white balance
 RCP_PARAM_BEEP_ENABLE : Type : Value - Beep Sounds
 RCP_PARAM_BEEP_RECORD_START : Type : Value - Rec Start Sound
 RCP_PARAM_BEEP_RECORD_STOP : Type : Value - Rec Stop Sound
 RCP_PARAM_CALIBRATE_STATE : Type : Action - status Calibrate
 RCP_PARAM_CALIBRATION_STATUS_INTEGRATION_TIME : Type : Status - Calibration Status Integration Time The status of the current calibration based on integraion time
 RCP_PARAM_CALIBRATION_STATUS_TEMPERATURE : Type : Status - Calibration Status Temperature The status of the current calibration based on sensor temperature
 RCP_PARAM_CAMERA_CDL_APPLY : Type : Action - Camera CDL Apply
 RCP_PARAM_CAMERA_CDL_DELETE : Type : Action - Camera CDL Delete
 RCP_PARAM_CAMERA_CDL_EXPORT_ALL_TO_MEDIA : Type : Action - Camera CDL Export All to Media
 RCP_PARAM_CAMERA_CDL_EXPORT_TO_MEDIA : Type : Action - Camera CDL Export to Media
 RCP_PARAM_CAMERA_CDL_LIST : Type : Camera - CDLs
 RCP_PARAM_CAMERA_FIRMWARE_VERSION : Type : Status - Camera Firmware Version
 RCP_PARAM_CAMERA_ID : Type : Value - Camera Name
 RCP_PARAM_CAMERA_LUT : Type : Value - LUT
 RCP_PARAM_CAMERA_LUT_DELETE : Type : Action - Camera LUT Delete
 RCP_PARAM_CAMERA_LUT_ENABLE : Type : Value - 3D LUT Enable
 RCP_PARAM_CAMERA_LUT_EXPORT_ALL_TO_MEDIA : Type : Action - Camera LUT Export All to Media
 RCP_PARAM_CAMERA_LUT_EXPORT_TO_MEDIA : Type : Action - Camera LUT Export to Media
 RCP_PARAM_CAMERA_LUT_LIST : Type : Camera - LUTs
 RCP_PARAM_CAMERA_PIN : Type : Status - Camera PIN
 RCP_PARAM_CAMERA_PRESET_APPLY : Type : Action - Camera Preset Apply
 RCP_PARAM_CAMERA_PRESET_DELETE : Type : Action - Camera Preset Delete
 RCP_PARAM_CAMERA_PRESET_EXPORT_ALL_TO_MEDIA : Type : Action - Camera Preset Export All to Media
 RCP_PARAM_CAMERA_PRESET_EXPORT_TO_MEDIA : Type : Action - Camera Preset Export to Media
 RCP_PARAM_CAMERA_PRESET_LIST : Type : Camera - Presets
 RCP_PARAM_CAMERA_RUNTIME : Type : Status - Camera Runtime Total camera runtime in seconds
 RCP_PARAM_CAMERA_TYPE : Type : Status - Camera Type
 RCP_PARAM_CDL_ENABLE : Type : Value - CDL Enable
 RCP_PARAM_CDL_OFFSET_BLUE : Type : Value - CDL Blue Offset
 RCP_PARAM_CDL_OFFSET_GREEN : Type : Value - CDL Green Offset
 RCP_PARAM_CDL_OFFSET_RED : Type : Value - CDL Red Offset
 RCP_PARAM_CDL_POWER_BLUE : Type : Value - CDL Blue Power
 RCP_PARAM_CDL_POWER_GREEN : Type : Value - CDL Green Power
 RCP_PARAM_CDL_POWER_RED : Type : Value - CDL Red Power
 RCP_PARAM_CDL_SATURATION : Type : Value - CDL Saturation
 RCP_PARAM_CDL_SLOPE_BLUE : Type : Value - CDL Blue Slope
 RCP_PARAM_CDL_SLOPE_GREEN : Type : Value - CDL Green Slope
 RCP_PARAM_CDL_SLOPE_RED : Type : Value - CDL Red Slope
 RCP_PARAM_CENTER_GUIDE_COLOR : Type : Value - Center Guide Color
 RCP_PARAM_CENTER_GUIDE_ENABLE : Type : Value - Center Guide Enable
 RCP_PARAM_CENTER_GUIDE_OPACITY : Type : Value - Center Guide Opacity
 RCP_PARAM_CENTER_GUIDE_TYPE : Type : Value - Center Guide Type
 RCP_PARAM_CLIP_DURATION : Type : Status - Clip Duration
 RCP_PARAM_CLIP_NAME : Type : Status - Clip Name
 RCP_PARAM_COLOR_SPACE : Type : Value - Output Color Space
 RCP_PARAM_COLOR_TEMPERATURE : Type : Value - Color Temperature
 RCP_PARAM_COLOR_TEMPERATURE_LIST : Type : Value - White Balance List Mode
 RCP_PARAM_COLOR_TEMPERATURE_PRESET : Type : Action - Color Temperature Preset Color temperature preset to apply Incandescent Daylight etc
 RCP_PARAM_CURRENT_CALIBRATION_INTEGRATION_TIME : Type : Status - Current Calibration Integration Time The current calibration s integration time
 RCP_PARAM_CURRENT_CALIBRATION_TEMPERATURE : Type : Status - Current Calibration Temperature The current calibration s sensor temperature
 RCP_PARAM_DATE : Type : Value - stored in camera Date Date (YYYY-MM-DD)
 RCP_PARAM_DISPLAY_PRESET_SDI_1 : Type : Value - target SDI : Display Preset
 RCP_PARAM_EXPOSURE_ADJUST : Type : Value - Exposure Adjust
 RCP_PARAM_EXPOSURE_ANGLE : Type : Value - Exposure Shutter Angle
 RCP_PARAM_EXPOSURE_DISPLAY : Type : Value - target Shutter
 RCP_PARAM_EXPOSURE_INTEGRATION_TIME : Type : Value - target Exposure Shutter Speed
 RCP_PARAM_FALSE_COLOR_ENABLE : Type : Value - False Color Enable
 RCP_PARAM_FALSE_COLOR_MODE : Type : Value - False Color Mode
 RCP_PARAM_FAN_MODE : Type : Value - Fan Control
 RCP_PARAM_FOCUS_DIST_DISPLAY_MODE : Type : Value - Focus Distance Display Mode Focus distance display mode or metric
 RCP_PARAM_FORMAT_ARG_CAMERA_ID : Type : Value - stored in camera Camera ID
 RCP_PARAM_FORMAT_ARG_CAMERA_POS : Type : Value - stored in camera Camera Position
 RCP_PARAM_FORMAT_ARG_EDGECODE : Type : Value - Edgecode
 RCP_PARAM_FORMAT_ARG_FILE_SYSTEM : Type : Value - File System
 RCP_PARAM_FORMAT_ARG_REEL_NO : Type : Value - Reel Number
 RCP_PARAM_FRAME_GUIDE_1_ABS_HEIGHT : Type : Value - Frame Guide 1 Absolute Height
 RCP_PARAM_FRAME_GUIDE_1_ABS_WIDTH : Type : Value - Frame Guide 1 Absolute Width
 RCP_PARAM_FRAME_GUIDE_1_ABS_X_OFFSET : Type : Value - Frame Guide 1 Absolute Offset X
 RCP_PARAM_FRAME_GUIDE_1_ABS_Y_OFFSET : Type : Value - Frame Guide 1 Absolute Offset Y
 RCP_PARAM_FRAME_GUIDE_1_COLOR : Type : Value - Frame Guide 1 Line Color
 RCP_PARAM_FRAME_GUIDE_1_ENABLE : Type : Value - Frame Guide 1 Enable
 RCP_PARAM_FRAME_GUIDE_1_LINE_STYLE : Type : Value - Frame Guide 1 Line Style
 RCP_PARAM_FRAME_GUIDE_1_MODE : Type : Value - Frame Guide 1 Mode
 RCP_PARAM_FRAME_GUIDE_1_OPACITY : Type : Value - Frame Guide 1 Line Opacity
 RCP_PARAM_FRAME_GUIDE_1_RECT_PIXELS : Type : Status - Frame Guide 1 Dimensions
 RCP_PARAM_FRAME_GUIDE_1_SCALE : Type : Value - Frame Guide 1 Scale
 RCP_PARAM_FRAME_GUIDE_1_USER_AR_NUM : Type : Value - Frame Guide 1 User Aspect Ratio
 RCP_PARAM_FRAME_GUIDE_1_X_OFFSET : Type : Value - Frame Guide 1 Offset X
 RCP_PARAM_FRAME_GUIDE_1_Y_OFFSET : Type : Value - Frame Guide 1 Offset Y
 RCP_PARAM_FRAME_GUIDE_2_ABS_HEIGHT : Type : Value - Frame Guide 2 Absolute Height
 RCP_PARAM_FRAME_GUIDE_2_ABS_WIDTH : Type : Value - Frame Guide 2 Absolute Width
 RCP_PARAM_FRAME_GUIDE_2_ABS_X_OFFSET : Type : Value - Frame Guide 2 Absolute Offset X
 RCP_PARAM_FRAME_GUIDE_2_ABS_Y_OFFSET : Type : Value - Frame Guide 2 Absolute Offset Y
 RCP_PARAM_FRAME_GUIDE_2_COLOR : Type : Value - Frame Guide 2 Line Color
 RCP_PARAM_FRAME_GUIDE_2_ENABLE : Type : Value - Frame Guide 2 Enable
 RCP_PARAM_FRAME_GUIDE_2_LINE_STYLE : Type : Value - Frame Guide 2 Line Style
 RCP_PARAM_FRAME_GUIDE_2_MODE : Type : Value - Frame Guide 2 Mode
 RCP_PARAM_FRAME_GUIDE_2_OPACITY : Type : Value - Frame Guide 2 Line Opacity
 RCP_PARAM_FRAME_GUIDE_2_RECT_PIXELS : Type : Status - Frame Guide 2 Dimensions
 RCP_PARAM_FRAME_GUIDE_2_SCALE : Type : Value - Frame Guide 2 Scale
 RCP_PARAM_FRAME_GUIDE_2_USER_AR_NUM : Type : Value - Frame Guide 2 User Aspect Ratio
 RCP_PARAM_FRAME_GUIDE_2_X_OFFSET : Type : Value - Frame Guide 2 Offset X
 RCP_PARAM_FRAME_GUIDE_2_Y_OFFSET : Type : Value - Frame Guide 2 Offset Y
 RCP_PARAM_FRAME_GUIDE_3_ABS_HEIGHT : Type : Value - Frame Guide 3 Absolute Height
 RCP_PARAM_FRAME_GUIDE_3_ABS_WIDTH : Type : Value - Frame Guide 3 Absolute Width
 RCP_PARAM_FRAME_GUIDE_3_ABS_X_OFFSET : Type : Value - Frame Guide 3 Absolute Offset X
 RCP_PARAM_FRAME_GUIDE_3_ABS_Y_OFFSET : Type : Value - Frame Guide 3 Absolute Offset Y
 RCP_PARAM_FRAME_GUIDE_3_COLOR : Type : Value - Frame Guide 3 Line Color
 RCP_PARAM_FRAME_GUIDE_3_ENABLE : Type : Value - Frame Guide 3 Enable
 RCP_PARAM_FRAME_GUIDE_3_LINE_STYLE : Type : Value - Frame Guide 3 Line Style
 RCP_PARAM_FRAME_GUIDE_3_MODE : Type : Value - Frame Guide 3 Mode
 RCP_PARAM_FRAME_GUIDE_3_OPACITY : Type : Value - Frame Guide 3 Line Opacity
 RCP_PARAM_FRAME_GUIDE_3_RECT_PIXELS : Type : Status - Frame Guide 3 Dimensions
 RCP_PARAM_FRAME_GUIDE_3_SCALE : Type : Value - Frame Guide 3 Scale
 RCP_PARAM_FRAME_GUIDE_3_USER_AR_NUM : Type : Value - Frame Guide 3 User Aspect Ratio
 RCP_PARAM_FRAME_GUIDE_3_X_OFFSET : Type : Value - Frame Guide 3 Offset X
 RCP_PARAM_FRAME_GUIDE_3_Y_OFFSET : Type : Value - Frame Guide 3 Offset Y
 RCP_PARAM_GENLOCK_STATE : Type : Status - Genlock State
 RCP_PARAM_GUIDES_ENABLE_SDI_1 : Type : Value - SDI Guides
 RCP_PARAM_HAND_CONTROLLER_FOCUS_POS : Type : Action - status Focus Position Focus Position 0 (Near/MOD) 65535 (Far/Inf.)
 RCP_PARAM_HAND_CONTROLLER_IRIS_POS : Type : Action - status Iris Position Iris Position 0 Aperture 65535 Aperture
 RCP_PARAM_HARDWARE_CAPABILITIES : Type : Status - Hardware Capabilities
 RCP_PARAM_HEADPHONE_VOLUME : Type : Value - Headphone Volume
 RCP_PARAM_HISTOGRAM : Type : Status - Histogram
 RCP_PARAM_HISTOGRAM_FULL : Type : Status - Histogram
 RCP_PARAM_IETF_LANGUAGE_TAG : Type : Status - 
 RCP_PARAM_ISO : Type : Value - ISO
 RCP_PARAM_KEYACTION : Type : Action - 
 RCP_PARAM_KEYCODE : Type : Action - 
 RCP_PARAM_LANGUAGE : Type : Value - Language
 RCP_PARAM_LENS_FOCAL_LENGTH : Type : Status - Lens Focal Length The focal length of the lens in mm
 RCP_PARAM_LENS_FOCUS_DISTANCE : Type : Status - Lens Focus Distance The near and far focus distances as a string in feet inches 11'11 &quot; - 17'11&quot;
 RCP_PARAM_LENS_IS_STATUS : Type : Status - Lens Image Stabilization Current image stabilization status
 RCP_PARAM_LIVESTREAM_ENABLE : Type : Value - Live Stream Enable Enable or disable Livestream Livestream video is made available via the multi art HTTP protocol serving JPEG frames on port 9090 Livestream audio is streamed in 16bit PCM 48KHz format on port 9292
 RCP_PARAM_LIVESTREAM_QUALITY : Type : Value - Live Stream Quality Factor JPEG compression quality of Livestream
 RCP_PARAM_LIVESTREAM_RECT_PIXELS : Type : Status - Livestream Sensor Mapping Sensor Coordinates that map to current livestream view
 RCP_PARAM_LOG_VIEW_ENABLE : Type : Value - Log View
 RCP_PARAM_MAGNIFY_ENABLE_SDI_1 : Type : Value - stored in camera SDI Magnify
 RCP_PARAM_MAGNIFY_ENABLE_TOP_LCD : Type : Value - stored in camera LCD Magnify
 RCP_PARAM_MAGNIFY_POINT_SDI_1 : Type : Action - status
 RCP_PARAM_MAGNIFY_POINT_TOP_LCD : Type : Action - status
 RCP_PARAM_MEDIA_APPROVED_STATUS : Type : Status - Status indicating whether or not inserted media has been approved by RED
 RCP_PARAM_MEDIA_CAPACITY : Type : Status - Media Capacity Media capacity reported by the card for example 128 GB
 RCP_PARAM_MEDIA_CDL_IMPORT_ALL_TO_CAMERA : Type : Action - Media CDL Import All to Camera
 RCP_PARAM_MEDIA_CDL_IMPORT_TO_CAMERA : Type : Action - Media CDL Import to Camera
 RCP_PARAM_MEDIA_CDL_LIST : Type : Media - CDLs
 RCP_PARAM_MEDIA_CLIP_COUNT : Type : Status - Media Clip Count
 RCP_PARAM_MEDIA_CLIP_EXT_INFO : Type : Status - Clip Info
 RCP_PARAM_MEDIA_EJECT : Type : Action - Media Eject
 RCP_PARAM_MEDIA_FIRMWARE_VERSION : Type : Status - Media Firmware Version
 RCP_PARAM_MEDIA_FORMAT : Type : Action - status Media Format
 RCP_PARAM_MEDIA_LUT_IMPORT_ALL_TO_CAMERA : Type : Action - Media LUT Import All to Camera
 RCP_PARAM_MEDIA_LUT_IMPORT_TO_CAMERA : Type : Action - Media LUT Import to Camera
 RCP_PARAM_MEDIA_LUT_LIST : Type : Media - LUTs
 RCP_PARAM_MEDIA_MODEL_NUMBER : Type : Status - Media Model Number
 RCP_PARAM_MEDIA_NAME : Type : Status - Media Name
 RCP_PARAM_MEDIA_PERCENTAGE_REMAINING : Type : Status - Media Percentage Available
 RCP_PARAM_MEDIA_PRESET_IMPORT_ALL_TO_CAMERA : Type : Action - Media Preset Import All to Camera
 RCP_PARAM_MEDIA_PRESET_IMPORT_TO_CAMERA : Type : Action - Media Preset Import to Camera
 RCP_PARAM_MEDIA_PRESET_LIST : Type : Media - Presets
 RCP_PARAM_MEDIA_SERIAL_NUMBER : Type : Status - Media Serial Number
 RCP_PARAM_MEDIA_STATUS : Type : Status - Media Status State of removable media card
 RCP_PARAM_MEDIA_TIME_REMAINING : Type : Status - Media Time Remaining
 RCP_PARAM_MODULE_CAPABILITIES : Type : Status - Attached Modules
 RCP_PARAM_MONITOR_FREQUENCY_SDI_1 : Type : Value - SDI : Frequency
 RCP_PARAM_MONITOR_RESOLUTION_SDI_1 : Type : Value - SDI Resolution
 RCP_PARAM_OUTPUT_TONE_MAP : Type : Value - target Output Tone Map
 RCP_PARAM_OVERLAY_MODE_ENABLE_SDI_1 : Type : Value - SDI Overlay
 RCP_PARAM_OVERLAY_MODE_SDI_1 : Type : Value - SDI Overlay Mode
 RCP_PARAM_PDAF_STATS : Type : Status - PDAF Stats
 RCP_PARAM_PEAKING_COLOR : Type : Value - Peaking Color
 RCP_PARAM_PEAKING_ENABLE : Type : Value - Peaking Enable
 RCP_PARAM_PEAKING_LEVEL : Type : Value - Peaking Level
 RCP_PARAM_PEAKING_MODE : Type : Value - Peaking Mode
 RCP_PARAM_PING : Type : Signal - 
 RCP_PARAM_PLAYBACK_LENGTH : Type : Status - Clip Length
 RCP_PARAM_PLAYBACK_LOAD : Type : Action - status Clip Load
 RCP_PARAM_PLAYBACK_PLAY_PAUSE : Type : Action - status Play
 RCP_PARAM_PLAYBACK_POS : Type : Action - status Clip Position
 RCP_PARAM_PLAYBACK_STATE : Type : Action - status Playback State
 RCP_PARAM_POWER_IN_ACTIVE : Type : Status - Active Power Source Specifies which power in is currently active
 RCP_PARAM_POWER_IN_CURRENT : Type : Indexed - Status Power In Current Current of each power in in milliamps (mA) where the index is the power source and the value is the amperage 0 DC IN 1 Bat 1 2 Bat 2
 RCP_PARAM_POWER_IN_LOW_POWER : Type : Indexed - Status Power In Low Power Only power source is running low
 RCP_PARAM_POWER_IN_PERCENT : Type : Indexed - Status Power In Percentage Remaining Percentage remaining of each power in where the index is the power source and the value is the percentage from 0 to 100 not applicable for DC N 0 DC IN 1 Bat 1 2 Bat 2
 RCP_PARAM_POWER_IN_PRESENT : Type : Indexed - Status Power Source Present Indicates which power sources are present where the index is the power source and the value or 1 is whether or not it is present 0 DC IN 1 Bat 1 2 Bat 2
 RCP_PARAM_POWER_IN_RUNTIME : Type : Indexed - Status Power In Time Remaining Time remaining of each power in where the index is the power source and the value is the minutes remaining not applicable for DC N 0 DC IN 1 Bat 1 2 Bat 2
 RCP_PARAM_POWER_IN_VALID : Type : Indexed - Status Power In Valid Indicates which power sources are valid where the index is the power source and the value or 1 is whether or not it is valid 0 DC IN 1 Bat 1 2 Bat 2
 RCP_PARAM_POWER_IN_VOLTAGE : Type : Indexed - Status Power In Voltage Voltage of each power in in millivolts (mV) where the index is the power source and the value is the voltage 0 DC IN 1 Bat 1 2 Bat 2
 RCP_PARAM_POWER_OUT_ENABLE : Type : Value - Power Out Controls if power out on EXT port is enabled or not
 RCP_PARAM_PRESETTABLE_ITEMS : Type : Status - Presettable Items List of presettable RCP Parameters Note : RCP_PARAM_ prefix has been omitted for each item
 RCP_PARAM_PRE_RECORD_DURATION : Type : Value - target Pre ecord Duration User settable pre ecord duration in milliseconds
 RCP_PARAM_PRE_RECORD_ENABLE : Type : Value - Pre ecord Enable Enable Pre ecording
 RCP_PARAM_PRE_RECORD_FRAMES : Type : Status - Pre ecord Frames to Record Number of frames to pre ecord
 RCP_PARAM_PROJECT_FRAME_RATE : Type : Value - Project Time Base
 RCP_PARAM_PRORES_BAKED_IN_SETTINGS : Type : Value - ProRes Baked n Settings
 RCP_PARAM_PRORES_QUALITY : Type : Value - target ProRes Codec
 RCP_PARAM_PRORES_RESOLUTION : Type : Value - target ProRes Resolution
 RCP_PARAM_R3D_QUALITY : Type : Value - target R3D Quality
 RCP_PARAM_RCP_PARAMETER_SET_VERSION : Type : Status - RCP Parameter Set Version
 RCP_PARAM_RCP_VERSION : Type : Status - RCP Version
 RCP_PARAM_RECORD_CODEC : Type : Value - stored in camera File Format
 RCP_PARAM_RECORD_FORMAT : Type : Value - All Formats
 RCP_PARAM_RECORD_FORMAT_RECT_PIXELS : Type : Status - Format Dimensions
 RCP_PARAM_RECORD_FORMAT_SUPER_35_ANA : Type : Value - stored in camera Super 35 Anamorphic (6K) A filtered view of
 RCP_PARAM_RECORD_FORMAT_SUPER_35_SPHERICAL : Type : Value - stored in camera Super 35 (6K) A filtered view of
 RCP_PARAM_RECORD_STATE : Type : Action - status Record State
 RCP_PARAM_RESET_FACTORY_DEFAULTS : Type : Action - Reset Defaults
 RCP_PARAM_RF_RING_CONTROL : Type : Value - Control Ring Mode
 RCP_PARAM_RF_RING_ENABLE : Type : Value - Control Ring
 RCP_PARAM_ROLL_OFF : Type : Value - target Highlight Roll ff
 RCP_PARAM_SAVE_LOG : Type : Action - Save Log
 RCP_PARAM_SDI_1_TOOLS_ENABLE : Type : Value - SDI Tools
 RCP_PARAM_SDI_COLOR_SETTING : Type : Value - SDI Look
 RCP_PARAM_SENSOR_CALIBRATION : Type : Value - stored in camera Sensor Calibration Applied sensor calibration
 RCP_PARAM_SENSOR_FRAME_RATE : Type : Value - Recording Frame Rate
 RCP_PARAM_SENSOR_SHUTTER_MODE : Type : Value - Sensor Shutter Mode
 RCP_PARAM_SHUTDOWN : Type : Action - status Shutdown
 RCP_PARAM_SHUTTER_DISPLAY_MODE : Type : Value - Shutter Display Mode
 RCP_PARAM_SLATE_CAMERA_ID : Type : Value - Slate Camera ID
 RCP_PARAM_SLATE_CAMERA_POS : Type : Value - Slate Camera Position
 RCP_PARAM_SYNC_STATE : Type : Status - Sync State
 RCP_PARAM_TALLY_LED_ENABLE : Type : Value - Tally Light
 RCP_PARAM_TEMPERATURE_IOB : Type : Status - STM Temperature
 RCP_PARAM_TEMPERATURE_LEVEL : Type : Status - Camera Status
 RCP_PARAM_TEMPERATURE_PCM : Type : Status - Power Board Temperature Temperature of the power board in Celsius (C)
 RCP_PARAM_TEMPERATURE_PL : Type : Status - Logic Board 1 Temperature
 RCP_PARAM_TEMPERATURE_PS : Type : Status - Logic Board 0 Temperature
 RCP_PARAM_TEMPERATURE_SB : Type : Status - Sensor Temperature
 RCP_PARAM_TIME : Type : Value - stored in camera Time Time (HH:MM:SS)
 RCP_PARAM_TIMECODE : Type : Status - Timecode
 RCP_PARAM_TIMECODE_DISPLAY_MODE : Type : Value - Timecode Display Mode
 RCP_PARAM_TIMECODE_JAM : Type : Action - Jam Timecode to TOD
 RCP_PARAM_TIMECODE_SOURCE : Type : Value - Timecode Source
 RCP_PARAM_TIMECODE_STATE : Type : Status - Timecode State
 RCP_PARAM_TIMEZONE : Type : Value - Time Zone
 RCP_PARAM_TINT : Type : Value - Tint
 RCP_PARAM_TOP_LCD_BRIGHTNESS : Type : Value - LCD Brightness
 RCP_PARAM_TOP_LCD_COLOR_SETTING : Type : Value - LCD Look
 RCP_PARAM_TOP_LCD_GUIDES_ENABLE : Type : Value - LCD Guides
 RCP_PARAM_TOP_LCD_PRISM_FINDER_MODE : Type : Value - LCD Prism Finder Mode
 RCP_PARAM_TOP_LCD_TOOLS_ENABLE : Type : Value - LCD Tools
 RCP_PARAM_UART_EXT_BAUD : Type : Value - EXT UART Baud Rate Baud Rate of UART on EXT port
 RCP_PARAM_UART_EXT_PPP_IP_ADDRESS : Type : Value - EXT UART PPP IP Address IP Address of UART on EXT port if using PPP
 RCP_PARAM_UART_EXT_PROTOCOL : Type : Value - EXT UART Protocol Protocol for UART on EXT port
 RCP_PARAM_UPGRADE_CAMERA_FIRMWARE : Type : Action - Upgrade
 RCP_PARAM_USBC_DHCP : Type : Value - USB DHCP Enable Enable or disable DHCP for KOMODO LINK USB
 RCP_PARAM_USBC_GATEWAY : Type : Value - target USB Gateway Gateway for KOMODO LINK USB assigned by DHCP or desired static gateway if DHCP is disabled
 RCP_PARAM_USBC_IP_ADDRESS : Type : Value - target USB IP Address IP address for KOMODO LINK USB assigned by DHCP or desired static address if DHCP is disabled
 RCP_PARAM_USBC_NETMASK : Type : Value - target USB Netmask Netmask for KOMODO LINK USB assigned by DHCP or desired static netmask if DHCP is disabled
 RCP_PARAM_WIFI_ADHOC_BAND : Type : Value - Wi Ad oc Frequency Band Wi Ad oc Frequency Band
 RCP_PARAM_WIFI_ADHOC_CHANNEL : Type : Value - Wi Ad oc Channel Wi Ad oc Channel
 RCP_PARAM_WIFI_ADHOC_ENCRYPTION : Type : Value - Wi Ad oc Encryption Wi Ad oc Encryption type
 RCP_PARAM_WIFI_ADHOC_PASSWORD : Type : Value - Wi Ad oc WPA2 Passphrase Wi Ad oc WPA2 Passphrase
 RCP_PARAM_WIFI_ADHOC_SSID : Type : Value - Wi Ad oc SSID Wi Ad oc SSID
 RCP_PARAM_WIFI_DHCP : Type : Value - Wi DHCP Enable Enable or disable DHCP in infrastructure mode
 RCP_PARAM_WIFI_GATEWAY : Type : Value - target Wi Gateway Assigned gateway if DHCP is enabled if not then desired static gateway
 RCP_PARAM_WIFI_INFRASTRUCTURE_CONNECT : Type : Action - Wi Infrastructure Connect Initiate connection to specified SSID
 RCP_PARAM_WIFI_INFRASTRUCTURE_FORGET : Type : Action - Wi Infrastructure Forget Forget a previously saved network
 RCP_PARAM_WIFI_INFRASTRUCTURE_MANUAL_SSID : Type : Action - Wi Infrastructure Other Networks Initiate a manual SSID entry notification Message value is ignored
 RCP_PARAM_WIFI_INFRASTRUCTURE_NETWORKS : Type : Wi - Infrastructure Networks Wi Infrastructure Saved and Available Networks
 RCP_PARAM_WIFI_INFRASTRUCTURE_SCAN : Type : Action - Wi Infrastructure Scan Initiate scan for available Wi SSIDs
 RCP_PARAM_WIFI_INFRASTRUCTURE_SIGNAL : Type : Status - Wi Infrastructure Signal Strength Wi Received Signal Strength in dBm Any number from WIFI_SIGNAL_INVALID to 0 is valid The other values in wifi_signal_t define thresholds
 RCP_PARAM_WIFI_INFRASTRUCTURE_SSID : Type : Status - Wi Infrastructure SSID Wi Infrastructure SSID
 RCP_PARAM_WIFI_IP_ADDRESS : Type : Value - target Wi IP Address Assigned IP address if DHCP is enabled if not then desired static IP address
 RCP_PARAM_WIFI_MAC_ADDRESS : Type : Status - Wi MAC Address Wi MAC address
 RCP_PARAM_WIFI_MODE : Type : Value - Wi Mode Wi mode selection
 RCP_PARAM_WIFI_NETMASK : Type : Value - target Wi Netmask Assigned netmask if DHCP is enabled if not then desired static netmask
 RCP_PARAM_WIFI_STATUS : Type : Status - Wi Status Wi connection status
 RCP_PARAM_ZEBRA_1_ENABLE : Type : Value - Zebra 1 Enable
 RCP_PARAM_ZEBRA_1_HIGH_IRE : Type : Value - Zebra 1 High IRE
 RCP_PARAM_ZEBRA_1_LOW_IRE : Type : Value - Zebra 1 Low IRE
 RCP_PARAM_ZEBRA_2_ENABLE : Type : Value - Zebra 2 Enable
 RCP_PARAM_ZEBRA_2_HIGH_IRE : Type : Value - Zebra 2 High IRE
*/
using namespace rcp;
std::map<std::string, rcp_param> rcp_commands {
    {"RCP_PARAM_AF_ENABLE",                                                             
        {"RCP_PARAM_AF_ENABLE", "target AF Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AF_MODE",                                                             
        {"RCP_PARAM_AF_MODE", "AF Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AF_POINT",                                                             
        {"RCP_PARAM_AF_POINT", "status", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , }, true}
    }, 
    {"RCP_PARAM_AF_POSITION",                                                             
        {"RCP_PARAM_AF_POSITION", "AF Position", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AF_RECT",                                                             
        {"RCP_PARAM_AF_RECT", "", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , }, true}
    }, 
    {"RCP_PARAM_AF_SIZE",                                                             
        {"RCP_PARAM_AF_SIZE", "AF Size", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AF_STATE",                                                             
        {"RCP_PARAM_AF_STATE", "status Auto Focus State", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_APERTURE",                                                             
        {"RCP_PARAM_APERTURE", "target Iris", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_LIST_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_APERTURE_CONTROL",                                                             
        {"RCP_PARAM_APERTURE_CONTROL", "Aperture Control", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_APERTURE_LIST_MODE",                                                             
        {"RCP_PARAM_APERTURE_LIST_MODE", "Aperture Increments", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_APPLIED_CAMERA_LUT",                                                             
        {"RCP_PARAM_APPLIED_CAMERA_LUT", "3D LUT Returns the name of the 3D LUT that is currently applied If no LUT is applied or if the current 3D LUT is disabled an empty string is returned", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_AUDIO_EXTERNAL_LEFT_GAIN",                                                             
        {"RCP_PARAM_AUDIO_EXTERNAL_LEFT_GAIN", "External Audio Ch 3 Gain", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_EXTERNAL_LIMITER",                                                             
        {"RCP_PARAM_AUDIO_EXTERNAL_LIMITER", "External Audio Limiter", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_EXTERNAL_LINK_GAIN",                                                             
        {"RCP_PARAM_AUDIO_EXTERNAL_LINK_GAIN", "External Audio Link Ch 3 Ch 4 Gain", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_EXTERNAL_RIGHT_GAIN",                                                             
        {"RCP_PARAM_AUDIO_EXTERNAL_RIGHT_GAIN", "External Audio Ch 4 Gain", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_HEADPHONE_MUTE",                                                             
        {"RCP_PARAM_AUDIO_HEADPHONE_MUTE", "Mute Headphones", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_HEADPHONE_SOURCE",                                                             
        {"RCP_PARAM_AUDIO_HEADPHONE_SOURCE", "target Headphone Source Headphone source selection", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_INTERNAL_LEFT_GAIN",                                                             
        {"RCP_PARAM_AUDIO_INTERNAL_LEFT_GAIN", "Internal Microphone Left Gain 1", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_INTERNAL_LIMITER",                                                             
        {"RCP_PARAM_AUDIO_INTERNAL_LIMITER", "Internal Microphone Limiter", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_INTERNAL_LINK_GAIN",                                                             
        {"RCP_PARAM_AUDIO_INTERNAL_LINK_GAIN", "Internal Microphone Link Left Right Gain", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_INTERNAL_RIGHT_GAIN",                                                             
        {"RCP_PARAM_AUDIO_INTERNAL_RIGHT_GAIN", "Internal Microphone Right Gain 2", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_SOURCE",                                                             
        {"RCP_PARAM_AUDIO_SOURCE", "target Audio Source Audio input source selection", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_AUDIO_VU_DATA",                                                             
        {"RCP_PARAM_AUDIO_VU_DATA", "Audio VU Meter Data", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_AUTO_WHITE_BALANCE",                                                             
        {"RCP_PARAM_AUTO_WHITE_BALANCE", "Auto White Balance Perform auto white balance", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_BEEP_ENABLE",                                                             
        {"RCP_PARAM_BEEP_ENABLE", "Beep Sounds", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_BEEP_RECORD_START",                                                             
        {"RCP_PARAM_BEEP_RECORD_START", "Rec Start Sound", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_BEEP_RECORD_STOP",                                                             
        {"RCP_PARAM_BEEP_RECORD_STOP", "Rec Stop Sound", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CALIBRATE_STATE",                                                             
        {"RCP_PARAM_CALIBRATE_STATE", "status Calibrate", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CALIBRATION_STATUS_INTEGRATION_TIME",                                                             
        {"RCP_PARAM_CALIBRATION_STATUS_INTEGRATION_TIME", "Calibration Status Integration Time The status of the current calibration based on integraion time", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CALIBRATION_STATUS_TEMPERATURE",                                                             
        {"RCP_PARAM_CALIBRATION_STATUS_TEMPERATURE", "Calibration Status Temperature The status of the current calibration based on sensor temperature", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_CDL_APPLY",                                                             
        {"RCP_PARAM_CAMERA_CDL_APPLY", "Camera CDL Apply", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_CDL_DELETE",                                                             
        {"RCP_PARAM_CAMERA_CDL_DELETE", "Camera CDL Delete", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_CDL_EXPORT_ALL_TO_MEDIA",                                                             
        {"RCP_PARAM_CAMERA_CDL_EXPORT_ALL_TO_MEDIA", "Camera CDL Export All to Media", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_CDL_EXPORT_TO_MEDIA",                                                             
        {"RCP_PARAM_CAMERA_CDL_EXPORT_TO_MEDIA", "Camera CDL Export to Media", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_CDL_LIST",                                                             
        {"RCP_PARAM_CAMERA_CDL_LIST", "Camera CDLs", RCP_PARAM_TYPE_DISPLAY, {  RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_FIRMWARE_VERSION",                                                             
        {"RCP_PARAM_CAMERA_FIRMWARE_VERSION", "Camera Firmware Version", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_ID",                                                             
        {"RCP_PARAM_CAMERA_ID", "Camera Name", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CAMERA_LUT",                                                             
        {"RCP_PARAM_CAMERA_LUT", "LUT", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CAMERA_LUT_DELETE",                                                             
        {"RCP_PARAM_CAMERA_LUT_DELETE", "Camera LUT Delete", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_LUT_ENABLE",                                                             
        {"RCP_PARAM_CAMERA_LUT_ENABLE", "3D LUT Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CAMERA_LUT_EXPORT_ALL_TO_MEDIA",                                                             
        {"RCP_PARAM_CAMERA_LUT_EXPORT_ALL_TO_MEDIA", "Camera LUT Export All to Media", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_LUT_EXPORT_TO_MEDIA",                                                             
        {"RCP_PARAM_CAMERA_LUT_EXPORT_TO_MEDIA", "Camera LUT Export to Media", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_LUT_LIST",                                                             
        {"RCP_PARAM_CAMERA_LUT_LIST", "LCamera LUTs", RCP_PARAM_TYPE_DISPLAY, {  RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_PIN",                                                             
        {"RCP_PARAM_CAMERA_PIN", "Camera PIN", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_PRESET_APPLY",                                                             
        {"RCP_PARAM_CAMERA_PRESET_APPLY", "Camera Preset Apply", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_PRESET_DELETE",                                                             
        {"RCP_PARAM_CAMERA_PRESET_DELETE", "Camera Preset Delete", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_PRESET_EXPORT_ALL_TO_MEDIA",                                                             
        {"RCP_PARAM_CAMERA_PRESET_EXPORT_ALL_TO_MEDIA", "Camera Preset Export All to Media", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_PRESET_EXPORT_TO_MEDIA",                                                             
        {"RCP_PARAM_CAMERA_PRESET_EXPORT_TO_MEDIA", "Camera Preset Export to Media", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_PRESET_LIST",                                                             
        {"RCP_PARAM_CAMERA_PRESET_LIST", "Display Presets", RCP_PARAM_TYPE_DISPLAY, {  RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_RUNTIME",                                                             
        {"RCP_PARAM_CAMERA_RUNTIME", "Camera Runtime Total camera runtime in seconds", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CAMERA_TYPE",                                                             
        {"RCP_PARAM_CAMERA_TYPE", "Camera Type", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CDL_ENABLE",                                                             
        {"RCP_PARAM_CDL_ENABLE", "CDL Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_OFFSET_BLUE",                                                             
        {"RCP_PARAM_CDL_OFFSET_BLUE", "CDL Blue Offset", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_OFFSET_GREEN",                                                             
        {"RCP_PARAM_CDL_OFFSET_GREEN", "CDL Green Offset", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_OFFSET_RED",                                                             
        {"RCP_PARAM_CDL_OFFSET_RED", "CDL Red Offset", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_POWER_BLUE",                                                             
        {"RCP_PARAM_CDL_POWER_BLUE", "CDL Blue Power", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_POWER_GREEN",                                                             
        {"RCP_PARAM_CDL_POWER_GREEN", "CDL Green Power", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_POWER_RED",                                                             
        {"RCP_PARAM_CDL_POWER_RED", "CDL Red Power", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_SATURATION",                                                             
        {"RCP_PARAM_CDL_SATURATION", "CDL Saturation", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_SLOPE_BLUE",                                                             
        {"RCP_PARAM_CDL_SLOPE_BLUE", "CDL Blue Slope", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_SLOPE_GREEN",                                                             
        {"RCP_PARAM_CDL_SLOPE_GREEN", "CDL Green Slope", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CDL_SLOPE_RED",                                                             
        {"RCP_PARAM_CDL_SLOPE_RED", "CDL Red Slope", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CENTER_GUIDE_COLOR",                                                             
        {"RCP_PARAM_CENTER_GUIDE_COLOR", "Center Guide Color", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CENTER_GUIDE_ENABLE",                                                             
        {"RCP_PARAM_CENTER_GUIDE_ENABLE", "Center Guide Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CENTER_GUIDE_OPACITY",                                                             
        {"RCP_PARAM_CENTER_GUIDE_OPACITY", "Center Guide Opacity", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CENTER_GUIDE_TYPE",                                                             
        {"RCP_PARAM_CENTER_GUIDE_TYPE", "Center Guide Type", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_CLIP_DURATION",                                                             
        {"RCP_PARAM_CLIP_DURATION", "Clip Duration", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CLIP_NAME",                                                             
        {"RCP_PARAM_CLIP_NAME", "Clip Name", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_COLOR_SPACE",                                                             
        {"RCP_PARAM_COLOR_SPACE", "Output Color Space", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_COLOR_TEMPERATURE",                                                             
        {"RCP_PARAM_COLOR_TEMPERATURE", "Color Temperature", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_SET_LIST_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_COLOR_TEMPERATURE_LIST",                                                             
        {"RCP_PARAM_COLOR_TEMPERATURE_LIST", "White Balance List Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_COLOR_TEMPERATURE_PRESET",                                                             
        {"RCP_PARAM_COLOR_TEMPERATURE_PRESET", "Color Temperature Preset Color temperature preset to apply Incandescent Daylight etc", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CURRENT_CALIBRATION_INTEGRATION_TIME",                                                             
        {"RCP_PARAM_CURRENT_CALIBRATION_INTEGRATION_TIME", "Current Calibration Integration Time The current calibration s integration time", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_CURRENT_CALIBRATION_TEMPERATURE",                                                             
        {"RCP_PARAM_CURRENT_CALIBRATION_TEMPERATURE", "Current Calibration Temperature The current calibration s sensor temperature", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_DATE",                                                             
        {"RCP_PARAM_DATE", "stored in camera Date Date (YYYY-MM-DD)", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_DISPLAY_PRESET_SDI_1",                                                             
        {"RCP_PARAM_DISPLAY_PRESET_SDI_1", "target SDI : Display Preset", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_EXPOSURE_ADJUST",                                                             
        {"RCP_PARAM_EXPOSURE_ADJUST", "Exposure Adjust", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_EXPOSURE_ANGLE",                                                             
        {"RCP_PARAM_EXPOSURE_ANGLE", "Exposure Shutter Angle", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_LIST_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_EXPOSURE_DISPLAY",                                                             
        {"RCP_PARAM_EXPOSURE_DISPLAY", "target Shutter", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_LIST_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_EXPOSURE_INTEGRATION_TIME",                                                             
        {"RCP_PARAM_EXPOSURE_INTEGRATION_TIME", "target Exposure Shutter Speed", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_LIST_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FALSE_COLOR_ENABLE",                                                             
        {"RCP_PARAM_FALSE_COLOR_ENABLE", "False Color Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FALSE_COLOR_MODE",                                                             
        {"RCP_PARAM_FALSE_COLOR_MODE", "False Color Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FAN_MODE",                                                             
        {"RCP_PARAM_FAN_MODE", "Fan Control", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FOCUS_DIST_DISPLAY_MODE",                                                             
        {"RCP_PARAM_FOCUS_DIST_DISPLAY_MODE", "Focus Distance Display Mode Focus distance display mode or metric", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FORMAT_ARG_CAMERA_ID",                                                             
        {"RCP_PARAM_FORMAT_ARG_CAMERA_ID", "stored in camera Camera ID", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_FORMAT_ARG_CAMERA_POS",                                                             
        {"RCP_PARAM_FORMAT_ARG_CAMERA_POS", "stored in camera Camera Position", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_FORMAT_ARG_EDGECODE",                                                             
        {"RCP_PARAM_FORMAT_ARG_EDGECODE", "Edgecode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FORMAT_ARG_FILE_SYSTEM",                                                             
        {"RCP_PARAM_FORMAT_ARG_FILE_SYSTEM", "File System", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FORMAT_ARG_REEL_NO",                                                             
        {"RCP_PARAM_FORMAT_ARG_REEL_NO", "Reel Number", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_ABS_HEIGHT",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_ABS_HEIGHT", "Frame Guide 1 Absolute Height", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_ABS_WIDTH",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_ABS_WIDTH", "Frame Guide 1 Absolute Width", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_ABS_X_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_ABS_X_OFFSET", "Frame Guide 1 Absolute Offset X", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_ABS_Y_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_ABS_Y_OFFSET", "Frame Guide 1 Absolute Offset Y", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_COLOR",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_COLOR", "Frame Guide 1 Line Color", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_ENABLE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_ENABLE", "Frame Guide 1 Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_LINE_STYLE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_LINE_STYLE", "Frame Guide 1 Line Style", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_MODE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_MODE", "Frame Guide 1 Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_OPACITY",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_OPACITY", "Frame Guide 1 Line Opacity", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_RECT_PIXELS",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_RECT_PIXELS", "Frame Guide 1 Dimensions", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_SCALE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_SCALE", "Frame Guide 1 Scale", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_USER_AR_NUM",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_USER_AR_NUM", "Frame Guide 1 User Aspect Ratio", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_X_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_X_OFFSET", "Frame Guide 1 Offset X", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_1_Y_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_1_Y_OFFSET", "Frame Guide 1 Offset Y", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_ABS_HEIGHT",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_ABS_HEIGHT", "Frame Guide 2 Absolute Height", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_ABS_WIDTH",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_ABS_WIDTH", "Frame Guide 2 Absolute Width", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_ABS_X_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_ABS_X_OFFSET", "Frame Guide 2 Absolute Offset X", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_ABS_Y_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_ABS_Y_OFFSET", "Frame Guide 2 Absolute Offset Y", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_COLOR",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_COLOR", "Frame Guide 2 Line Color", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_ENABLE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_ENABLE", "Frame Guide 2 Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_LINE_STYLE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_LINE_STYLE", "Frame Guide 2 Line Style", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_MODE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_MODE", "Frame Guide 2 Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_OPACITY",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_OPACITY", "Frame Guide 2 Line Opacity", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_RECT_PIXELS",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_RECT_PIXELS", "Frame Guide 2 Dimensions", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_SCALE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_SCALE", "Frame Guide 2 Scale", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_USER_AR_NUM",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_USER_AR_NUM", "Frame Guide 2 User Aspect Ratio", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_X_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_X_OFFSET", "Frame Guide 2 Offset X", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_2_Y_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_2_Y_OFFSET", "Frame Guide 2 Offset Y", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_ABS_HEIGHT",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_ABS_HEIGHT", "Frame Guide 3 Absolute Height", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_ABS_WIDTH",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_ABS_WIDTH", "Frame Guide 3 Absolute Width", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_ABS_X_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_ABS_X_OFFSET", "Frame Guide 3 Absolute Offset X", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_ABS_Y_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_ABS_Y_OFFSET", "Frame Guide 3 Absolute Offset Y", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_COLOR",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_COLOR", "Frame Guide 3 Line Color", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_ENABLE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_ENABLE", "Frame Guide 3 Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_LINE_STYLE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_LINE_STYLE", "Frame Guide 3 Line Style", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_MODE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_MODE", "Frame Guide 3 Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_OPACITY",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_OPACITY", "Frame Guide 3 Line Opacity", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_RECT_PIXELS",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_RECT_PIXELS", "Frame Guide 3 Dimensions", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_SCALE",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_SCALE", "Frame Guide 3 Scale", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_USER_AR_NUM",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_USER_AR_NUM", "Frame Guide 3 User Aspect Ratio", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_X_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_X_OFFSET", "Frame Guide 3 Offset X", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_FRAME_GUIDE_3_Y_OFFSET",                                                             
        {"RCP_PARAM_FRAME_GUIDE_3_Y_OFFSET", "Frame Guide 3 Offset Y", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_GENLOCK_STATE",                                                             
        {"RCP_PARAM_GENLOCK_STATE", "Genlock State", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_GUIDES_ENABLE_SDI_1",                                                             
        {"RCP_PARAM_GUIDES_ENABLE_SDI_1", "SDI Guides", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_HAND_CONTROLLER_FOCUS_POS",                                                             
        {"RCP_PARAM_HAND_CONTROLLER_FOCUS_POS", "status Focus Position Focus Position 0 (Near/MOD) 65535 (Far/Inf.)", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_HAND_CONTROLLER_IRIS_POS",                                                             
        {"RCP_PARAM_HAND_CONTROLLER_IRIS_POS", "status Iris Position Iris Position 0 Aperture 65535 Aperture", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_HARDWARE_CAPABILITIES",                                                             
        {"RCP_PARAM_HARDWARE_CAPABILITIES", "Hardware Capabilities", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_HEADPHONE_VOLUME",                                                             
        {"RCP_PARAM_HEADPHONE_VOLUME", "Headphone Volume", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_HISTOGRAM",                                                             
        {"RCP_PARAM_HISTOGRAM", "Histogram", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_HISTOGRAM_FULL",                                                             
        {"RCP_PARAM_HISTOGRAM_FULL", "Histogram", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_IETF_LANGUAGE_TAG",                                                             
        {"RCP_PARAM_IETF_LANGUAGE_TAG", "", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , }, true}
    }, 
    {"RCP_PARAM_ISO",                                                             
        {"RCP_PARAM_ISO", "ISO", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_LIST_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_KEYACTION",                                                             
        {"RCP_PARAM_KEYACTION", "", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , }, true}
    }, 
    {"RCP_PARAM_KEYCODE",                                                             
        {"RCP_PARAM_KEYCODE", "", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , }, true}
    }, 
    {"RCP_PARAM_LANGUAGE",                                                             
        {"RCP_PARAM_LANGUAGE", "Language", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_LENS_FOCAL_LENGTH",                                                             
        {"RCP_PARAM_LENS_FOCAL_LENGTH", "Lens Focal Length The focal length of the lens in mm", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_LENS_FOCUS_DISTANCE",                                                             
        {"RCP_PARAM_LENS_FOCUS_DISTANCE", "Lens Focus Distance The near and far focus distances as a string in feet inches 11'11 &quot; - 17'11&quot;", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_LENS_IS_STATUS",                                                             
        {"RCP_PARAM_LENS_IS_STATUS", "Lens Image Stabilization Current image stabilization status", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_LIVESTREAM_ENABLE",                                                             
        {"RCP_PARAM_LIVESTREAM_ENABLE", "Live Stream Enable Enable or disable Livestream Livestream video is made available via the multi art HTTP protocol serving JPEG frames on port 9090 Livestream audio is streamed in 16bit PCM 48KHz format on port 9292", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_LIVESTREAM_QUALITY",                                                             
        {"RCP_PARAM_LIVESTREAM_QUALITY", "Live Stream Quality Factor JPEG compression quality of Livestream", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_LIVESTREAM_RECT_PIXELS",                                                             
        {"RCP_PARAM_LIVESTREAM_RECT_PIXELS", "Livestream Sensor Mapping Sensor Coordinates that map to current livestream view", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_LOG_VIEW_ENABLE",                                                             
        {"RCP_PARAM_LOG_VIEW_ENABLE", "Log View", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_MAGNIFY_ENABLE_SDI_1",                                                             
        {"RCP_PARAM_MAGNIFY_ENABLE_SDI_1", "stored in camera SDI Magnify", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MAGNIFY_ENABLE_TOP_LCD",                                                             
        {"RCP_PARAM_MAGNIFY_ENABLE_TOP_LCD", "stored in camera LCD Magnify", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MAGNIFY_POINT_SDI_1",                                                             
        {"RCP_PARAM_MAGNIFY_POINT_SDI_1", "status", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , }, true}
    }, 
    {"RCP_PARAM_MAGNIFY_POINT_TOP_LCD",                                                             
        {"RCP_PARAM_MAGNIFY_POINT_TOP_LCD", "status", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , }, true}
    }, 
    {"RCP_PARAM_MEDIA_APPROVED_STATUS",                                                             
        {"RCP_PARAM_MEDIA_APPROVED_STATUS", "Status indicating whether or not inserted media has been approved by RED", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , }, true}
    }, 
    {"RCP_PARAM_MEDIA_CAPACITY",                                                             
        {"RCP_PARAM_MEDIA_CAPACITY", "Media Capacity Media capacity reported by the card for example 128 GB", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_CDL_IMPORT_ALL_TO_CAMERA",                                                             
        {"RCP_PARAM_MEDIA_CDL_IMPORT_ALL_TO_CAMERA", "Media CDL Import All to Camera", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_CDL_IMPORT_TO_CAMERA",                                                             
        {"RCP_PARAM_MEDIA_CDL_IMPORT_TO_CAMERA", "Media CDL Import to Camera", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_CDL_LIST",                                                             
        {"RCP_PARAM_MEDIA_CDL_LIST", "Display all CDLs", RCP_PARAM_TYPE_DISPLAY, {  RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_CLIP_COUNT",                                                             
        {"RCP_PARAM_MEDIA_CLIP_COUNT", "Media Clip Count", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_CLIP_EXT_INFO",                                                             
        {"RCP_PARAM_MEDIA_CLIP_EXT_INFO", "Clip Info", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_EJECT",                                                             
        {"RCP_PARAM_MEDIA_EJECT", "Media Eject", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_FIRMWARE_VERSION",                                                             
        {"RCP_PARAM_MEDIA_FIRMWARE_VERSION", "Media Firmware Version", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_FORMAT",                                                             
        {"RCP_PARAM_MEDIA_FORMAT", "status Media Format", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_LUT_IMPORT_ALL_TO_CAMERA",                                                             
        {"RCP_PARAM_MEDIA_LUT_IMPORT_ALL_TO_CAMERA", "Media LUT Import All to Camera", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_LUT_IMPORT_TO_CAMERA",                                                             
        {"RCP_PARAM_MEDIA_LUT_IMPORT_TO_CAMERA", "Media LUT Import to Camera", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_LUT_LIST",                                                             
        {"RCP_PARAM_MEDIA_LUT_LIST", "Display all LUTs", RCP_PARAM_TYPE_DISPLAY, {  RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_MODEL_NUMBER",                                                             
        {"RCP_PARAM_MEDIA_MODEL_NUMBER", "Media Model Number", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_NAME",                                                             
        {"RCP_PARAM_MEDIA_NAME", "Media Name", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_PERCENTAGE_REMAINING",                                                             
        {"RCP_PARAM_MEDIA_PERCENTAGE_REMAINING", "Media Percentage Available", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_PRESET_IMPORT_ALL_TO_CAMERA",                                                             
        {"RCP_PARAM_MEDIA_PRESET_IMPORT_ALL_TO_CAMERA", "Media Preset Import All to Camera", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_PRESET_IMPORT_TO_CAMERA",                                                             
        {"RCP_PARAM_MEDIA_PRESET_IMPORT_TO_CAMERA", "Media Preset Import to Camera", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_PRESET_LIST",                                                             
        {"RCP_PARAM_MEDIA_PRESET_LIST", "Display all Presets", RCP_PARAM_TYPE_DISPLAY, {  RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_SERIAL_NUMBER",                                                             
        {"RCP_PARAM_MEDIA_SERIAL_NUMBER", "Media Serial Number", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_STATUS",                                                             
        {"RCP_PARAM_MEDIA_STATUS", "Media Status State of removable media card", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MEDIA_TIME_REMAINING",                                                             
        {"RCP_PARAM_MEDIA_TIME_REMAINING", "Media Time Remaining", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MODULE_CAPABILITIES",                                                             
        {"RCP_PARAM_MODULE_CAPABILITIES", "Attached Modules", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_MONITOR_FREQUENCY_SDI_1",                                                             
        {"RCP_PARAM_MONITOR_FREQUENCY_SDI_1", "SDI : Frequency", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_MONITOR_RESOLUTION_SDI_1",                                                             
        {"RCP_PARAM_MONITOR_RESOLUTION_SDI_1", "SDI Resolution", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_OUTPUT_TONE_MAP",                                                             
        {"RCP_PARAM_OUTPUT_TONE_MAP", "target Output Tone Map", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_OVERLAY_MODE_ENABLE_SDI_1",                                                             
        {"RCP_PARAM_OVERLAY_MODE_ENABLE_SDI_1", "SDI Overlay", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_OVERLAY_MODE_SDI_1",                                                             
        {"RCP_PARAM_OVERLAY_MODE_SDI_1", "SDI Overlay Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PDAF_STATS",                                                             
        {"RCP_PARAM_PDAF_STATS", "PDAF Stats", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_PEAKING_COLOR",                                                             
        {"RCP_PARAM_PEAKING_COLOR", "Peaking Color", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PEAKING_ENABLE",                                                             
        {"RCP_PARAM_PEAKING_ENABLE", "Peaking Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PEAKING_LEVEL",                                                             
        {"RCP_PARAM_PEAKING_LEVEL", "Peaking Level", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PEAKING_MODE",                                                             
        {"RCP_PARAM_PEAKING_MODE", "Peaking Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PING",                                                             
        {"RCP_PARAM_PING", "Pings The camera", RCP_PARAM_TYPE_SIGNAL, {  RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , }, true}
    }, 
    {"RCP_PARAM_PLAYBACK_LENGTH",                                                             
        {"RCP_PARAM_PLAYBACK_LENGTH", "Clip Length", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_PLAYBACK_LOAD",                                                             
        {"RCP_PARAM_PLAYBACK_LOAD", "status Clip Load", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_PLAYBACK_PLAY_PAUSE",                                                             
        {"RCP_PARAM_PLAYBACK_PLAY_PAUSE", "status Play", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_PLAYBACK_POS",                                                             
        {"RCP_PARAM_PLAYBACK_POS", "status Clip Position", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_PLAYBACK_STATE",                                                             
        {"RCP_PARAM_PLAYBACK_STATE", "status Playback State", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_ACTIVE",                                                             
        {"RCP_PARAM_POWER_IN_ACTIVE", "Active Power Source Specifies which power in is currently active", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_CURRENT",                                                             
        {"RCP_PARAM_POWER_IN_CURRENT", "Status Power In Current Current of each power in in milliamps (mA) where the index is the power source and the value is the amperage 0 DC IN 1 Bat 1 2 Bat 2", RCP_PARAM_TYPE_INDEXED_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_LOW_POWER",                                                             
        {"RCP_PARAM_POWER_IN_LOW_POWER", "Status Power In Low Power Only power source is running low", RCP_PARAM_TYPE_INDEXED_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_PERCENT",                                                             
        {"RCP_PARAM_POWER_IN_PERCENT", "Status Power In Percentage Remaining Percentage remaining of each power in where the index is the power source and the value is the percentage from 0 to 100 not applicable for DC N 0 DC IN 1 Bat 1 2 Bat 2", RCP_PARAM_TYPE_INDEXED_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_PRESENT",                                                             
        {"RCP_PARAM_POWER_IN_PRESENT", "Status Power Source Present Indicates which power sources are present where the index is the power source and the value or 1 is whether or not it is present 0 DC IN 1 Bat 1 2 Bat 2", RCP_PARAM_TYPE_INDEXED_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_RUNTIME",                                                             
        {"RCP_PARAM_POWER_IN_RUNTIME", "Status Power In Time Remaining Time remaining of each power in where the index is the power source and the value is the minutes remaining not applicable for DC N 0 DC IN 1 Bat 1 2 Bat 2", RCP_PARAM_TYPE_INDEXED_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_VALID",                                                             
        {"RCP_PARAM_POWER_IN_VALID", "Status Power In Valid Indicates which power sources are valid where the index is the power source and the value or 1 is whether or not it is valid 0 DC IN 1 Bat 1 2 Bat 2", RCP_PARAM_TYPE_INDEXED_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_IN_VOLTAGE",                                                             
        {"RCP_PARAM_POWER_IN_VOLTAGE", "Status Power In Voltage Voltage of each power in in millivolts (mV) where the index is the power source and the value is the voltage 0 DC IN 1 Bat 1 2 Bat 2", RCP_PARAM_TYPE_INDEXED_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_POWER_OUT_ENABLE",                                                             
        {"RCP_PARAM_POWER_OUT_ENABLE", "Power Out Controls if power out on EXT port is enabled or not", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PRESETTABLE_ITEMS",                                                             
        {"RCP_PARAM_PRESETTABLE_ITEMS", "Presettable Items List of presettable RCP Parameters Note : RCP_PARAM_ prefix has been omitted for each item", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_PRE_RECORD_DURATION",                                                             
        {"RCP_PARAM_PRE_RECORD_DURATION", "target Pre ecord Duration User settable pre ecord duration in milliseconds", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PRE_RECORD_ENABLE",                                                             
        {"RCP_PARAM_PRE_RECORD_ENABLE", "Pre ecord Enable Enable Pre ecording", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PRE_RECORD_FRAMES",                                                             
        {"RCP_PARAM_PRE_RECORD_FRAMES", "Pre ecord Frames to Record Number of frames to pre ecord", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_PROJECT_FRAME_RATE",                                                             
        {"RCP_PARAM_PROJECT_FRAME_RATE", "Project Time Base", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PRORES_BAKED_IN_SETTINGS",                                                             
        {"RCP_PARAM_PRORES_BAKED_IN_SETTINGS", "ProRes Baked n Settings", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PRORES_QUALITY",                                                             
        {"RCP_PARAM_PRORES_QUALITY", "target ProRes Codec", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_PRORES_RESOLUTION",                                                             
        {"RCP_PARAM_PRORES_RESOLUTION", "target ProRes Resolution", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_R3D_QUALITY",                                                             
        {"RCP_PARAM_R3D_QUALITY", "target R3D Quality", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_RCP_PARAMETER_SET_VERSION",                                                             
        {"RCP_PARAM_RCP_PARAMETER_SET_VERSION", "RCP Parameter Set Version", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_RCP_VERSION",                                                             
        {"RCP_PARAM_RCP_VERSION", "RCP Version", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_RECORD_CODEC",                                                             
        {"RCP_PARAM_RECORD_CODEC", "stored in camera File Format", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_RECORD_FORMAT",                                                             
        {"RCP_PARAM_RECORD_FORMAT", "All Formats", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_RECORD_FORMAT_RECT_PIXELS",                                                             
        {"RCP_PARAM_RECORD_FORMAT_RECT_PIXELS", "Format Dimensions", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_RECORD_FORMAT_SUPER_35_ANA",   //rcp_get rcp_set rcp_cur_int rcp_cur_str rcp_get_list rcp_cur_list rcp_get_label rcp_label                                                          
        {"RCP_PARAM_RECORD_FORMAT_SUPER_35_ANA", "Super 35 Anamorphic (6K) A filtered view of RCP_PARAM_RECORD_FORMAT", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL  , }, true}
    }, 
    {"RCP_PARAM_RECORD_FORMAT_SUPER_35_SPHERICAL", //rcp_get rcp_set rcp_cur_int rcp_cur_str rcp_get_list rcp_cur_list rcp_get_label rcp_label                                                          
        {"RCP_PARAM_RECORD_FORMAT_SUPER_35_SPHERICAL", "stored in camera Super 35 (6K) A filtered view of A filtered view of RCP_PARAM_RECORD_FORMAT", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL, }, true}
    }, 
    {"RCP_PARAM_RECORD_STATE",                                                             
        {"RCP_PARAM_RECORD_STATE", "status Record State", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_RESET_FACTORY_DEFAULTS",                                                             
        {"RCP_PARAM_RESET_FACTORY_DEFAULTS", "Reset Defaults", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_RF_RING_CONTROL",                                                             
        {"RCP_PARAM_RF_RING_CONTROL", "Control Ring Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_RF_RING_ENABLE",                                                             
        {"RCP_PARAM_RF_RING_ENABLE", "Control Ring", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_ROLL_OFF",                                                             
        {"RCP_PARAM_ROLL_OFF", "target Highlight Roll ff", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SAVE_LOG",                                                             
        {"RCP_PARAM_SAVE_LOG", "Save Log", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_SDI_1_TOOLS_ENABLE",                                                             
        {"RCP_PARAM_SDI_1_TOOLS_ENABLE", "SDI Tools", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SDI_COLOR_SETTING",                                                             
        {"RCP_PARAM_SDI_COLOR_SETTING", "SDI Look", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SENSOR_CALIBRATION",                                                             
        {"RCP_PARAM_SENSOR_CALIBRATION", "stored in camera Sensor Calibration Applied sensor calibration", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_SENSOR_FRAME_RATE",                                                             
        {"RCP_PARAM_SENSOR_FRAME_RATE", "Recording Frame Rate", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_LIST_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SENSOR_SHUTTER_MODE",                                                             
        {"RCP_PARAM_SENSOR_SHUTTER_MODE", "Sensor Shutter Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SHUTDOWN",                                                             
        {"RCP_PARAM_SHUTDOWN", "status Shutdown", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_SHUTTER_DISPLAY_MODE",                                                             
        {"RCP_PARAM_SHUTTER_DISPLAY_MODE", "Shutter Display Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SLATE_CAMERA_ID",                                                             
        {"RCP_PARAM_SLATE_CAMERA_ID", "Slate Camera ID", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SLATE_CAMERA_POS",                                                             
        {"RCP_PARAM_SLATE_CAMERA_POS", "Slate Camera Position", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_SYNC_STATE",                                                             
        {"RCP_PARAM_SYNC_STATE", "Sync State", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TALLY_LED_ENABLE",                                                             
        {"RCP_PARAM_TALLY_LED_ENABLE", "Tally Light", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TEMPERATURE_IOB",                                                             
        {"RCP_PARAM_TEMPERATURE_IOB", "STM Temperature", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TEMPERATURE_LEVEL",                                                             
        {"RCP_PARAM_TEMPERATURE_LEVEL", "Camera Status", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TEMPERATURE_PCM",                                                             
        {"RCP_PARAM_TEMPERATURE_PCM", "Power Board Temperature Temperature of the power board in Celsius (C)", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TEMPERATURE_PL",                                                             
        {"RCP_PARAM_TEMPERATURE_PL", "Logic Board 1 Temperature", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TEMPERATURE_PS",                                                             
        {"RCP_PARAM_TEMPERATURE_PS", "Logic Board 0 Temperature", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TEMPERATURE_SB",                                                             
        {"RCP_PARAM_TEMPERATURE_SB", "Sensor Temperature", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TIME",                                                             
        {"RCP_PARAM_TIME", "stored in camera Time Time (HH:MM:SS)", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TIMECODE",                                                             
        {"RCP_PARAM_TIMECODE", "Timecode", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TIMECODE_DISPLAY_MODE",                                                             
        {"RCP_PARAM_TIMECODE_DISPLAY_MODE", "Timecode Display Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TIMECODE_JAM",                                                             
        {"RCP_PARAM_TIMECODE_JAM", "Jam Timecode to TOD", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TIMECODE_SOURCE",                                                             
        {"RCP_PARAM_TIMECODE_SOURCE", "Timecode Source", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TIMECODE_STATE",                                                             
        {"RCP_PARAM_TIMECODE_STATE", "Timecode State", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_TIMEZONE",                                                             
        {"RCP_PARAM_TIMEZONE", "Time Zone", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TINT",                                                             
        {"RCP_PARAM_TINT", "Tint", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_SET_RELATIVE , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TOP_LCD_BRIGHTNESS",                                                             
        {"RCP_PARAM_TOP_LCD_BRIGHTNESS", "LCD Brightness", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TOP_LCD_COLOR_SETTING",                                                             
        {"RCP_PARAM_TOP_LCD_COLOR_SETTING", "LCD Look", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TOP_LCD_GUIDES_ENABLE",                                                             
        {"RCP_PARAM_TOP_LCD_GUIDES_ENABLE", "LCD Guides", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TOP_LCD_PRISM_FINDER_MODE",                                                             
        {"RCP_PARAM_TOP_LCD_PRISM_FINDER_MODE", "LCD Prism Finder Mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_TOP_LCD_TOOLS_ENABLE",                                                             
        {"RCP_PARAM_TOP_LCD_TOOLS_ENABLE", "LCD Tools", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_UART_EXT_BAUD",                                                             
        {"RCP_PARAM_UART_EXT_BAUD", "EXT UART Baud Rate Baud Rate of UART on EXT port", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_UART_EXT_PPP_IP_ADDRESS",                                                             
        {"RCP_PARAM_UART_EXT_PPP_IP_ADDRESS", "EXT UART PPP IP Address IP Address of UART on EXT port if using PPP", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_UART_EXT_PROTOCOL",                                                             
        {"RCP_PARAM_UART_EXT_PROTOCOL", "EXT UART Protocol Protocol for UART on EXT port", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_UPGRADE_CAMERA_FIRMWARE",                                                             
        {"RCP_PARAM_UPGRADE_CAMERA_FIRMWARE", "Upgrade", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_USBC_DHCP",                                                             
        {"RCP_PARAM_USBC_DHCP", "USB DHCP Enable Enable or disable DHCP for KOMODO LINK USB", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_USBC_GATEWAY",                                                             
        {"RCP_PARAM_USBC_GATEWAY", "target USB Gateway Gateway for KOMODO LINK USB assigned by DHCP or desired static gateway if DHCP is disabled", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_USBC_IP_ADDRESS",                                                             
        {"RCP_PARAM_USBC_IP_ADDRESS", "target USB IP Address IP address for KOMODO LINK USB assigned by DHCP or desired static address if DHCP is disabled", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_USBC_NETMASK",                                                             
        {"RCP_PARAM_USBC_NETMASK", "target USB Netmask Netmask for KOMODO LINK USB assigned by DHCP or desired static netmask if DHCP is disabled", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_ADHOC_BAND",                                                             
        {"RCP_PARAM_WIFI_ADHOC_BAND", "Wi Ad oc Frequency Band Wi Ad oc Frequency Band", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_ADHOC_CHANNEL",                                                             
        {"RCP_PARAM_WIFI_ADHOC_CHANNEL", "Wi Ad oc Channel Wi Ad oc Channel", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_ADHOC_ENCRYPTION",                                                             
        {"RCP_PARAM_WIFI_ADHOC_ENCRYPTION", "Wi Ad oc Encryption Wi Ad oc Encryption type", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_ADHOC_PASSWORD",                                                             
        {"RCP_PARAM_WIFI_ADHOC_PASSWORD", "Wi Ad oc WPA2 Passphrase Wi Ad oc WPA2 Passphrase", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_ADHOC_SSID",                                                             
        {"RCP_PARAM_WIFI_ADHOC_SSID", "Wi Ad oc SSID Wi Ad oc SSID", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_DHCP",                                                             
        {"RCP_PARAM_WIFI_DHCP", "Wi DHCP Enable Enable or disable DHCP in infrastructure mode", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_GATEWAY",                                                             
        {"RCP_PARAM_WIFI_GATEWAY", "target Wi Gateway Assigned gateway if DHCP is enabled if not then desired static gateway", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_INFRASTRUCTURE_CONNECT",                                                             
        {"RCP_PARAM_WIFI_INFRASTRUCTURE_CONNECT", "Wi Infrastructure Connect Initiate connection to specified SSID", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_INFRASTRUCTURE_FORGET",                                                             
        {"RCP_PARAM_WIFI_INFRASTRUCTURE_FORGET", "Wi Infrastructure Forget Forget a previously saved network", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_INFRASTRUCTURE_MANUAL_SSID",                                                             
        {"RCP_PARAM_WIFI_INFRASTRUCTURE_MANUAL_SSID", "Wi Infrastructure Other Networks Initiate a manual SSID entry notification Message value is ignored", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_INFRASTRUCTURE_NETWORKS",                                                             
        {"RCP_PARAM_WIFI_INFRASTRUCTURE_NETWORKS", "Infrastructure Networks Wi Infrastructure Saved and Available Networks", RCP_PARAM_TYPE_DISPLAY, {  RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_INFRASTRUCTURE_SCAN",                                                             
        {"RCP_PARAM_WIFI_INFRASTRUCTURE_SCAN", "Wi Infrastructure Scan Initiate scan for available Wi SSIDs", RCP_PARAM_TYPE_ACTION, {  RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_INFRASTRUCTURE_SIGNAL",                                                             
        {"RCP_PARAM_WIFI_INFRASTRUCTURE_SIGNAL", "Wi Infrastructure Signal Strength Wi Received Signal Strength in dBm Any number from WIFI_SIGNAL_INVALID to 0 is valid The other values in wifi_signal_t define thresholds", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_INFRASTRUCTURE_SSID",                                                             
        {"RCP_PARAM_WIFI_INFRASTRUCTURE_SSID", "Wi Infrastructure SSID Wi Infrastructure SSID", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_IP_ADDRESS",                                                             
        {"RCP_PARAM_WIFI_IP_ADDRESS", "target Wi IP Address Assigned IP address if DHCP is enabled if not then desired static IP address", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_MAC_ADDRESS",                                                             
        {"RCP_PARAM_WIFI_MAC_ADDRESS", "Wi MAC Address Wi MAC address", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_WIFI_MODE",                                                             
        {"RCP_PARAM_WIFI_MODE", "Wi Mode Wi mode selection", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_NETMASK",                                                             
        {"RCP_PARAM_WIFI_NETMASK", "target Wi Netmask Assigned netmask if DHCP is enabled if not then desired static netmask", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_WIFI_STATUS",                                                             
        {"RCP_PARAM_WIFI_STATUS", "Wi Status Wi connection status", RCP_PARAM_TYPE_STATUS, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , }, true}
    }, 
    {"RCP_PARAM_ZEBRA_1_ENABLE",                                                             
        {"RCP_PARAM_ZEBRA_1_ENABLE", "Zebra 1 Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_ZEBRA_1_HIGH_IRE",                                                             
        {"RCP_PARAM_ZEBRA_1_HIGH_IRE", "Zebra 1 High IRE", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_ZEBRA_1_LOW_IRE",                                                             
        {"RCP_PARAM_ZEBRA_1_LOW_IRE", "Zebra 1 Low IRE", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_ZEBRA_2_ENABLE",                                                             
        {"RCP_PARAM_ZEBRA_2_ENABLE", "Zebra 2 Enable", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
    {"RCP_PARAM_ZEBRA_2_HIGH_IRE",                                                             
        {"RCP_PARAM_ZEBRA_2_HIGH_IRE", "Zebra 2 High IRE", RCP_PARAM_TYPE_VALUE, {  RCP_SUPPORTED_JSON_RCP_GET , RCP_SUPPORTED_JSON_RCP_SET , RCP_SUPPORTED_JSON_RCP_CUR_INT , RCP_SUPPORTED_JSON_RCP_CUR_STR , RCP_SUPPORTED_JSON_RCP_GET_LIST , RCP_SUPPORTED_JSON_RCP_CUR_LIST , RCP_SUPPORTED_JSON_RCP_GET_LABEL , RCP_SUPPORTED_JSON_RCP_LABEL , RCP_SUPPORTED_JSON_RCP_GET_DEFAULT , }, true}
    }, 
};
