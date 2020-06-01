#define LOWBUTTON 4
#define HIGHBUTTON 5
#define LED 9
int bright = 100;

void setup() { 
  pinMode(LOWBUTTON, INPUT_PULLUP);
  pinMode(HIGHBUTTON, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(!digitalRead(LOWBUTTON) && bright > 0){
    bright--;  
  } else if(!digitalRead(HIGHBUTTON) && bright < 255){
    bright++;
  }
  analogWrite(LED, bright);
  delay(10);
  Serial.print(digitalRead(LOWBUTTON));
  Serial.print(" ");
  Serial.println(digitalRead(HIGHBUTTON));
}
