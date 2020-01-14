
void setup(){
  Serial.begin(9600); //Otetaan sarjaportti käyttöön
}


void loop(){
  if(Serial.available()){
    int i=0;
    switch(Serial.read()){
      case '2':i=2;break;
      case '3':i=3;break;
      case '4':i=4;break;
      case '5':i=5;break;
      case '6':i=6;break;
      case '7':i=7;break;
      case '8':i=8;break;
      case '9':i=9;break;
    }
    pinMode(i, OUTPUT);
    Serial.println(i);
    for(int j=0;j<30;j++){
      digitalWrite(i, HIGH);
      delay(10);  
      digitalWrite(i, LOW);
      delay(10);  
    }
  }
}
