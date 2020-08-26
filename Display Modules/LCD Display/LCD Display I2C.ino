#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to the functioning address (Use I2C Serial Address Finder) for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3F, 16, 2);    //Found address as 0x3F

void setup()
{
  // initialize the LCD, 
  lcd.begin();
 
  // Turn on the blacklight and print a message.
  lcd.backlight();
}

void loop()
{
  
  //start of loop_LCD with I2C
  lcd.clear();
  lcd.print("Hello");
  lcd.setCursor (0,1); // go to start of 2nd line
 lcd.print("World!");
  //lcd.print(millis() / 1000);
  delay(500);
 //end of loopcode_LCD with I2C
}
