#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int val = 0; 
LiquidCrystal_I2C lcd (0x27,16,2);

void setup () {
  lcd.init (); 
  lcd.init (); 
  lcd.backlight ();
}
void loop () {
  val = analogRead (A3);
  lcd.clear ();
  lcd.print (val);
  delay(100);
} 

