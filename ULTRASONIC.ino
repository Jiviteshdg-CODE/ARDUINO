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


