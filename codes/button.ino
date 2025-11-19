#define ledPin 13
#define buttonPin 5

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  int state = digitalRead(buttonPin);
  delay(200);
  
  if (state == HIGH) {
  	for (int x = 0; x < 5; x++) 
    {
      digitalWrite(ledPin, HIGH);
      delay(200);
      digitalWrite(ledPin, LOW);
      delay(200);
    }
  }
}
