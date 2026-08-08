#ifndef CONFIG_H
#define CONFIG_H

#define IO_USERNAME "TU_USUARIO_ADAFRUIT"
#define IO_KEY "TU_ADAFRUIT_IO_KEY"

#define WIFI_SSID "TU_RED_WIFI"
#define WIFI_PASS "TU_PASSWORD_WIFI"

#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

#endif
