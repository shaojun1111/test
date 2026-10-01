#ifndef TIMER_TASK_H
#define TIMER_TASK_H

#include <stdint.h>

extern volatile uint32_t tick;

#ifdef __cplusplus
extern "C" {
#endif

void timer_init(void);

#ifdef __cplusplus
}
#endif

#endif