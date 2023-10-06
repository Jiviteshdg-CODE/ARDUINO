#include <Servo.h>
Servo BBR;
void setup() 
{
BBR.attach(9);
}
void loop() {
BBR.write(0);       
    delay(15);   
BBR.write(45);       
    delay(15);      
BBR.write(90);       
    delay(15);       
BBR.write(180);       
    delay(15);                     
  }

