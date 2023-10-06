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

