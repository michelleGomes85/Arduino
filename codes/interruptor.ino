void setup()
{
  pinMode(3, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if (digitalRead(3) == 1) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
}
