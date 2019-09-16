/*
 * rtcc_config.h
 *
 * Created: 13/09/2019 04:02:16 PM
 *  Author: Loay Ashraf
 */ 


#ifndef RTCC_CONFIG_H_
#define RTCC_CONFIG_H_

#define RTCC_ADDRESS		0b01101000
#define RTCC_ALARM_INT		IO_INT0
#define RTCC_ALARM_INT_MODE	IO_FALLING_EDGE
#define RTCC_ALARM_INT_PIN	GPIO_INT0_PIN

#define RTCC_MILLENNIUM		2000
#define RTCC_CLOCK_FORMAT	"%02d:%02d:%02d %s"

#endif /* RTCC_CONFIG_H_ */