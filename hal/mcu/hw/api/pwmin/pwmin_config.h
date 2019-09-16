/*
 * pwm_in_config.h
 *
 * Created: 11/09/2019 03:10:03 PM
 *  Author: Loay Ashraf
 */ 


#ifndef PWM_IN_CONFIG_H_
#define PWM_IN_CONFIG_H_

#define PWMIN_PULSE_TIMER		TIMER2_M
#define PWMIN_PULSE_TIMER_MODE	T_NORMAL
#define PWMIN_PULSE_TIMER_PRE	T_DIV1024

#define PWMIN_FREQ_TIMER		TIMER1_M
#define PWMIN_FREQ_TIMER_MODE	T16_NORMAL
#define PWMIN_FREQ_TIMER_PRE	T16_EXT_RISING
#define PWMIN_FREQ_TIMER_PIN	TIMER1_T_PIN

#endif /* PWM_IN_CONFIG_H_ */