//Vile Dr. Vet
//Emily Kaszubowski || 29 March 2021
//CRT 360 Advanced Prototyping || GamePad

#include "frame.h"
#include "screen.h"
#include "tile.h"
#include "controls.h"
#include "hero.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  initScreen();
  initControls();
  initHero();
}

void loop() {
  // put your main code here, to run repeatedly:
  //checkFrame();
  //screenTest();
  //drawLevel(0);
  getControls();
  drawHero();
}
