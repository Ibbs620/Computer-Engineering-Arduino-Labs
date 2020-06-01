#define REDPIN 9
#define GREENPIN 10
#define BLUEPIN 11

#define REDPOT A0
#define GREENPOT A1
#define BLUEPOT A2
//set pin numbers

void setup() {
  for(int i = 9; i <= 11; i++) pinMode(i , OUTPUT); //setup led pins
}

void setColour(int r, int g, int b){ //function to control rgb
  analogWrite(REDPIN, r);
  analogWrite(GREENPIN, g);
  analogWrite(BLUEPIN, b);  
}

void loop() {
  int redVal = analogRead(REDPOT) / 4.011; 
  int greenVal = analogRead(GREENPOT) / 4.011;
  int blueVal = analogRead(BLUEPOT) / 4.011;
 //read potentiometers and divide by 4.011 to make it range between 0 and 255 instead of 0 and 1023
  
  setColour(redVal, greenVal, blueVal); //set colour to potentiometer values
  delay(10);
}
