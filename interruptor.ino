int botao = 0;
int ultimoEstadoBotao = 0;
int estadoLED = LOW;

void setup() {
  pinMode(7, INPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, estadoLED);  // Configura o LED para o estado inicial
}

void loop() {
  // Lê o estado atual do botão
  botao = digitalRead(7);
  
  // Verifica se o botão foi pressionado (estado mudou de HIGH para LOW)
  if (botao == LOW && ultimoEstadoBotao == HIGH) {
    // Inverte o estado do LED
    estadoLED = !estadoLED;
    digitalWrite(13, estadoLED);  // Atualiza o estado do LED
  }
  
  // Atualiza o último estado do botão
  ultimoEstadoBotao = botao;

  // Pequeno delay para evitar bouncing do botão
  delay(50);
}
