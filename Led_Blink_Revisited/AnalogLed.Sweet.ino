int power = 0;
bool down  = false;
int delayVar = 25;
float(trig) = 0.0;

void setup()
{
	Serial.begin(9600);
	pinMode(5, OUTPUT);
}




void loop()
{
trig = trig+ 0.1;
	if (down == false){
		power = (128*sin(trig))+128;
		constrain(power, 0, 255);
		analogWrite(5, power);
		delay(10);
	}
	Serial.print(power);

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