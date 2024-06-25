#ifndef WCH32_DRIVER_MCU_DEF
#define WCH32_DRIVER_MCU_DEF
#include "../../hardware_api.h"

#if defined(_WCH32_DEF)

// Default PWM parameters
#define _PWM_RESOLUTION
#define _PWM_RANGE
#define _PWM_FREQUENCY
#define _PWM_FREQUENCY_MAX

// 6PWM parameters
#define _HARDWARE_6PWM 1
#define _SOFTWARE_6PWM 0
#define _ERROR_6PWM -1

tyepdef struct WCH32DriverParams {
    HardwareTimer* timers[6] = {null};
    uint32_t channels[6];
    long pwm_frequency;
    float dead_zone;
    uint8_t interface_type;
} WCH32DriverParams;

// timer synchronization functions
void _stopTimers(HardwareTimer **timers_to_stop, int timer_num=6);
void _startTimers(HardwareTimer **timers_to_start, int timer_num=6);

// timer query functions
bool _getPwmState(void* params);
#endif
#endif 