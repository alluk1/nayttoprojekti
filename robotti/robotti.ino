#include "motor.h"//kirjaston käyttöönotto

#define trig 11 //asetetaan vakiot
#define echo 12

motor M1(9, 5, 4);// ykkös moottoria ohjaavat pinnit
motor M2(10, 6, 7, 230 );// 2. moottorin pinnit nopeuden asetus(230)

void setup() {
  pinMode(echo, INPUT); //Etäisyysmittari sisääntulo
  pinMode(trig, OUTPUT);//Etäisyysmittarin ulostulo
}

void FW(){              //moottoreiden funktiot, Eteen, Taakse, jne.
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
void SpinL(){
  M1.BW();M2.FW();
  M1.Start();M2.Start();
}
void SpinR(){
  M1.FW();M2.BW();
  M1.Start();M2.Start();                                                
}                                                                       
void CRAWL(){              //moottoreiden funktiot, Eteen, Taakse, jne. 
  M1.setMotorSpeed(80);M2.setMotorSpeed(80); //asetetaan ryömintänopeus                        
}

long dists[5]={0}; //luodaan taulukko
int index=0;
void loop() {
  unsigned long duration=0, distance;
  digitalWrite(trig,HIGH); 
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  dists[index++]=pulseIn(echo, HIGH); //toistuva funktio joka kerää,-
  if(index==5){                       //etäisyyksiä taulukkoon
    index=0; //kun 5 solua on täynnä, lasekminen alkaa alusta
  }
  for(int i=0;i<5;i++){             
    duration += dists[i]; 
  }                                  
  distance =((duration/5)*0.034/2); //jaetaan solujen tulos viidellä,-
  //jotta saadaan keskiarvo (suodattaaksemme häiriöt)
  if (distance > 40){ // jos matka on yli 40cm, auto menee eteenpäin
    FW();                   // 
  }else if (distance < 5){  // jos matka on alle 5cm, auto pysähtyy ja vaihtaa-
    Stop();                 // suuntaa
    delay(1000);
    SpinL();
    delay(415);
  }else {              //jos matka on yli 5cm, mutta alle 40cm, auto kulkee-
   CRAWL();            //hitaasti eteenpäin

  }
}
