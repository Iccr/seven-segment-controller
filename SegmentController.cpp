#include "SegmentController.h"
#include "Arduino.h"
SegmentController::SegmentController(int inputA, int inputB, int inputC, int inputD) {
    a = inputA;
    b = inputB;
    c = inputC;
    d = inputD;
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
}

void SegmentController::show(int number) {
    switch(number) {
        case 0: zero(); break;
        case 1: one(); break;
        case 2: two(); break;
        case 3: three(); break;
        case 4: four(); break;
        case 5: five(); break;
        case 6: six(); break;
        case 7: seven(); break;
        case 8: eight(); break; 
        case 9: nine(); break; 
      }
  }

