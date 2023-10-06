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
