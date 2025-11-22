#include "include/buttons.h"

struct button_map buttons[] = {
    {GPIO_UP, KEY_UP},
    {GPIO_DOWN, KEY_DOWN},
    {GPIO_LEFT, KEY_LEFT},
    {GPIO_RIGHT, KEY_RIGHT},
    {GPIO_UP, BTN_DPAD__UP},
    {GPIO_DOWN, BTN_DPAD__DOWN},
    {GPIO_LEFT, BTN_DPAD__LEFT},
    {GPIO_RIGHT, BTN_DPAD__RIGHT},
    {GPIO_A, BTN_A},
    {GPIO_B, BTN_B},
    {GPIO_X, BTN_X},
    {GPIO_Y, BTN_Y},
    {GPIO_L1, BTN_TL},
    {GPIO_R1, BTN_TR},
    {GPIO_SELECT, BTN_SELECT},
    {GPIO_START, BTN_START}
};

const int NUM_BUTTONS = sizeof(buttons) / sizeof(buttons[0]);
