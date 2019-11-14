LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //The pins we are using on the arduino.
int timer = 0;
 
void setup() {
  lcd.begin(16, 2); //The screen has sixteen columns and two rows.
  lcd.print("Hello World"); //What is being typed on the LCD.
}
 
void loop() {
  lcd.setCursor(0, 1); // setting cursor to bottom row
  timer++; // adding 1 to timer.
  lcd.print(timer); // Printing the number of seconds.
  delay(1000); // making sure it changes every 1 second.
}