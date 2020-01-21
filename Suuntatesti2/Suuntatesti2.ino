#define Moottori1 9
#define Moottori1FORW 4
#define Moottori1BACKW 5
#define Moottori2 10
#define Moottori2FORW 6
#define Moottori2BACKW 3

void setup() {
 pinMode(Moottori1,OUTPUT);
 pinMode(Moottori1FORW,OUTPUT);
 pinMode(Moottori1BACKW,OUTPUT);
 pinMode(Moottori2,OUTPUT);
 pinMode(Moottori2FORW,OUTPUT);
 pinMode(Moottori2BACKW,OUTPUT);
 Serial.begin (9600);
}

void forward(){
  digitalWrite(Moottori1FORW, HIGH);
  digitalWrite(Moottori1, HIGH);
  digitalWrite(Moottori2FORW, HIGH); 
  digitalWrite(Moottori2, HIGH);
  Serial.println ("forward");
}

void backward(){
  digitalWrite(Moottori1BACKW, HIGH);
  digitalWrite(Moottori1, HIGH);  
  digitalWrite(Moottori2BACKW, HIGH);
  digitalWrite(Moottori2, HIGH);
  Serial.println ("backward");

}
void spinL(){
  digitalWrite(Moottori1BACKW, HIGH);
  analogWrite(Moottori1, 50);
  digitalWrite(Moottori2FORW, HIGH);
  analogWrite(Moottori2, 50);
  Serial.println ("SpinL");
}
void spinR(){
  digitalWrite(Moottori1FORW, HIGH);
  analogWrite(Moottori1, 50);
  digitalWrite(Moottori2BACKW, HIGH);
  analogWrite(Moottori2, 50);
  Serial.println ("SpinR");
}

void loop() {
  forward();
  delay(5000);
  backward();
  delay(5000);
  spinL();
  delay(3000);
  spinR();
  delay(3000);
}
