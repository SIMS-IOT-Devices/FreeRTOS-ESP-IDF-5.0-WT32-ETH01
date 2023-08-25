// ESP IDF 5.0 ethernet board WT32-ETH01 
// Blinking LED and digital output  

#include <driver/gpio.h>
#include <rom/gpio.h>
#include <stdio.h>
#include "esp_event.h"

#define PIN 5           // RXD (in the Datasheet TXD)
#define TIME_FRAME 5000 // 5 seconds

void app_main(void)
{
    esp_rom_gpio_pad_select_gpio(PIN);
    gpio_set_direction(PIN, GPIO_MODE_OUTPUT);

    while (1)
    {
        gpio_set_level(PIN, 0);
        vTaskDelay(pdMS_TO_TICKS(TIME_FRAME));
        gpio_set_level(PIN, 1);
        vTaskDelay(pdMS_TO_TICKS(TIME_FRAME));
    }
}