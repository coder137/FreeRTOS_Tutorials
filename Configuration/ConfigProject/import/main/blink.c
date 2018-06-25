#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"


/*
 * THINGS TO CHANGE AFTER IMPORTING PROJECT
 * Change Project Makefile
 * Change README.md
 */

//definitions
#define BLINK_GPIO 2

//constants used
const TickType_t xDelay500ms = pdMS_TO_TICKS(500);

//function prototypes
void blink_task(void *pvParameters);

//main function created
void app_main()
{
    BaseType_t xTask = xTaskCreate(&blink_task, "blink_task", 2048, NULL, 5, NULL);

    if(xTask == pdFALSE)
    {
    	printf("Insufficient memory\n");
    }
}

void blink_task(void *pvParameter)
{
    gpio_pad_select_gpio(BLINK_GPIO);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
    while(1)
    {
    	static BaseType_t i = 0;

        /* Blink off (output low) */
        gpio_set_level(BLINK_GPIO, 0);
        printf("LED is OFF: %d\n", i);
        vTaskDelay(xDelay500ms);

        /* Blink on (output high) */
        gpio_set_level(BLINK_GPIO, 1);
        printf("LED is ON: %d\n", i);
        i++;
        vTaskDelay(xDelay500ms);
    }
}
