#define TRIGGER_PIN 3
#define ECHO_PIN 4

#define LED_YELLOW 12
#define LED_BLUE 11
#define LED_GREY 10

void setup() {
  
  // Saida
  pinMode(TRIGGER_PIN, OUTPUT);
  
  //Entrada
  pinMode(ECHO_PIN, INPUT);
  
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREY, OUTPUT);
}

void lightHigh(bool yellow, bool blue, bool grey) {
 	digitalWrite(LED_YELLOW, yellow) ;
  digitalWrite(LED_BLUE, blue);
  digitalWrite(LED_GREY, grey);
}

void loop() {

  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  // Lê o tempo de resposta
  long duracao = pulseIn(ECHO_PIN, HIGH);

  // Calcula a distância (em cm)
  float distancia = duracao * 0.034 / 2;
  
  if (distancia > 117)
    lightHigh(HIGH, LOW, LOW);
  else if (distancia > 60)
    lightHigh(LOW, HIGH, LOW);
  else
    lightHigh(LOW, LOW, HIGH);
}
