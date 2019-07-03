# Sms-Thermal-Printer
Sms Printer: Arduino, SIM900 Modul, Adafruit mini Thermal Printer

Thermal Printer prints out sms and phone number of incoming messages.



Beschreibung: 
Es handelt sich um einen mini Thermal Printer welcher über ein SIM900 Modul Sms empfängt und dieser dann mit der zugehörigen Nummer ausdruckt. 



Materialien: 

Adafruit Thermal Printer (25.06.19)
https://www.adafruit.com/product/597

Thermal Paper Roll (25.06.19) 
https://www.adafruit.com/product/599


SIM900 Modul (25.06.19) 
https://www.amazon.de/AZDelivery-SIM-900-Shield-Arduino/dp/B01M9J4N56/ref=sr_1_4?adgrpid=73875099834&gclid=EAIaIQobChMI5-DerbmF4wIVTeh3Ch0sEg3REAAYASAAEgJbX_D_BwE&hvadid=352721991068&hvdev=c&hvlocphy=9044483&hvnetw=g&hvpos=1t1&hvqmt=b&hvrand=10313125312229054723&hvtargid=kwd-32630183687&hydadcr=27929_1728709&keywords=sim900+arduino&qid=1561493709&s=gateway&sr=8-4

Arduino Uno Rev 3 (25.06.19)
https://store.arduino.cc/arduino-uno-rev3



Probleme die aufgekommen sind:
Das SIM900 Modul muss über die HardwareSerial angeschlossen werden, da sonst Teile der Sms abgeschnitten werden.

Das SIM900 Modul darf auf keinen Fall mit mehr als 5v betrieben werden.

Durch SIM900.flush werden nur 2 Byte der Nachricht gedruckt, die restlichen Bytes gehen verloren.

Das SIM900 Modul

Der Thermal Printer benötigt eine relativ hohe Spannung und benötigt dadurch ein externes Netzteil.

IoT SIM Karten Anbieter verlangen meist eine hohe Sms Gebühr. Das Testing wird dadurch sehr teuer. 


Librarys: 

Adafruit Thermal Printer Library (25.06.19)
https://github.com/adafruit/Adafruit-Thermal-Printer-Library

SoftwareSerial.h Library (25.06.19)
https://github.com/arduino/ArduinoCore-avr/tree/master/libraries/SoftwareSerial


