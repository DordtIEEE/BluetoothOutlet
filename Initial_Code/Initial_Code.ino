#include <SoftwareSerial.h>
SoftwareSerial theSerial(10,11);
int ledpin = 13;
int BluetoothData;

void setup() {
  // put your setup code here, to run once:
  theSerial.begin(9600);
  theSerial.println("Bluetooth On");
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(theSerial.available()){
    BluetoothData=theSerial.read();
    if(BluetoothData==1){
      digitalWrite(ledpin, 1);
    }
    if(BluetoothData=0){
      digitalWrite(ledpin, 0);
    }
  }
  delay(100);
}
