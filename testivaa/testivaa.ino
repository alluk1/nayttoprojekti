#define Moottori1Suunta 4
#define Moottori1 5
#define Moottori2 6
#define Moottori2Suunta 7

//void setup() {
 pinMode(Moottori1,OUTPUT);
 pinMode(Moottori2,OUTPUT);
 pinMode(Moottori1Suunta,OUTPUT);
 pinMode(Moottori2Suunta,OUTPUT);
}
void stopCar(){
  digitalWrite(Moottori1, LOW);
  digitalWrite(Moottori2, LOW);
}


void forward(){
  digitalWrite(Moottori1Suunta, LOW);
  digitalWrite(Moottori2Suunta, LOW);
  digitalWrite(Moottori1, HIGH);
  digitalWrite(Moottori2, HIGH);
}
void backward(){
  digitalWrite(Moottori1, HIGH);
  digitalWrite(Moottori2, HIGH);
  digitalWrite(Moottori1Suunta, HIGH);
  digitalWrite(Moottori2Suunta, HIGH);
}


void loop() {
  forward();
  delay(10000);
  backward();
  delay(10000);
  stopCar();
  delay(10000);
}
