/*  Hochschule Kempten - Fakultät Elektrotechnik
 *  Informatik 2 - Demo 1
 *  (c) 2019-03-15, Norbert Grotz
*/
#include <Stepper.h>


int SPU=5;
Stepper Motor(SPU, 3, 4, 5, 6);


double Sensorwert=0;



double W1=0;
double W2=0;
double W3=0;
double W4=0;
double W5=0;

class cUAblesen {
 public:
  int D1;
  int D2; 
  int D3;
  cUAblesen() {
    int D1=LOW;
    int D2=LOW;
    int D3=LOW;
    pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
    
   }
  int Ermitteln(int D1, int D2, int D3) {
    Sensorwert=analogRead(A0);
    return Sensorwert;
  }
};

W1=cErmitteln(0, 0, 0);
W2=cErmitteln(0, 0, 1);
W3=cErmitteln(0, 1, 0);
W4=cErmitteln(1, 0, 0);
W5=cErmitteln(1, 0, 1);



void setup() {
 Motor.setSpeed(5);
}

void loop() { 
  
}
