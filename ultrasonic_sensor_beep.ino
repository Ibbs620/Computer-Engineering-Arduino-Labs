#include <NewPing.h>
#define TRIGGER_PIN 11
#define ECHO_PIN 12
#define MAX_DISTANCE 200

// NewPing setup of pins and maximum distance
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}
void loop() {x
  unsigned int distance = sonar.ping_cm();
  
  analogWrite(9, 50);
  delay(50);
  analogWrite(9, 0);
  delay(distance * 10);
}
