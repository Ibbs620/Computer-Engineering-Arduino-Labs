const int temperaturePin = 0;
const int blueLED = 2;
const int redLED = 3;

void setup(){
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}


void loop(){
  float voltage, degreesC, degreesF;
  voltage = getVoltage(temperaturePin);
  degreesC = (voltage - 0.5) * 100.0;
  degreesF = degreesC * (9.0/5.0) + 32.0;
  
  degreesC = -30;
  
  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(degreesC);
  Serial.print("  deg F: ");
  Serial.println(degreesF);

  if(degreesC > 30) digitalWrite(redLED, HIGH);
  else if(degreesC < -10) digitalWrite(blueLED, HIGH);
  else{
    digitalWrite(redLED, LOW);
    digitalWrite(blueLED, LOW);  
  }
  
  delay(1000); // repeat once per second (change as you wish!)
}


float getVoltage(int pin){
  return (analogRead(pin) * 0.004882814);
}
