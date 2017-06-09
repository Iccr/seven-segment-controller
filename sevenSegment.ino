
#include "SegmentController.h"
/* a => 2 
   b => 3
   c => 4
   d => 5
*/

const int size = 4;
// abcd are inputs for 74ls47 and are us as input in binary coded format
const int a = 2, b= 3, c= 4, d =5;


SegmentController segmentController(a,b,c,d);

void setup() {

  }

  void loop() {
    int number = 0;
     while(1) {
        segmentController.show(number);
        delay(1000);
        number++;
        if(number < 9) {
            number = 0;
          }
      }
  }

