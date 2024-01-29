#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8); // RS,EN,D4,D5,D6,D7
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("running successfully");
  lcd.setCursor(2,2);
  lcd.print("well done");
}

void loop() {
  // put your main code here, to run repeatedly:

}
