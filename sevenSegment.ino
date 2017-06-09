
/* a => 2 
   b => 3
   c => 4
   d => 5
*/
const int size = 4;
// abcd are inputs for 74ls47 and are us as input in binary coded format
const int a = 2, b= 3, c= 4, d =5;



void setup() {
    pinMode(a,OUTPUT);i
    pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
    pinMode(d,OUTPUT);
  }

  void loop() {
    int number = 0;
     while(1) {
        show(number);
        delay(1000);
        number++;
        if(number < 9) {
            number = 0;
          }
      }
  }


void show(int number) {
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
