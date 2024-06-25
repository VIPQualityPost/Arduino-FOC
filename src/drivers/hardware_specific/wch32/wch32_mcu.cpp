#include "../../hardware_api.h"
#include "wch32_mcu.h"

#if defined(_WCH32_DEF_)

#define SIMPLEFOC_WCH32_DEBUG
#pragma message("")
#pragma message("SimpleFOC: compiling for WCH32")
#pragma message("")

#ifdef SIMPLEFOC_WCH32_DEBUG
void printTimerCombination(int numPins, PinMap* timers[], int score);
int getTimerNumber(int timerIndex);
#endif 

#ifndef SIMPLEFOC_WCH32_MAX_PINTIMERSUSED
#define SIMPLEFOC_WCH32_MAX_PINTIMERSUSED 12
#endif

int numTimerPinsUsed;
PinMap* timerPinsUsed[SIMPLEFOC_WCH32_MAX_PINTIMERSUSED];

bool _getPwmState(void* params){

}

void _setPwm(HardwareTimer* HT, uint32_t channel, uint32_t value, int resolution){

}

int getLLChannel(PinMap* timer){

}

HardwareTimer* _initPinPWM(uint32_t PWM_freq, PinMap* timer){

}

HardwareTimer* _initPinPWMHigh(uint32_t PWM_freq, PinMap* timer){

}

HardwareTimer* _initPinPWMLow(uint32_t PWM_freq, PinMap* timer){

}

void _alignPWMTimers(HardwareTimer* HT1, HardwareTimer* HT2, HardwareTimer* HT3){

}

void _alignPWMTimers(HardwareTimer* HT1, HardwareTimer* HT2, HardwareTimer* HT3, HardwareTimer* HT4){

}

void _stopTimers(HardwareTimer** timers_to_stop, int timer_num){

}

// May need to have separate setups for various families. Start with V307
int _getInternalSourceTrigger(HardwareTimer* parent, HardwareTimer* child){

}

void syncTimerFrequency(long pwm_frequency, HardwareTimer* timers[], uint8_t num_timers){

}

void _alignTimersNew(){

}

void _startTimers(HardwareTimer** timers_to_start, int timer_num){

}

WCH32DriverParams* _initHardware6PWMPair(long PWM_freq, float dead_zone, PinMap* pinH, PinMap* pinL, WCH32DriverParams* params, int paramsPos){

}

WCH32DriverParams* _initHardware6PWMInterface(long pwm_freq, float dead_zone, PinMap* pinA_h, PinMap* pinA_l, PinMap* pinB_h, PinMap* pinB_l, PinMap* pinC_h, PinMap* pinC_l){

}

int scoreCombination(int numpins, PinMap* pinTimers[]){

}

int findIndexOfFirstPinMapEntry(int pin){

}

int findIndexOfLastPinMapEntry(int pin){

}

int findBestTimerCombo(int numPins, int index, int pins[], PinMap* pinTimers[]){

}

int findBestTimerCombination(int numPins, int pins[], PinMap* pinTimers[]){

}

void* _configure1PWM(long pwm_frequency, const int pinA){

}

void* _configure2PWM(long pwm_frequency, const int pinA, const int pinB){

}

void* _configure3PWM(long pwm_frequency, const int pinA, const int pinB, const int pinC){

}

void* _configure4PWM(long pwm_frequency, const int pinA, const int pinB, const int pinC, const int pinD){

}

void _writeDutyCycle1PWM(float dc_a, void* params){

}

void _writeDutyCycle2PWM(float dc_a, float dc_b, void* params){

}

float _writeDutyCycle3PWM(float dc_a, float dc_b, float dc_c, void* params){
    
}

float _writeDutyCycle4PM(float dc_1a, float dc_1b, float dc_2a, float dc_2b, void* params){

}

void* _configure6PWM(long pwm_frequency, float dead_zone, const int pinA_h, const int pinA_l, const int pinB_h, const int pinB_l, const int pinC_h, const int pinC_l){

}

void _setSinglePhaseState(PhaseState state, HardwareTimer* HT, int channel1, int channel2){

}

void _writeDutyCycle6PWM(float dc_a, float dc_b, float dc_c, PhaseState* phase_state, void* params){

}

#ifdef SIMPLEFOC_WCH32_DEBUG

int getTimerNumber(int timerIndex){

}

void printTimerCombination(int numPins, PinMap* timers[], int score){
    
}