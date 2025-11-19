#define POTENCIOMETRO A5 
#define LED 9

int valorPotenciometro = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  valorPotenciometro = analogRead(POTENCIOMETRO);         
  int brilho = map(valorPotenciometro, 0, 1023, 0, 255);   
  
  analogWrite(LED, brilho);
}
