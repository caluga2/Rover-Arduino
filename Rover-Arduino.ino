#include<SoftwareSerial.h>
SoftwareSerial BT(4,2);

//ubicación de los pines
#define ENA 6 //velocidad motor A
#define IN1 9
#define IN2 10

#define ENB 5 //velocidad motor A
#define IN3 11
#define IN4 12

void setup() {

 Serial.begin(9600);
 BT.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  //digitalWrite(IN1, LOW);
  //digitalWrite(IN2, LOW);
  //digitalWrite(IN3, LOW);
  //digitalWrite(IN4, LOW);

  //analogWrite(EN1,63);
  //analogWrite(EN2,63);

}

void loop() {
  if (BT.available()){
    char dato=BT.read();
    Serial.println(dato);
    switch(dato){
      case 'a':
        Adelante();
        break;
      case 'r':
        Atras();
        break;
      case 'd':
        Derecha();
        break;
      case 'i':
        Izquierda();
        break;
      case 'p':
        Parar();
        break;
    }    
  }
}
void Atras (){
 //Dirección motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite (ENA, 255); //Velocidad motor A
 //Dirección motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 255); //Velocidad motor B
}
void Izquierda (){
 //Dirección motor A
 //digitalWrite (IN1, HIGH);
 //digitalWrite (IN2, LOW);
 analogWrite (ENA, 170); //Velocidad motor A
 //Dirección motor B
 //digitalWrite (IN3, HIGH);
 //digitalWrite (IN4, LOW);
 analogWrite (ENB, 255); //Velocidad motor A
}
void Derecha (){
 //Dirección motor A
 //digitalWrite (IN1, LOW);
 //digitalWrite (IN2, HIGH);
 analogWrite (ENA, 255); //Velocidad motor A
 //Dirección motor B
 //digitalWrite (IN3, LOW);
 //digitalWrite (IN4, HIGH);
 analogWrite (ENB, 170); //Velocidad motor A
}
void Adelante (){
 //Dirección motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 255); //Velocidad motor A
 //Dirección motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 255); //Velocidad motor B
}
void Parar (){
 //Dirección motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 0); //Velocidad motor A
 //Dirección motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 0); //Velocidad motor A
}
