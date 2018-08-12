/*
  user_config_override.h - user configuration overrides user_config.h for Sonoff-Tasmota

  Copyright (C) 2018  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.


  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_


/*****************************************************************************************************\
 * ATTENTION: - Changes to most PARAMETER defines will only override flash settings if you change
 *              define CFG_HOLDER.
 *            - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *            - You still need to update user_config.h for major defines MODULE and USE_MQTT_TLS.
 *            - Changing MODULE defines are not being tested for validity as they are in user_config.h.
 *            - Most parameters can be changed online using commands via MQTT, WebConsole or serial.
 *            - So I see no use in this but anyway, your on your own.
\*****************************************************************************************************/

// Examples
//#ifdef CFG_HOLDER
//#undef CFG_HOLDER
//#endif
//#define CFG_HOLDER             0x20161210

//#ifdef STA_SSID1
//#undef STA_SSID1
//#endif
//#define STA_SSID1              "yourssid1"
#ifdef CFG_HOLDER
#undef CFG_HOLDER
#endif
#define CFG_HOLDER             0x20180809       // [Reset 1] Change this value to load following default configuration parameters
// -- Wifi ----------------------------------------
#ifdef STA_SSID1
#undef STA_SSID1

#endif
#define STA_SSID1              "SnowMania"  // [Ssid1] Wifi SSID
#ifdef STA_PASS1
#undef STA_PASS1
#endif
#define STA_PASS1              "********"          // [Password1] Wifi password
#ifdef STA_SSID2
#undef STA_SSID2
#endif
#define STA_SSID2              "NOT4iPHONE"  // [Ssid1] Wifi SSID
#ifdef STA_PASS2
#undef STA_PASS2
#endif
#define STA_PASS2              "*******"          // [Password1] Wifi password
#ifdef WIFI_CONFIG_TOOL
#undef WIFI_CONFIG_TOOL
#endif
#define WIFI_CONFIG_TOOL       WIFI_MANAGER      // [WifiConfig] Default tool if wifi fails to connect

//#define USE_MQTT_TLS                             // EXPERIMENTAL Use TLS for MQTT connection (+53k code, +20k mem) - Disable by //
#ifdef MQTT_USE
#undef MQTT_USE
#endif
#define MQTT_USE               1

#ifdef MQTT_HOST
#undef MQTT_HOST
#endif
#define MQTT_HOST            "192.168.2.3"    // [MqttHost]

#ifdef MQTT_PORT
#undef MQTT_PORT
#endif
#define MQTT_PORT            1883                // [MqttPort] MQTT TLS port

#ifdef MQTT_USER
#undef MQTT_USER
#endif
#define MQTT_USER            "homeassistant"         // [MqttUser] Mandatory user

#ifdef MQTT_PASS
#undef MQTT_PASS
#endif
#define MQTT_PASS            "*******"            // [MqttPassword] Mandatory password

#ifdef SERIAL_LOG_LEVEL
#undef SERIAL_LOG_LEVEL
#endif
#define SERIAL_LOG_LEVEL       LOG_LEVEL_NONE

#ifdef USE_DOMOTICZ
#undef USE_DOMOTICZ                             // Enable Domoticz (+7k code, +0.3k mem) - Disable by //
#endif

#ifdef TIME_DST_OFFSET
#undef TIME_DST_OFFSET
#endif
#define TIME_DST_OFFSET        +60               // Offset from UTC in minutes (-780 to +780)
#ifdef TIME_STD_OFFSET
#undef TIME_STD_OFFSET
#endif
#define TIME_STD_OFFSET        0                // Offset from UTC in minutes (-780 to +780)

#ifdef LATITUDE
#undef LATITUDE
#endif
#define LATITUDE               41.186393         // [Latitude] Your location to be used with sunrise and sunset
#ifdef LONGITUDE
#undef LONGITUDE
#endif
#define LONGITUDE              -8.642753         // [Longitude] Your location to be used with sunrise and sunset

//#ifdef USE_I2C
//#undef USE_I2C                    // I2C using library wire (+10k code, 0.2k mem) - Disable by //
//#endif

#ifdef USE_ADC_VCC
#undef USE_ADC_VCC
#endif

#define USE_BH1750                             // Add I2C code for BH1750 sensor
//#define USE_BMP                                // Add I2C code for BMP/BME280 sensor


//#ifdef USE_ADS1115
//#undef USE_ADS1115                   // 16byte memc
//#endif

//#undef USE_CHIRP
#define USE_PCF8574
//#define USE_MQ_SENSOR

#ifdef USE_BMP
#undef USE_BMP
#endif

#ifdef USE_MHZ19
#undef USE_MHZ19
#endif                                // Add support for MH-Z19 CO2 sensor (+2k code)
#ifdef USE_SENSEAIR
#undef USE_SENSEAIR
#endif

//#define USE_ADS1115
#define USE_MCP230xx                           // Enable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
#define USE_MCP230xx_OUTPUT
#define USE_MCP230xx_DISPLAYOUTPUT
// -- Application ---------------------------------
#undef APP_TIMEZONE
#define APP_TIMEZONE           99                 // [Timezone] +1 hour (Amsterdam) (-12 .. 12 = hours from UTC, 99 = use TIME_DST/TIME_STD)

//#ifdef USE_SHUTTER
//#undef USE_SHUTTER
//#endif


#endif  // _USER_CONFIG_OVERRIDE_H_
