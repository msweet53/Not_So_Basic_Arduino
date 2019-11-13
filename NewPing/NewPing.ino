#include <NewPing.h>
 
#define TRIGGER_PIN 6
#define ECHO_PIN 7
#define MAX_DISTANCE 200
int Value = 0;
 
NewPing myHC_SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  pinMode(2, INPUT);

 Serial.begin(9600);
}
 
void loop() {
     Value = myHC_SR04.ping_cm() * 5;
     if(digitalRead(3 == HIGH)) {
     	tone(8, Value);
     	delay(10);
     }

}