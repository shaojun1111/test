#include "gpio_task.h"
#include "main.h"

void gpio_init(void)
{
    // F103: PC13 低电平点亮，所以设低电平
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
}