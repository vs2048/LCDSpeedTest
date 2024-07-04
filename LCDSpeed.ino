/*
 * LCDSpeed.ino: Simple program to time how long it takes to update the LCD
 *
 * Displays how long a clear and print command takes on an LCD. Used to set loop time on other projects.
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);
unsigned long last = 0;

void setup() {
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  unsigned long delta;
  lcd.clear();
  for(int i = 0; i<16; i++) {
    delta = millis() - last;
    last = last + delta;
    lcd.print(delta);
  }
  delay(1000);
}
