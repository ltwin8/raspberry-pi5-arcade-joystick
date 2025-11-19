#ifndef BUTTONS_H
#define BUTTONS_H

#include <linux/uinput.h>

// GPIO pin definitions for buttons
#define GPIO_UP 1
#define GPIO_DOWN 2
#define GPIO_LEFT 3
#define GPIO_RIGHT 4
#define GPIO_A 5
#define GPIO_B 6
#define GPIO_X 7
#define GPIO_Y 8
#define GPIO_L1 9
#define GPIO_R1 10
#define GPIO_START 11
#define GPIO_SELECT 12

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
