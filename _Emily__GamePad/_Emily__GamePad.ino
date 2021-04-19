//Leo's Day at the Vet 
//Emily Kaszubowski || 29 March 2021
//CRT 360 Advanced Prototyping || GamePad

int currentMode;

#include "frame.h"
#include "screen.h"
#include "tile.h"
#include "controls.h" 
#include "interaction.h" 
#include "hero.h"
#include "enemy.h"
#include "fight.h"
#include "modes.h"




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  initScreen();
  initControls();
  initHero();
  initMode();
  initNeighbors();
  randomSeed(analogRead(A9));
}

void loop() {
  // put your main code here, to run repeatedly:
  getControls();
  runMode();
  //checkFrame();
  tft.updateScreen();
  

//  Serial.print (heroX); 
//  Serial.print ("   ");
//  Serial.println (heroY);
}
