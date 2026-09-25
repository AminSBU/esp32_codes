#include <stdio.h>
#include "main.h"
#include "blink.h"
#include "esp-wifi-ap.h"

void app_main(void)
{
    led_main();
    esp32_WIFI_AP_main();
    while (1) {
        gpio_set_level(GPIO_NUM_2, 1);
        vTaskDelay(100 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_2, 0);
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}
