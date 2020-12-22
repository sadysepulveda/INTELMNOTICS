const int analogInPin = A0; 
int sensorValue = 0; 
int current=0;
void setup() {
  Serial.begin(115200);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  current = map(sensorValue, 0, 1024, 0, 100);
  Serial.print("Corriente = ");
  Serial.print(current);
  Serial.print("A");
  delay(5000);
}
