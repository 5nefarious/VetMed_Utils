#ifndef VETMED_DEFS_H
#define VETMED_DEFS_H

#include <avr/pgmspace.h>

// Devices on network
// Can support up to 15 subsystems apart from the main controller.
#define DEVICE_HEAD   0x0
#define DEVICE_REAR   0x1

// Message types
// Note: Restricted to 7 bits. MSB will be dropped.
#define MESSAGE_PAIN          0x01
#define MESSAGE_KEY_VALUE     0x02
#define MESSAGE_GET_KEY       0x03
#define MESSAGE_SET_KEY       0x04
#define MESSAGE_CAPTURE_KEY   0x05
#define MESSAGE_RESET_KEY     0x06

// Sensor subsystem
#define SENSOR_PROSTATE   0x00
#define SENSOR_ANUS       0x01

#define NUM_SENSORS 2

// Parameter keys
#define KEY_STATUS        0x00
#define KEY_READING       0x01
#define KEY_THRESHOLD_1   0x02
#define KEY_THRESHOLD_2   0x03
#define KEY_THRESHOLD_3   0x04

#define NUM_KEYS 5

#define STATUS_OFF    0x00
#define STATUS_ON     0x01
#define STATUS_LOG    0x02

#define STR_BUFFER_LEN  16

static const char device_head_str[] PROGMEM = "head";
static const char device_rear_str[] PROGMEM = "rear";
static const char *const device_strs[] PROGMEM = {
  device_head_str,
  device_rear_str,
};

static const char sensor_prostate_str[] PROGMEM = "prostate";
static const char sensor_anus_str[] PROGMEM = "anus";
static const char *const sensor_strs[] PROGMEM = {
  sensor_prostate_str,
  sensor_anus_str,
};

static const char key_status_str[] PROGMEM = "status";
static const char key_reading_str[] PROGMEM = "reading";
static const char key_threshold1_str[] PROGMEM = "threshold1";
static const char key_threshold2_str[] PROGMEM = "threshold2";
static const char key_threshold3_str[] PROGMEM = "threshold3";
static const char *const key_strs[] PROGMEM = {
  key_status_str,
  key_reading_str,
  key_threshold1_str,
  key_threshold2_str,
  key_threshold3_str,
};

static const char status_off_str[] PROGMEM = "off";
static const char status_on_str[] PROGMEM = "on";
static const char status_log_str[] PROGMEM = "log";
static const char *const status_strs[] PROGMEM = {
  status_off_str,
  status_on_str,
  status_log_str,
};

static const char message_pain_str[] PROGMEM = "pain";
static const char message_key_value_str[] PROGMEM = "value";
static const char message_get_str[] PROGMEM = "get";
static const char message_set_str[] PROGMEM = "set";
static const char message_capture_str[] PROGMEM = "cap";
static const char message_reset_str[] PROGMEM = "rst";
static const char *const message_strs[] PROGMEM = {
    '\0',
    message_pain_str,
    message_key_value_str,
    message_get_str,
    message_set_str,
    message_capture_str,
    message_reset_str,
};

char *retreive_str(const char *const *str_table, int index);

static char str_buffer[STR_BUFFER_LEN];

#endif
