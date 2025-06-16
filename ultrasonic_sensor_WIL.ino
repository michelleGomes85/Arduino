#include <Ultrasonic.h>

// Pinos do sensor
#define TRIGGER_PIN 3
#define ECHO_PIN 4

// LEDs
#define LED_YELLOW 12
#define LED_BLUE 11
#define LED_GREY 10

// Criação do objeto do sensor
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup() {
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREY, OUTPUT);
}

void lightHigh(bool yellow, bool blue, bool grey) {
  digitalWrite(LED_YELLOW, yellow);
  digitalWrite(LED_BLUE, blue);
  digitalWrite(LED_GREY, grey);
}

void loop() {
  
  // Leitura da distância em centímetros
  float distancia = ultrasonic.read();

  if (distancia > 117)
    lightHigh(HIGH, LOW, LOW);
  else if (distancia > 60)
    lightHigh(LOW, HIGH, LOW);
  else
    lightHigh(LOW, LOW, HIGH);

  delay(500);
}
