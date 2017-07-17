// Testing A05a
// Gruene LED wird getestet mit unterschiedlichen Abstaenden

const int LED_gruen = 11;
const int LED_gelb = 12;
const int LED_rot = 13;

int abstandCm = 0;
int ledState = 0;

#define TEST
#include "testDefinitionen.h"


void setup() 
{
  RUNTEST
  
  pinMode(LED_gruen, OUTPUT); // Pin 11 ist ein Ausgang für LED_gruen.
  pinMode(LED_gelb, OUTPUT); // Pin 12 ist ein Ausgang für LED_gelb.
  pinMode(LED_rot, OUTPUT); // Pin 13 ist ein Ausgang für LED_rot.
}


void loop()
{

  if (abstandCm <= 15 && abstandCm > 10) {      // Ab einem Abstand von 15 cm geht die gruene LED an.
    digitalWrite(LED_gruen, HIGH); 
    }
    
  else if (abstandCm <= 10 && abstandCm > 5) {  // Ab einem Abstand von 10 cm geht die gelbe LED an.
    digitalWrite(LED_gelb, HIGH); 
    }
    
  else if (abstandCm <= 5) {                    // Ab einem Abstand von 5 cm geht die rote LED an.
    digitalWrite(LED_rot, HIGH);
    }
 

}


