/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2026-09-30 22:55:06
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2026-10-01 23:37:50
 * @FilePath: \test\Tasks\src\timer_task.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "timer_task.h"
#include "main.h"

extern TIM_HandleTypeDef htim2;
extern IWDG_HandleTypeDef hiwdg;

volatile uint32_t tick = 0;

void timer_init(void)
{
    HAL_TIM_Base_Start_IT(&htim2);
}

extern "C" void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM2)
    {
        tick++;
    //    HAL_IWDG_Refresh(&hiwdg);
    }
}