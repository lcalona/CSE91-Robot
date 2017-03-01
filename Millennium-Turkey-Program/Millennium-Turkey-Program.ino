#include <Servo.h>
#include "Millennium-Turkey.h"

void setup()
{
  Serial.begin(9600);
  drive.setup();
  Servo.setup();
  display.setup();
  distanceSensor.setup();
  buzzer.setup();
  
}

void loop()
{
  Serial.println("Testing drive...");
  
  drive.spinLeft();
  delay(1000);
  drive.spinRight();
  delay(1000);
        Serial.println("Testing display...");
  
  	display.clear();
  	display.drawCircle(3,3, 3);
        Serial.println("Testing distanceSensor...");
  
  
  	 for (int c = 0; c < 5000; c++) {
  	 char str[50];
  	 sprintf(str, "distanceSensor: distance= %d", distanceSensor.get_distance());
  	 Serial.println(str);
  	 delay(1);
  	}
        Serial.println("Testing buzzer...");
  
  	buzzer.playNote(NOTE_A4,300);
  	delay(300);
  	buzzer.playNote(NOTE_B4,300);
  	delay(300);
  	buzzer.playNote(NOTE_C4,300);
  	delay(300);
        
}