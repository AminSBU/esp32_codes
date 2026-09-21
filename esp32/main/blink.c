#include <stdio.h>
#include "main.h"
#include "blink.h"
void led_main(void)
{
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
}