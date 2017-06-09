# seven-segment-controller
This is a library for controller common anode seven segment controller using 74ls47 BCD  decoder

Directly support common anode displays.
uses Binary coded Decimal to seven-Segment chip 74ls47

# Example: 
include the library:

`#include "SegmentController.h"`

Just create an object for segmennt controller passing the input pins for BCD 74ls74 decoder

```const int a = 2, b= 3, c= 4, d =5;
SegmentController segmentController(a,b,c,d);

void setup() {

  }

  void loop() {
    int number = 0;
     while(1) {
        segmentController.show(number); // displays the corresponding number in segment display
        delay(1000);
        number++;
        if(number < 9) {
            number = 0;
          }
      }
  }
  ```

# future upgrades possibilities:

support for characters.
support for common cathod segment displays.

# want to contribute. 
fork it
improvise it
send a pull request. 

# happy coding.
