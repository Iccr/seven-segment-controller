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
  void zero() {
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
  }

void one() {
    digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
  }

  void two() {
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    }

    void three() {
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      }

     void four() {
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      }

      void five() {
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      }

      void six() {
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      }

      void seven() {
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      }

      void eight() {
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      }

      void nine() {
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      }
  
};

#endif

