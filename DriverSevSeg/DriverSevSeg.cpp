#include "Arduino.h"
#include "DriverSevSeg.h"

DriverSevSeg::DriverSevSeg(int ledA, int ledB, int ledC, int ledD){
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  
  _ledA = ledA;
  _ledB = ledB;
  _ledC = ledC;
  _ledD = ledD;
  
}

void DriverSevSeg::Display (int tal) {
  switch(tal) {
    case 0: digitalWrite(_ledA, LOW); digitalWrite(_ledB, LOW); digitalWrite(_ledC, LOW); digitalWrite(_ledD, LOW);
            break;
            
    case 1: digitalWrite(_ledA, HIGH); digitalWrite(_ledB, LOW); digitalWrite(_ledC, LOW); digitalWrite(_ledD, LOW);
            break;
 
    case 2: digitalWrite(_ledA, LOW); digitalWrite(_ledB, HIGH); digitalWrite(_ledC, LOW); digitalWrite(_ledD, LOW);
            break;
            
    case 3: digitalWrite(_ledA, HIGH); digitalWrite(_ledB, HIGH); digitalWrite(_ledC, LOW); digitalWrite(_ledD, LOW);
            break;
            
    case 4: digitalWrite(_ledA, LOW); digitalWrite(_ledB, LOW); digitalWrite(_ledC, HIGH); digitalWrite(_ledD, LOW);
            break;
            
    case 5: digitalWrite(_ledA, HIGH); digitalWrite(_ledB, LOW); digitalWrite(_ledC, HIGH); digitalWrite(_ledD, LOW);
            break;
            
    case 6: digitalWrite(_ledA, LOW); digitalWrite(_ledB, HIGH); digitalWrite(_ledC, HIGH); digitalWrite(_ledD, LOW);
            break;

    case 7: digitalWrite(_ledA, HIGH); digitalWrite(_ledB, HIGH); digitalWrite(_ledC, HIGH); digitalWrite(_ledD, LOW);
            break;
            
    case 8: digitalWrite(_ledA, LOW); digitalWrite(_ledB, LOW); digitalWrite(_ledC, LOW); digitalWrite(_ledD, HIGH);
            break;

    case 9: digitalWrite(_ledA, HIGH); digitalWrite(_ledB, LOW); digitalWrite(_ledC, LOW); digitalWrite(_ledD, HIGH);
            break;
          }
}
