#include<LiquidCrystal.h>
int sensorpin = A0; //connected to analog pin
int sensorvalue = 0; //initialize to the 0
int A1A = 6;
int A1B = 7;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //declaring the LCD pins, the d pins are the data pins
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //decleration of the lcd interface pins
void setup() {
  lcd.begin(16, 2); //16-columns, 2-rows
}
void loop() {
  lcd.clear();
  lcd.print("Starting");
  sensorvalue = analogRead(sensorpin); //taking the analog values from the sensor pin and storing it in the sensor-value
  if (sensorvalue < 2000) //if less than 400, cursor should be in the first row
  {
    lcd.setCursor(0, 0);
    lcd.print("Empty"); //then it will send the message empty
  }
  else if (sensorvalue >= 20000);
  {
    lcd.setCursor(0, 0);
    lcd.print("Water Detected");
    delay(1000);
  }
  lcd.setCursor(0, 0);
  lcd.print(sensorvalue); //sensor values are printing on the lcd
  lcd.print(" ");


}
