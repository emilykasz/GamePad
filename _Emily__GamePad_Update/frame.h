//adding the Metro library 
#include <Metro.h>

int counter;


//setting up the timer 
Metro roomChange = Metro(1000);

void checkFrame() {
   counter = counter + 1;
  if (roomChange.check()){
   Serial.println(counter);
   counter = 0;
  }
}
