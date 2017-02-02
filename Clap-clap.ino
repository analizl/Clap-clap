	#define MIC_PIN A0
	#define RELAY_PIN 13

	#define MIC_THRESHOLD 715

	void setup()
	{
		pinMode(RELAY_PIN, OUTPUT);
	}

	void loop()
	{
		if(analogRead(MIC_PIN) >= MIC_THRESHOLD)
		{
			digitalWrite(RELAY_PIN, !digitalRead(RELAY_PIN));
			delay(150);
		}
	}