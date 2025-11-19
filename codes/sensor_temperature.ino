#define LED 4
#define BUZZER 12
#define SENSOR_TEMPERATURE A0

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int raw = analogRead(SENSOR_TEMPERATURE);
  
  float v = raw * (5.0 / 1024.0);
  
  float tempC = (v - 0.5) * 100.0;
  
  if (tempC > 30.0) {
    digitalWrite(LED, HIGH);
    tone(BUZZER, 1000);
  } else {
    digitalWrite(LED, LOW);
    noTone(BUZZER);
  }
    
}
