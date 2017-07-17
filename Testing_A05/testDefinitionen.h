#ifndef TESTDEFINITIONEN_H
#define TESTDEFINITIONEN_H

#ifdef TEST

#include "test.h"
#include "LED.h"

void test10() 
{   
  abstandCm = 10;
  bool testResult = false;
  LED();
  
  if(ledState == 0) 
  {
    testResult = true;
  }
  
  APITest::printTestResult(testResult, "Abstand 10cm", "Qi Da Ye",
  "Bleibt die gruene LED aus?", "Testing_A05.ino");
}

void test15() 
{   
  abstandCm = 15;
  bool testResult = false;
  LED();
  
  if(ledState == 1) 
  {
    testResult = true;
  }
  
  APITest::printTestResult(testResult, "Abstand 15cm", "Qi Da Ye",
  "Geht die gruene LED an?", "Testing_A05.ino");
}

void test16() 
{   
  abstandCm = 16;
  bool testResult = false;
  LED();
  
  if(ledState == 0) 
  {
    testResult = true;
  }
  
  APITest::printTestResult(testResult, "Abstand 16cm", "Qi Da Ye",
  "Bleibt die gruene LED aus?", "Testing_A05.ino");
}

void runTests(){
  APITest::printTestStartHeader(); // Nicht modifizieren
  
  test10();
  test15();
  test16();
  
  APITest::printTestEndFooter(); // Nicht modifizieren
}
#endif //TEST

#ifdef TEST  // Nicht modifizieren
  #define RUNTEST runTests();
#else
  #define RUNTEST
#endif


#endif //TESTDEFINITIONEN_H
