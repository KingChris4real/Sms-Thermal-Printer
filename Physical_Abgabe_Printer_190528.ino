#include <SoftwareSerial.h>
#include "Adafruit_Thermal.h"
SoftwareSerial SIM900(7, 8);
Adafruit_Thermal printer(&Serial);

//Variable to save incoming SMS characters
//char incoming_char=0;
//char incoming_char[20];
void setup() {
  Serial.begin(19200);
  SIM900.begin(19200);
  printer.begin();
  //login Network time
  delay(1000);

  // AT command to set SIM900 to SMS mode
  SIM900.print("AT+CMGF=1\r");
  delay(100);
  // Set module to send SMS data to serial out upon receipt
  SIM900.print("AT+CNMI=2,2,0,0,0\r");
  delay(100);
}
/*void print() {
  printer.justify('C');
  printer.boldOn();
  printer.print(" \n");
  printer.print(" \n");
  printer.print(incoming_char);
  printer.print(" \n");
  printer.print(" \n");
  //printer.print(c);
  delay(20);

  //hier könnten die restlichen bytes verloren gehen
  //SIM900.flush();
}*/
void loop() {
  char c;
  if (SIM900.available() ) {
    //incoming_char[20]=SIM900.read();
    c = SIM900.read();
    //delay(10);
    //Serial.print(incoming_chara);
    //printer.justify('C');
    printer.print(c);

       //delay(10);
    //print();
    //SIM900.flush();
  }
  //delay(20);
}
