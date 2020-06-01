int led = 13;
int sensor = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}
void loop() {
  int sensorval = digitalRead(sensor);
  Serial.println(sensorval);

  if (sensorval == HIGH) {
    digitalWrite(led, HIGH);
    while(true){
      tone(9, 2000);
      delay(500);
      tone(9, 1000);
      delay(500);
    }
  }
}
