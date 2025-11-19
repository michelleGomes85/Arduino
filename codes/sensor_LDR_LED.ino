#define SENSOR A2
#define LED 13

int valorSensor = 0;
  
void setup()
{
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  valorSensor = analogRead(SENSOR);
  
  if (valorSensor < 150)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);
  
  Serial.println(valorSensor);
  delay(1000);
}
