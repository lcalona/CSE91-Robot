#ifndef MILLENNIUM-TURKEY_H
#define MILLENNIUM-TURKEY_H

#include "Gadgetron.h"


#define DRIVE_STBY 8        
#define DRIVE_PWMA 5        
#define DRIVE_AIN1 9        
#define DRIVE_AIN2 10        
#define DRIVE_PWMB 6        
#define DRIVE_BIN1 11        
#define DRIVE_BIN2 12        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define SERVO_DATA 3        
ServoMotor Servo(SERVO_DATA);

LEDArray display;

#define DISTANCESENSOR_A A0        
DistanceSensor distanceSensor(DISTANCESENSOR_A);

#define BUZZER_1 4        
Buzzer buzzer(BUZZER_1);


#endif