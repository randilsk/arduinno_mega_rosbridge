// Project-wide config macros for conditional compilation
#ifndef CONFIG_H
#define CONFIG_H

// Enable base controller code (used across multiple compilation units)
#define USE_BASE

// Use Arduino's direct encoder counters (matches previous default)
#define ARDUINO_ENC_COUNTER

// Use L298 motor driver pin mappings
#define L298_MOTOR_DRIVER

#endif // CONFIG_H
