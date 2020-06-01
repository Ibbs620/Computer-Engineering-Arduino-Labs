#define LED 13 //Set pin numbers for LED and Potentiometer
#define POT A0

void setup() {
  pinMode(LED, OUTPUT); //Setup pins
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(POT); //Read potentiometer value
  Serial.println(potValue);
  digitalWrite(LED, HIGH); //Blink LED at speed based on potentiometer value
  delay(potValue);
  digitalWrite(LED, LOW);
  delay(potValue);
}
