#include <Servo.h>
Servo servo1;  

void setup(){
  servo1.attach(9);
  Serial.begin(9600);
}


void loop(){
  int val = analogRead(A1) / 53.8333333;
  servo1.write(val * 10);
  Serial.println(analogRead(A1));
  delay(50);
}
