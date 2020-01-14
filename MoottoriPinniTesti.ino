
void setup(){
  Serial.begin(9600); //Otetaan sarjaportti käyttöön
}


void loop(){
  if(Serial.available()){
    int i=0;
    switch(Serial.read()){
      case '2':i=2;break; //syötetään sarjaporttiin "2"jne.-
      case '3':i=3;break; //ohjataksemme pinniltä virta päälle ja pois,-
      case '4':i=4;break; //että saadaan tietää mikä pinni ohjaa
      case '5':i=5;break; //moottoria 
      case '6':i=6;break; 
      case '7':i=7;break; 
      case '8':i=8;break; 
      case '9':i=9;break; 
    }
    pinMode(i, OUTPUT);
    Serial.println(i);
    for(int j=0;j<30;j++){  //annetaan 30 pulssia jotka näkyvät oskilloskoopista
      digitalWrite(i, HIGH);//(käytetään pinniä päällä,-
      delay(10);           // että saadaan tietää mikä pinni ohjaa-
      digitalWrite(i, LOW);// moottoria )
      delay(10);  
    }
  }
}
