#include "LedControl.h"
LedControl BBR(12,11,10); 
void setup() 
{
  BBR.shutdown(0,false);
  BBR.setIntensity(0,8);
  BBR.clearDisplay(0);  
} 
void loop()
{
  BBR.setRow(0,0,B00000000);
  BBR.setRow(0,1,B01100110);
  BBR.setRow(0,2,B11111111);
  BBR.setRow(0,3,B11111111);
  BBR.setRow(0,4,B11111111);
  BBR.setRow(0,5,B01111110);
  BBR.setRow(0,6,B00111100);
  BBR.setRow(0,7,B00011000);
}

