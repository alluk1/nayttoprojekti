#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>

class motor //luokka
{
  public:
    motor(int pSP, int pEN, int pDIR);//Konstruktori
    motor(int pSP, int pEN, int pDIR, char MaxSpeed);//Konstruktori
    void FW(); //eteenpäin
    void BW(); //taaksepäin
    void Start(); 
    void Stop();
    void setMotorSpeed(char s);
  private:
    int _pSP, _pEN, _pDIR; //Nopeus, "käynnistys", Suunta
    char _MaxSpeed; //Maksiminopeus analogWriteä varten
};

#endif
