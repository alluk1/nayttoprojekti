#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>

class motor
{
  public:
    motor(int pSP, int pEN, int pDIR);//Konstruktori
    motor(int pSP, int pEN, int pDIR, char MaxSpeed);//Konstruktori
    void FW();
    void BW();
    void Start();
    void Stop();
    void setMotorSpeed(char s);
  private:
    int _pSP, _pEN, _pDIR; //Speed, Enable, Direction
    char _MaxSpeed; //Max value for analogWrite function
};

#endif
