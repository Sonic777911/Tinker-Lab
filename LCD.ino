// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16,2);
  
  lcd_1.print("Hello World");
}

void loop()
{
  lcd_1.setCursor(0,1);
  lcd_1.print(seconds);
  lcd_1.setBacklight(1);
  delay(1000); // Wait for 1000 millisecond(s)
  lcd_1.setBacklight(0);
  delay(1000); // Wait for 1000 millisecond(s)
  seconds +=1;
}