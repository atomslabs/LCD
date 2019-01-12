#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
 Serial.begin(9600);
 lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
}
void loop() {
     lcd.setCursor(0, 1);
     lcd.print(":) 4ATOMS.COM (:");
    
  delay(3000);
  lcd.clear();
}

