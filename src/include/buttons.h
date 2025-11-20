#ifndef BUTTONS_H
#define BUTTONS_H

#include <linux/uinput.h>

// GPIO pin definitions for buttons
#define GPIO_UP 13
#define GPIO_DOWN 5
#define GPIO_LEFT 19
#define GPIO_RIGHT 6
#define GPIO_A 18
#define GPIO_B 12
#define GPIO_X 16
#define GPIO_Y 20
#define GPIO_L1 26
#define GPIO_R1 23
#define GPIO_START 21
#define GPIO_SELECT 4

// Constants for axis limits and polling
#define AXIS_MIN 0
#define AXIS_MAX 255

// Button mapping to Linux key codes
struct button_map {
    int gpio_pin;
    int key_code;
};

extern struct button_map buttons[];
extern const int NUM_BUTTONS;

#endif
