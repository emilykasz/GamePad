#include "Leo_MASK.h"
#include "Leo_PIX.h"


float heroX;
float heroY;
float heroSpeed;
boolean isDrawn;
float heroDir;
int heroFrame;

Metro heroFrameTimer = Metro(250);

void initHero() {
  heroX = screenW / 2 ;
  heroY = screenH / 2;
  heroSpeed = 0.5;
  isDrawn = false;
  heroFrame = 0;
}

void drawHero() {
  //updates the hero position based on joystick
  heroX = heroX + (joystickBufferX * heroSpeed);
  heroY = heroY + (joystickBufferY * heroSpeed);

  //updates hero direction to the right
  if (joystickBufferX > 0) {
    heroDir = 0;
  }
  
  //updates hero direction to the left
  if (joystickBufferX < 0) {
  heroDir = 1;
  }
 
 if (joystickBufferX == 0 && heroDir == 0) {
  heroFrame = 0;
 }
 
  if (joystickBufferX == 0 && heroDir == 1) {
  heroFrame = 4;
 }

 if (joystickBufferX == 1 && heroDir == 0) {
   if (heroFrameTimer.check()) {
    heroFrame = (heroFrame + 1) % 3;
    heroFrame = heroFrame + 1;
    }
 }

  if (joystickBufferX == -1 && heroDir == 1) {
   if (heroFrameTimer.check()) {
    heroFrame = (heroFrame + 1) % 8;
    if (heroFrame < 5) {
      heroFrame = 5;
    }
   }
 }

   
//  //Leo wags his tail 
  if (buttonBuffer[0] == 1) {
      heroFrame = 9;
  }
  

  //makes sure the player does not run off the screen
  if (heroX + 32 > 318 ) {
    heroX = 318 - 32;
  }
  if (heroX < 2) {
    heroX = 2;
  }
  if (heroY + 32 > 238) {
    heroY = 238 - 32;
  }
  if (heroY  < 2) {
    heroY = 2 ;
  }

  drawLevel(0);

  if (isDrawn == false) {
    tft.updateScreen();
    isDrawn = true;
  }

  //clips the area and draws the character
  tft.setClipRect(heroX - 2, heroY - 2 , 35, 35);
  tft.drawRGBBitmap(heroX, heroY, Leo_PIX[heroFrame], Leo_MASK[heroFrame], 32, 32);
  tft.updateScreen();

  Serial.print(heroX);
  Serial.print("   ");
  Serial.println(heroY);
}
