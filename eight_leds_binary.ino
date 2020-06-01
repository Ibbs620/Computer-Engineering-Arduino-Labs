const int ledPins[8] = {2,3,4,5,6,7,8,9};
int del = 100;

void setup() {
 for(auto x : ledPins) pinMode(x, OUTPUT);
}

void loop() {
  for(int i = 0; i < 256; i++){
    for(auto x : ledPins) digitalWrite(x, LOW);
    int val = i;
    int onoff;
    int pin = 2;
    while(val > 0){
      onoff = val % 2;
      val /= 2;
      digitalWrite(pin, onoff);
      pin++;
    }
    delay(200);
  }
}
