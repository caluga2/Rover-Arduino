//ubicación de los pines
int enA = 9; //velocidad motor A
int in1 = 2;
int in2 = 3;

int enB = 10; //velocidad motor A
int in3 = 4;
int in4 = 5;

void setup() {
  // codigo base
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  digitalWrite(in1, HIGH); //adelante por 1.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  delay(1500);

  digitalWrite(in1, LOW); //parar por 0.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  delay(500);

  digitalWrite(in1, HIGH); //girar por 1s
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  delay(1000);

  digitalWrite(in1, LOW); //girar para el otro lado por 1s
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  delay(1000);

  digitalWrite(in1, LOW); //parar por 0.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
