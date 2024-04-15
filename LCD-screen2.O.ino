#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)

void setup() {
  lcd.begin(16, 2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display

}

void loop() {
  // scroll text to the right
  for (int i = 0; i <= 15; i++) {
    lcd.setCursor(i, 0); // Sets the location at which subsequent text written to the LCD will be displayed
    lcd.print("Right");
    delay(500); // 1 second delay
    lcd.clear(); // Write a character to the LCD
  }
  // scroll text to the left
  for (int i = 15; i >= 0; i--) {
    lcd.setCursor(i, 1);
   lcd.print("Left");
    delay(500); 
    lcd.clear(); 
  }
}