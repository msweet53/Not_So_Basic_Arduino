int power = 0;
bool down  = false;
int delayVar = 25;
float(trig) = 0.0;

void setup()
{
	Serial.begin(9600);
	pinMode(5, OUTPUT); // sets pin 5 as an output
}




void loop()
{
trig = trig+ 0.1;
	if (down == false){
		power = (128*sin(trig))+128; // sets power as sinear function
		constrain(power, 0, 255);
		analogWrite(5, power); //makes led brightness equal to power
		delay(10);
	}
	Serial.print(power); // prints value of power
// following code prints amount of lines based on the power value.
	if (power > 0 && power < 20){
		Serial.println("-");
		delay(delayVar);
	}
	else if (power < 40){
		Serial.println("----");
		delay(delayVar);
	}
	else if(power < 60){
		Serial.println("-------");
		delay(delayVar);
	}
	else if(power < 80){
		Serial.println("----------");
		delay(delayVar);
	}
	else if(power < 100){
		Serial.println("-------------");
		delay(delayVar);
	}
	else if(power < 120){
		Serial.println("----------------");
		delay(delayVar);
	}
	else if(power < 140){
		Serial.println("------------------");
		delay(delayVar);
	}
	else if(power < 160){
		Serial.println("--------------------");
		delay(delayVar);
	}
	else if(power < 180){
		Serial.println("----------------------");
		delay(delayVar);
	}
	else if(power < 200){
		Serial.println("------------------------");
		delay(delayVar);
	}
	else if(power < 220){
		Serial.println("--------------------------");
		delay(delayVar);
	}
	else if(power < 240){
		Serial.println("----------------------------");
		delay(delayVar);
	}
	else if(power <= 255){
		Serial.println("------------------------------");
		delay(delayVar);
	}
}
