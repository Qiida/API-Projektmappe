// Distanzmessung mit Ausgabe im LCD-Display

#include <LiquidCrystal.h> // Eibinden der LiquidCrystal Bibliothek
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Parameter der LCD

const int Trig = 9;
const int Echo = 10;
long dauer;
int abstandCm;
void setup() 
{
  lcd.begin(16,2);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
}

void loop()
{
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  
  dauer = pulseIn(Echo, HIGH);
  abstandCm= dauer*0.034/2; // Umrechnen in Längeneinheit cm

  lcd.setCursor(0,0); // Setzt den Cursor auf den Punkt (0,0)
  lcd.print("Abstand: "); // Schreibt "Abstand" auf das LCD-Display
  lcd.print(abstandCm); // Schreibt die gemessene Distanz auf das LCD-Display
  lcd.print(" cm"); // Schreibt die Längeneinheit cm auf das LCD-Display
  delay(350);
  lcd.clear();
}
 
