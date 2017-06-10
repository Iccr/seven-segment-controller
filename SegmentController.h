#ifndef SEGMENTCONTROLLER_H
#define SEGMENTCONTROLLER_H

#include "Arduino.h"
class SegmentController {

  public:
  SegmentController(int inputA, int inputB, int inputC, int inputD);
  void show(int number);
  
private:
  // input pins
  int a, b, c, d;
  void zero();
  void one();
  void two();
  void three();
  void four();  
  void five();
  void six();
  void seven();
  void eight();
  void nine();
};

#endif

