#include <NewPing.h> // adds NewPing Library
 
#define TRIGGER_PIN 6 // sets trig pin to 6
#define ECHO_PIN 7 // sets echo pin to 7
#define MAX_DISTANCE 200 // sets max distance to 200 cm
int Value = 0;
 
NewPing myHC_SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  pinMode(8, OUTPUT); // defines pin 8 as an OUTPUT

 Serial.begin(9600);
}
 
void loop() {
     Value = myHC_SR04.ping_cm() * 5; // sets value to centimeters read in the ultrasonic sensor times 5
     analogWrite(8, Value); // dims the light based on Value
     delay(100); 

}
