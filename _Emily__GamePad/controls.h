#include <Bounce2.h>

//variable that represents the debouce time (10ms)
int buttonBounce = 10;

//array of 4 buttons that keeps track of the debounce state
Bounce * buttons = new Bounce[4];

//array that holds the button pins
int buttonPins[4] = {0, 1, 2, 3};

//array that holds the place for the current state of each button
int buttonBuffer[4] = {0, 0, 0, 0};

//array that holds the joystick pins
int joystickPins[2] = {A1, A0};

//array that holds the place for the current state of the joystick
int joystickBuffer[2] = {0, 0};

int joystickBufferX; 
int joystickBufferY; 

Metro printTimer = Metro(25);

//function that initializes the buttons
void initControls() {
  for (int i = 0; i < 4; i++) {
    buttons[i].attach(buttonPins[i], INPUT_PULLUP);
    buttons[i].interval(buttonBounce);
  }
}

void getControls() {
    for (int i = 0; i < 4; i++) {
      buttons[i].update();
      if (buttons[i].rose()) {
        buttonBuffer[i] = 0;
      }
      if (buttons[i].fell()) {
        buttonBuffer[i] = 1;
      }
  
//      Serial.print(buttonBuffer[i]);
//      Serial.print("\t");
  
    }
    //Serial.println();

  joystickBufferX = analogRead(joystickPins[0]);
  joystickBufferY = analogRead(joystickPins[1]);

  if (joystickBufferX < 400) {
    joystickBufferX = -1;
  }
  else if (joystickBufferX > 600) {
    joystickBufferX = 1;
  }
  else if (joystickBufferX > 400 && joystickBufferX < 600) {
    joystickBufferX = 0;
  }

  if (joystickBufferY < 400) {
    joystickBufferY = 1;
  }
  else if (joystickBufferY > 600) {
    joystickBufferY = -1;
  }
  else if (joystickBufferY > 400 && joystickBufferY < 600) {
    joystickBufferY = 0;
  }


//  if (printTimer.check()) {
//    Serial.print(joystickBufferX);
//    Serial.print(joystickBufferY);
//    Serial.print("\t");
  //}
}
