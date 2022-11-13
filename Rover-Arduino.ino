//ubicación de los pines
#define EN1 6 //velocidad motor A
#define IN1 9
#define IN2 10

#define EN2 5 //velocidad motor A
#define IN3 11
#define IN4 12

void setup() {
  // codigo base
  pinMode(EN2, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  digitalWrite(IN1, HIGH); //adelante por 1.5s
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN1, 255);
  analogWrite(EN2, 255);
  delay(1500);

  digitalWrite(IN1, LOW); //parar por 0.5s
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(EN1, 0);
  analogWrite(EN2, 0);
  delay(500);

  digitalWrite(IN1, HIGH); //girar por 1s
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN1, 255);
  analogWrite(EN2, 255);
  delay(1000);

  digitalWrite(IN1, LOW); //girar para el otro lado por 1s
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN1, 255);
  analogWrite(EN2, 255);
  delay(1000);

  digitalWrite(IN1, LOW); //parar por 0.5s
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(EN1, 0);
  analogWrite(EN2, 0);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
