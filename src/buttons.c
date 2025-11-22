#include "include/buttons.h"

struct button_map buttons[] = {
    {GPIO_UP, BTN_DPAD_UP},
    {GPIO_DOWN, BTN_DPAD_DOWN},
    {GPIO_LEFT, BTN_DPAD_LEFT},
    {GPIO_RIGHT, BTN_DPAD_RIGHT},
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
