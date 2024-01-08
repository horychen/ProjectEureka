#include <Arduino.h>
bool receive_TAG = 0;
bool request_TAG = 0;
char data_receive[10] ;
int Index = 0;
void setup() {
  // put your setup code here, to run once:
  Serial1.setTX(16);
  Serial1.setRX(17);
  Serial1.begin(2500000);
  pinMode(5, OUTPUT); 
  digitalWrite(5, LOW);
  Serial.begin(9600);
  Serial.println("HELLO");
}


void loop() {
  if(Serial.available()){
    request_TAG = 1;
    Serial.read();
  }
  if(request_TAG){
    digitalWrite(5, HIGH);
    Serial.println("request once");
    delayMicroseconds(2);
    Serial1.write(0x02);
    Serial1.flush();
    digitalWrite(5, LOW);
    request_TAG = 0;
  }
  while(Serial1.available()){
    data_receive[Index] = Serial1.read();
    Index++;
    receive_TAG = 1;
  }
  Index = 0;
  if(receive_TAG){
    receive_TAG = 0;
    long pos = long(data_receive[4] << 12) + long(data_receive[3] << 4) + long(data_receive[2] >> 4 );
    double angle = pos * 360 / 524288.0;
    Serial.println("get angle:");
    Serial.println(pos);
    Serial.println(angle, 6);
  }
  
  // put your main code here, to run repeatedly:
  
}
