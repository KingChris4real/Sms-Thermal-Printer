#include <SoftwareSerial.h>
#include "Adafruit_Thermal.h"
SoftwareSerial printer(7, 8);
//SIM900(&Serial);
#define SIM900 Serial
//Variable to save incoming SMS characters
//char incoming_char=0;
//char incoming_char[20];
void setup() {
  Serial.begin(19200);
  //SIM900.begin(19200);
 printer.begin(19200);
  //login Network time
  //delay(1000);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(5000);
  //printer.print("Hallo");

  // AT command to set SIM900 to SMS mode
  SIM900.print("AT+CMGF=1\r");
  delay(100);
  // Set module to send SMS data to serial out upon receipt
  SIM900.print("AT+CNMI=2,2,0,0,0\r");
  delay(100);
}

void loop() {
  char c;
  if (SIM900.available() ) {
    //incoming_char[20]=SIM900.read();
    c = SIM900.read();
    //delay(10);
    //Serial.print();
    //printer.justify('C');
    //was macht BIN?
    //printer.print(c,BIN);
      printer.print(c);
       //delay(10);
    //print();
    //SIM900.flush();
  }
  //delay(20);
}
