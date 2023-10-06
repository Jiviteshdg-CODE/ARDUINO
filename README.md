HERE ARE THERAW FILEOF THE PROGRAMS:



LED ON
void setup() {
pinMode(11,OUTPUT);
}
void loop() {
digitalWrite(11,1);
}
LED ON USING INT
int LED = 11;
void setup() {
pinMode(LED,OUTPUT);
}
void loop() {
digitalWrite(LED,1);
}
LED OFF
void setup() {
pinMode(11,OUTPUT);
}
void loop() {
digitalWrite(11,0);
}
LED OFF USING INT
int LED = 11;
void setup() {
pinMode(LED,OUTPUT);
}
void loop() {
digitalWrite(LED,0);
}
LED BLINK
void setup() {
pinMode(11,OUTPUT);
}
void loop() {
digitalWrite(11,1);
delay(1000);
digitalWrite(11,0);
delay(1000);
}
LED BLINK USING INT
int LED =11;
void setup() {
pinMode(LED,OUTPUT);
}
void loop() {
digitalWrite(LED,1);
delay(1000);
digitalWrite(LED,0);
delay(1000);
}
LED BLINK USING DEFINE
#define LED 11
void setup() {
pinMode(LED,OUTPUT);
}
void loop() {
digitalWrite(LED,1);
delay(1000);
digitalWrite(LED,0);
delay(1000);
}
LED & SWITCH
void setup()                                                                     
{
pinMode(13,OUTPUT);                                                           
pinMode(2,INPUT);                                                           
}
void loop()
{
if(digitalRead(2)==0)                                                   
{
digitalWrite(13,0);                                                   
}
if(digitalRead(2)==1)              
{
digitalWrite(13,1);                    
}
}
LED & SWITCH(USING ELSE)
void setup()                                                                     
{
pinMode(13,OUTPUT);                                                           
pinMode(2,INPUT);                                                           
}
void loop()
{
if(digitalRead(2)==0)                                                   
{
digitalWrite(13,0);                                                   
}
else
{
digitalWrite(13,1);                    
}
}
MOTOR INTERFACING
int M1_fwd=7;                                        
 int M1_rev=6;                                 
 int M2_fwd=5;                                         
 int M2_rev=4;                                         
 void setup()                                           
{
  pinMode(M1_fwd, OUTPUT);                 
  pinMode(M1_rev, OUTPUT);                 
  pinMode(M2_fwd, OUTPUT);                 
  pinMode(M2_rev, OUTPUT);                 
}
void loop()   {                                           
 forward();                            
 delay(10000);             
 stop();               
 delay(50);                         
 right();                         
 delay(10000);                           
 stop();                                                    
 delay(50);   
 left();                             
 delay(10000);             
 stop();              
 delay(50);                          
 reverse();                         
 delay(10000);                           
 stop();                                                
 delay(50); } 
void forward()                                      
 {
   digitalWrite(M1_fwd,1);                                                                                                                                                        
   digitalWrite(M1_rev,0);                                                                                                          
   digitalWrite(M2_fwd,1);                                                                                         
   digitalWrite(M2_rev,0);                          
 }
void right()                                                
 {
   digitalWrite(M1_fwd,0);                                                                                               
   digitalWrite(M1_rev,1);                          
   digitalWrite(M2_fwd,1);                                                                                              
   digitalWrite(M2_rev,0);                                                                                      
}
void stop()                                           
 {
   digitalWrite(M1_fwd,0);                                                                                              
   digitalWrite(M1_rev,0);                         
   digitalWrite(M2_fwd,0);                                                                                            
   digitalWrite(M2_rev,0);                                                                                       
}
void reverse()                                     
 {
   digitalWrite(M1_fwd,0);                                                                                                                                                 
   digitalWrite(M1_rev,1);                                                                                                       
   digitalWrite(M2_fwd,0);                                                                                        
   digitalWrite(M2_rev,1);                                                                                         
}
void left()                                            
 {
   digitalWrite(M1_fwd,1);                                                                                               
   digitalWrite(M1_rev,0);                        
   digitalWrite(M2_fwd,0);                                                                                            
   digitalWrite(M2_rev,1);                                                                                         
}
LCD INTERFACING
#include <LiquidCrystal.h>
LiquidCrystal BBR(4, 5, 6, 7, 8, 9);
void setup() {
  BBR.begin(16, 2);
  BBR.setCursor(0,0);
  BBR.print("WELCOME TO");
  BBR.setCursor(3,1);
  BBR.print("BBR");
}
void loop() {
BBR.scrollDisplayLeft();
delay(400);
}

SERVO
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

ULTRASONIC
int echoPin =2; 
int trigPin =3;
int duration, distance; 
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Serial.println("MEASURE THE DISTANCE"); 
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  distance = duration * 0.034 / 2; 
  duration = pulseIn(echoPin, HIGH);
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}


ULTRASONIC WITH LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(6, 7, 8, 9, 10, 11); 
#define echoPin 12 
#define trigPin 13 
int duration; 
int distance_cm; 
int distance_inch; 
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Serial.println("LETS START MEASURING THE DISTANCE "); 
  lcd.begin(16, 2); 
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance_cm = duration * 0.034 / 2; 
  distance_inch = duration * 0.0133 / 2; 
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(distance_cm);
  lcd.println(" cm");
  lcd.setCursor(0, 1);
  lcd.print("Distance: ");
  lcd.print(distance_inch);
  lcd.println(" inch");
}

VOTING MACHINE
#include<LiquidCrystal.h>
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);
#define sw1 15
#define sw2 16
#define sw3 17
#define sw4 18
#define sw5 19
int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
void setup()
{
  pinMode(sw1, INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(sw5,INPUT);
  lcd.begin(16, 2);
  lcd.print("Voting Machine");
  lcd.setCursor(0,1);
  lcd.print("Designed by BBR");
  delay(3000);
  digitalWrite(sw1, HIGH);
  digitalWrite(sw2, HIGH);
  digitalWrite(sw3, HIGH);
  digitalWrite(sw4, HIGH);
  digitalWrite(sw5, HIGH);
  lcd.clear();

}
void loop()
{
  lcd.setCursor(0,0);
  lcd.print("DMK");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  lcd.setCursor(4,0);
  lcd.print("ADMK");
  lcd.setCursor(5,1);
  lcd.print(vote2);
  lcd.setCursor(9,0);
  lcd.print("BJP");
   lcd.setCursor(10,1);
  lcd.print(vote3);
  lcd.setCursor(13,0);
  lcd.print("CON"); 
  lcd.setCursor(14,1);
  lcd.print(vote4);
  if(digitalRead(sw1)==0)
    vote1++;
    while(digitalRead(sw1)==0);
  if(digitalRead(sw2)==0)
    vote2++;
    while(digitalRead(sw2)==0);
  if(digitalRead(sw3)==0)
    vote3++;
    while(digitalRead(sw3)==0);
   if(digitalRead(sw4)==0)
    vote4++;
    while(digitalRead(sw4)==0);
   if(digitalRead(sw5)==0)
   {
     int vote=vote1+vote2+vote3+vote4;
     if(vote)
     {
      if((vote1 > vote2 && vote1 > vote3 && vote1 > vote4))
      {
       lcd.clear();
       lcd.print("DMK Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote2 > vote1 && vote2 > vote3 && vote2 > vote4))
      {
       lcd.clear();
       lcd.print("ADMK Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote3 > vote1 && vote3 > vote2 && vote3 > vote4))
      {
       lcd.clear();
       lcd.print("BJP Wins");
       delay(2000);
       lcd.clear();
      }
     else if(vote4 > vote1 && vote4 > vote2 && vote4 > vote3)
     {
       lcd.setCursor(0,0);
       lcd.clear();
       lcd.print("CON Wins");
       delay(2000);
       lcd.clear();
     }
     else
     {
       lcd.clear();
       lcd.print("   Tie Up Or   ");
       lcd.setCursor(0,1);
       lcd.print("   No Result   ");
       delay(1000);
       lcd.clear();
     }
     
    }      
     else 
     {
       lcd.clear();
       lcd.print("No Voting....");
       delay(1000);
       lcd.clear();
     }
     vote1=0;vote2=0;vote3=0;vote4=0,vote=0;
     lcd.clear();
   }
}
  
SANITIZER
Servo Myservo;
#include<Servo.h>
#define echoPin 4
#define trigPin 5
int long duration;
int distance;
void setup(){ 
Myservo.attach(3);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
}
void loop()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(2); 
digitalWrite(trigPin,HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration*0.034/2);
 if(distance<=5){
Myservo.write(180);
}
else {
Myservo.write(0);
}
  delay(500);
}

BLIND STICK
int trigPin = 9;
int echoPin = 10;
int buzzer = 11;
int ledPin = 13;
int duration,distance;
void setup() 
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600); 
}
void loop() 
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);  
if (distance <= 5){
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
}                 
}

IR SENSOR
void setup()                                                                     
{
pinMode(13,OUTPUT);                                                           
pinMode(7,INPUT);                                                           
}
void loop()
{
if(digitalRead(7)==0)                                                   
{
digitalWrite(13,1);                                                   
}
if(digitalRead(7)==1)              
{
digitalWrite(13,0);                    
}
}

8X8 DOT MATRIX
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

8X8 DOT MATRIX (FOR MANY SYMBOLS/NUMBERS)
#include "LedControl.h"
LedControl BBR(12,11,10); 
void setup() 
{
  BBR.shutdown(0,false);
  BBR.setIntensity(0,8);
  BBR.clearDisplay(0);  
} 	
void loop(){
heart();
delay(1000);
arrow();
delay(1000);
happy();
delay(1000); 
}
void heart(){
  BBR.setRow(0,0,B00000000);
  BBR.setRow(0,1,B01100110);
  BBR.setRow(0,2,B11111111);
  BBR.setRow(0,3,B11111111);
  BBR.setRow(0,4,B11111111);
  BBR.setRow(0,5,B01111110);
  BBR.setRow(0,6,B00111100);
  BBR.setRow(0,7,B00011000);
}
void arrow(){
  BBR.setRow(0,0,B00000000);
  BBR.setRow(0,1,B01100110);
  BBR.setRow(0,2,B11111111);
  BBR.setRow(0,3,B11111111);
  BBR.setRow(0,4,B11111111);
  BBR.setRow(0,5,B01111110);
  BBR.setRow(0,6,B00111100);
  BBR.setRow(0,7,B00011000);
}
void happy()
{
  BBR.setRow(0,0, B00111100);
  BBR.setRow(0,1, B01000010);
  BBR.setRow(0,2, B10100101);
  BBR.setRow(0,3, B10000001);
  BBR.setRow(0,4, B10100101);
  BBR.setRow(0,5, B10011001);
  BBR.setRow(0,6, B01000010);
  BBR.setRow(0,7, B00111100);
}
8X8 DOT MATRIX (with small changes)
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
symbols();
}
void symbols()
{
  BBR.setRow(0,0,B00000000);
  BBR.setRow(0,1,B01100110);
  BBR.setRow(0,2,B11111111);
  BBR.setRow(0,3,B11111111);
  BBR.setRow(0,4,B11111111);
  BBR.setRow(0,5,B01111110);
  BBR.setRow(0,6,B00111100);
  BBR.setRow(0,7,B00011000);
  delay(1000);

  BBR.setRow(0,0,B00000000);
  BBR.setRow(0,1,B01100110);
  BBR.setRow(0,2,B11111111);
  BBR.setRow(0,3,B11111111);
  BBR.setRow(0,4,B11111111);
  BBR.setRow(0,5,B01111110);
  BBR.setRow(0,6,B00111100);
  BBR.setRow(0,7,B00011000);
  delay(1000);

BBR.setRow(0,0, B00111100);
  BBR.setRow(0,1, B01000010);
  BBR.setRow(0,2, B10100101);
  BBR.setRow(0,3, B10000001);
  BBR.setRow(0,4, B10100101);
  BBR.setRow(0,5, B10011001);
  BBR.setRow(0,6, B01000010);
  BBR.setRow(0,7, B00111100);
 delay(1000);
}

FOR LOOP
void setup() {
Serial.begin(9600);
}
void loop() {
  int i;
  for(i=0; i<10; i++)
  {
    Serial.println(i);
    delay(600);
  }
}

WHILE LOOP
void setup() {
Serial.begin(9600);
}
void loop() {
int i=1;
while (i<10)
{
  Serial.println(i);
  i++;
  delay(500);
}
}

PIR SENSOR
Void setup()                                                                     
{
pinMode(13,OUTPUT);                                                           
pinMode(7,INPUT);                                                           
}
void loop()
{
if(digitalRead(7)==0)                                                   
{
digitalWrite(13,1);                                                   
}
if(digitalRead(7)==1)              
{
digitalWrite(13,0);                    
}
}

BLUETOOTH INTERFACING
void setup()
{
Serial.begin(9600);
pinMode(11, OUTPUT);
}
void loop()
{
while(Serial.available())
{
int data = Serial.read();
if(data =='1') 
{
digitalWrite(11,1);
}
else if(data =='2') 
{
digitalWrite(11,0);
}
}
}

DHT INTERFACING
#include <dht.h>
dht DHT;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
    DHT.read11(7);
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    delay(5000);
} 

DHT WITH LCD
#include <dht.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
dht DHT;
#define DHT11_PIN 7
void setup(){
  lcd.begin(16, 2);
}
void loop(){
  int chk = DHT.read11(DHT11_PIN);
  lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(1000);
}

RAIN SENSOR
Void setup()                                                                     
{
pinMode(13,OUTPUT);                                                           
pinMode(7,INPUT);                                                           
}
void loop()
{
if(digitalRead(7)==0)                                                   
{
digitalWrite(13,1);                                                   
}
if(digitalRead(7)==1)              
{
digitalWrite(13,0);                    
}
}

BLUETOOTH INTERFACING
void setup()
{
Serial.begin(9600);
pinMode(11, OUTPUT);
}
void loop()
{
while(Serial.available())
{
int data = Serial.read();
if(data =='1') 
{
digitalWrite(11,1);
}
else if(data =='2') 
{
digitalWrite(11,0);
}
}
} 

BLUETOOTH CONTROLLED ROBOT
#define m11 11
#define m12 12 
#define m21 10 
#define m22 9 
void forward()
{
digitalWrite(m11, HIGH);
digitalWrite(m12, LOW);
digitalWrite(m21, HIGH);
digitalWrite(m22, LOW);
}
void left()
{
digitalWrite(m11, LOW);
digitalWrite(m12, HIGH);
digitalWrite(m21, HIGH);
digitalWrite(m22, LOW);
}
void backward()
{
digitalWrite(m11, LOW);
digitalWrite(m12, HIGH);
digitalWrite(m21, LOW);
digitalWrite(m22, HIGH);
}
void right()
{
digitalWrite(m11, HIGH);
digitalWrite(m12, LOW);
digitalWrite(m21, LOW);
digitalWrite(m22, HIGH);
}
void Stop()
{
digitalWrite(m11, LOW);
digitalWrite(m12, LOW);
digitalWrite(m21, LOW);
digitalWrite(m22, LOW);
}
void setup()
{
Serial.begin(9600);
pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21, OUTPUT);
pinMode(m22, OUTPUT);
}
void loop()
{
while(Serial.available())
{
char data = Serial.read();
if(data =='1') 
{
forward();
}
else if(data =='2') 
{
right();
}
else if(data =='3') 
{
left();
}
else if(data =='4') 
{
backward();
}
else if(data =='5') 
{
Stop();
}
}
}

OBSTACLE AVOIDER ROBOT
int trigPin = 12;
int echoPin = 11;
int duration, distance;
int in1 = 5;
int in2 = 4;
int in3 = 3;
int in4 = 2;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{     
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  if(distance<20)
    {
      digitalWrite(in1, 1); 
      digitalWrite(in2, 0); 
      digitalWrite(in3, 0); 
      digitalWrite(in4, 1);
      delay(400);
    }
  else
    {
      digitalWrite(in1, 1); 
      digitalWrite(in2, 0); 
      digitalWrite(in3, 1); 
      digitalWrite(in4, 0);
    }  
}
