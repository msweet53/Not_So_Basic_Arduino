#include <Servo.h>
Servo myServo;
const int trigPin = 6;
const int echoPin = 7;
float duration, distance;

void setup()
{
  myServo.attach(3);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);

}

void loop(){



if (GetDistance()>20){ //checking if distance is over 20
  myServo.write(180); // sends servo full speed to right
}
if (GetDistance()==21){ //checking if distance is equal to 21
  myServo.write(90); // stops servo
}
if (GetDistance()<22){ // checking if distace is over 22
  myServo.write(0); // sends servo full speed to left.
}
}
int GetDistance() // defines GetDistance() function as something that fetches distance from the ultrasonic sensor.
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  if (duration == 0)
  {
    pinMode(echoPin, OUTPUT);
    digitalWrite(echoPin, LOW);
    delay(1);
    pinMode(echoPin, INPUT);
  }
  distance = (duration *.0343) /2;
  delay(100);
  Serial.print("\t");
  Serial.println(distance);
  return distance;
}
