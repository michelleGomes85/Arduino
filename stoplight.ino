const int leds[] = {13, 10, 4}; 
const int delayTime = 1000; 
int currentLed = 0;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], i == currentLed ? HIGH : LOW); 
  }
  
  delay(delayTime);
  currentLed = (currentLed + 1) % 3;
}
