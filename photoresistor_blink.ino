#define LED 9
#define PHOTORES A0

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int light = analogRead(A0);
  if(light < 200){
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);  
  } else {
    digitalWrite(LED, LOW);  
  }
}
