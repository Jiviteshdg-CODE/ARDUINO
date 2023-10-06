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
S