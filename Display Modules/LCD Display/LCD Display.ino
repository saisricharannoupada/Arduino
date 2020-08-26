//Arduino Commands for LCD control
//Arduino software comes with “LiquidCrystal” Library. It contains many functions to control the LCD.

#include <LiquidCrystal.h>
//Initialize the library with the numbers of the interface pins. This library uses only 6 IO pins and always used in 4-bit mode.
LiquidCrystal lcd(RS,E,D4,D5,D6,D7)

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Set up the LCD’s number of columns and rows depending upon your LCD it is 16×2, 16×4, 20×4 etc.
lcd.begin(Col,Rows);

//LCD = 16x2 

lcd.begin(16, 2);
Lcd.clear();
lcd.home();

//Row and col starts from zero, for line one first character it is
lcd.setCursor(0,0);

//For line two coursor at first character it is
lcd.setCursor(0,1);

//Display text on LCD.
lcd.print(“Hello World..”);
