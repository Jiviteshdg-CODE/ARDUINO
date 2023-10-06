void setup() {
  // put your setup code here, to run once:

pinMode(11,OUTPUT);//LED
pinMode(12,OUTPUT);//LED
pinMode(13,OUTPUT);//LED
pinMode(5,INPUT);//switch
pinMode(6,INPUT);//switch
pinMode(7,INPUT);//switch
}
void loop(){
if (digitalRead(5)==0)
{digitalWrite(11,0);
}
if(digitalRead(5)==1)
{digitalWrite(11,1);
 }
 
}
