#ifndef DriverSevSeg_h
#define DriverSevSeg_h

#include "Arduino.h"

class DriverSevSeg {
  public:
    DriverSevSeg(int ledA, int ledB, int ledC, int ledD);
    void Display (int tal);
    int ledA;
    int ledB;
    int ledC;
    int ledD;
    int tal;
  private:
    	int _ledA;
	int _ledB;
	int _ledC;
	int _ledD;
};

#endif
