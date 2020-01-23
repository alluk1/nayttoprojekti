#include <Arduino.h>
#include "motor.h"


motor::motor(int pSP, int pEN, int pDIR){   //Konstruktori, vastaa void setuppia
  _pSP = pSP;
  _pEN = pEN;
  _pDIR = pDIR;
  _MaxSpeed = 255;
  pinMode(_pSP, OUTPUT);
  pinMode(_pEN, OUTPUT);
  pinMode(_pDIR, OUTPUT);
}

motor::motor(int pSP, int pEN, int pDIR, char MaxSpeed){
  _pSP = pSP;
  _pEN = pEN;
  _pDIR = pDIR;
  _MaxSpeed = MaxSpeed;
  pinMode(_pSP, OUTPUT);
  pinMode(_pEN, OUTPUT);
  pinMode(_pDIR, OUTPUT);
}

void motor::FW(){
  digitalWrite(_pDIR, HIGH);
}
void motor::BW(){
  digitalWrite(_pDIR, LOW);
}
void motor::Start(){
  digitalWrite(_pEN, HIGH);
}
void motor::Stop(){
  digitalWrite(_pEN, LOW);
}
void motor::setMotorSpeed(char s){
  analogWrite(_pSP, s);  
}
