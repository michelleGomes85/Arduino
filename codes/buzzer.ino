int buzina = 12; 

void setup() {
  pinMode(buzina, OUTPUT);
}

void tocaNota(int frequencia, int duracao) {
  tone(buzina, frequencia);
  delay(duracao);
  noTone(buzina);
  delay(100);
}

void loop() {
  
  // Escala de Dó Maior
  tocaNota(261, 400); // Dó
  tocaNota(294, 400); // Ré
  tocaNota(329, 400); // Mi
  tocaNota(349, 400); // Fá
  tocaNota(392, 400); // Sol
  tocaNota(440, 400); // Lá
  tocaNota(493, 400); // Si
  tocaNota(523, 600); // Dó (oitava acima)

  delay(2000);
}
