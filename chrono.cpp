/* Code by Nitsugua38*/

#include <SevSeg.h> // Vous devez ajouter la librairie «SevSeg» à votre Arduino disponible sur mon GitHub

SevSeg sevseg; 

int nombre = 0;

void setup(){
    byte numDigits = 4;
    byte digitPins[] = {40,34,32,42};
    byte segmentPins[] = {38,30,46,50,52,36,44,48};
    bool resistorsOnSegments = true;
    bool updateWithDelaysIn = true;

    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments, updateWithDelaysIn);
    sevseg.setBrightness(90);
}

void loop(){
  sevseg.setNumber(nombre, 2);
  sevseg.refreshDisplay();
  delay(1000);
  nombre += 1;

  if ((40 + nombre) % 100 == 0)
  {
    nombre += 40;
  }
}
