
int segA = 3;
int segB = 4;
int segC = 5; 
int segD = 6; 
int segE = 7; 
int segF = 8; 
int segG = 9; 

void mostrarCaracter(bool a, bool b, bool c, bool d, bool e, bool f, bool g) {
  digitalWrite(segA, a);
  digitalWrite(segB, b);
  digitalWrite(segC, c);
  digitalWrite(segD, d);
  digitalWrite(segE, e);
  digitalWrite(segF, f);
  digitalWrite(segG, g);
}
 
void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop() {
  // Mostrar 0
  mostrarCaracter(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW);
  delay(1000);

  // Mostrar 1
  mostrarCaracter(LOW, HIGH, HIGH, LOW, LOW, LOW, LOW);
  delay(1000);

  // Mostrar 2
  mostrarCaracter(HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH);
  delay(1000);

  // Mostrar 3
  mostrarCaracter(HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH);
  delay(1000);

  // Mostrar 4
  mostrarCaracter(LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH);
  delay(1000);

  // Mostrar 5
  mostrarCaracter(HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH);
  delay(1000);

  // Mostrar 6
  mostrarCaracter(HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH);
  delay(1000);

  // Mostrar 7
  mostrarCaracter(HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW);
  delay(1000);

  // Mostrar 8
  mostrarCaracter(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH);
  delay(1000);

  // Mostrar 9
  mostrarCaracter(HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH);
  delay(1000);
}
