#include <LiquidCrystal.h>

LiquidCrystal LCD(1,2,4,5,6,7);

  

void setup() {
  LCD.begin(16,2);
}

void loop() {
  LCD.print("Hello Manish");
  delay(3000);

  LCD.setCursor(2,1);
  LCD.print("Euuuuuuuuu");
  delay(3000);

  LCD.clear();

  LCD.blink();
  delay(3000);

  LCD.setCursor(7,1);
  delay(3000);
  LCD.noBlink();

  LCD.cursor();
  delay(4000);
  LCD.noCursor();

  LCD.clear();
}