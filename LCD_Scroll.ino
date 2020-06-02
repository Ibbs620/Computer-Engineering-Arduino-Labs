#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD
// Wiring: SDA pin is connected to A4 and SCL pin to A5.
// Connect to LCD via I2C, default address 0x27 (A0-A2 not jumpered)
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // Change to (0x27,16,2) for 16x2 LCD.z
String two = "  Scroll  Left  ";
String one = "  Scroll Right  ";
int del = 500;

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print(one);
  lcd.setCursor(0,1);
  lcd.print(two);
  cycle();
  delay(del);
}

void cycle(){
 one = one[15] + one.substring(0,15);
 two = two.substring(1,15) + two[0];
}
