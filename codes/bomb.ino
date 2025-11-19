
int segA = 3;
int segB = 4;
int segC = 5; 
int segD = 6; 
int segE = 7; 
int segF = 8; 
int segG = 9; 

int buzzer = 10;

int mostrarCaracter(bool a, bool b, bool c, bool d, bool e, bool f, bool g) 
{
  digitalWrite(segA, a);
  digitalWrite(segB, b);
  digitalWrite(segC, c);
  digitalWrite(segD, d);
  digitalWrite(segE, e);
  digitalWrite(segF, f);
  digitalWrite(segG, g);  
}

void bomb(int buzzer, int frequencia) {
  tone(buzzer, frequencia);
  
  Serial.println("PERIGO!");
  
  delay(2000);
  noTone(buzzer);
}

void setup()
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  // Mostrar 5
  mostrarCaracter(HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH);
  delay(1000);
  
  // Mostrar 4
  mostrarCaracter(LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH);
  delay(1000);
  
  // Mostrar 3
  mostrarCaracter(HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH);
  delay(1000);
  
  // Mostrar 2
  mostrarCaracter(HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH);
  delay(1000);
  
  // Mostrar 1
  mostrarCaracter(LOW, HIGH, HIGH, LOW, LOW, LOW, LOW);
  delay(1000);
  
   // Mostrar 0
  mostrarCaracter(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW);
  delay(1000);

  bomb(buzzer, 1000);
}
