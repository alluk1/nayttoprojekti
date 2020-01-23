#include "motor.h"

motor M1(9, 5, 4);
motor M2(10, 6, 7);

void setup() {
  // put your setup code here, to run once:

}

void FW(){
  M1.FW();M2.FW();
  M1.Start();M2.Start();
}
void Stop(){
  M1.Stop();M2.Stop();
}
void BW(){
  M1.BW();M2.BW();
  M1.Start();M2.Start();
}
void Right(){
  M1.FW();M2.BW();
  M1.Start();M2.Start();
}
void SpinL{
  M1.BW();M2.FW();
  M1.Start();M2.Start();
}
void SpinR{
  M1.FW();M2.BW();
  M1.Start();M2.Start();
}

void loop() {
  // put your main code here, to run repeatedly:
  FW();
  delay(2000);
  Stop();
  delay(1000);
  BW();
  delay(2000);
  Stop();
  delay(1000);
  Right();
  delay(1000);
}
