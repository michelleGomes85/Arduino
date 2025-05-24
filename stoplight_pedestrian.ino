int led_rua_vermelho = 13;
int led_rua_amarelo = 12;
int led_rua_verde = 11;

int led_pedestre_vermelho = 7;
int led_pedestre_verde = 4;

void setup()
{
  pinMode(led_rua_vermelho, OUTPUT);
  pinMode(led_rua_verde, OUTPUT);
  pinMode(led_rua_amarelo, OUTPUT);
  
  pinMode(led_pedestre_vermelho, OUTPUT);
  pinMode(led_pedestre_verde, OUTPUT);
}

void loop()
{
  // Fase 1: Carros verdes, pedestre vermelho
  digitalWrite(led_rua_verde, HIGH);
  digitalWrite(led_pedestre_vermelho, HIGH);
  delay(5000); // 5 segundos

  // Fase 2: Carros amarelo, pedestre ainda vermelho
  digitalWrite(led_rua_verde, LOW);
  digitalWrite(led_rua_amarelo, HIGH);
  delay(2000); // 2 segundos

  // Fase 3: Carros vermelho, pedestre verde
  digitalWrite(led_rua_amarelo, LOW);
  digitalWrite(led_rua_vermelho, HIGH);
  digitalWrite(led_pedestre_vermelho, LOW);
  digitalWrite(led_pedestre_verde, HIGH);
  delay(4000); // 4 segundos com pedestre verde

  // Fase 4: Piscar o verde do pedestre antes de parar
  for (int i = 0; i < 3; i++) {
    digitalWrite(led_pedestre_verde, LOW);
    delay(300);
    digitalWrite(led_pedestre_verde, HIGH);
    delay(300);
  }

  // Fase final: Volta para os carros
  digitalWrite(led_pedestre_verde, LOW);
  digitalWrite(led_pedestre_vermelho, HIGH);
  digitalWrite(led_rua_vermelho, LOW);
}
