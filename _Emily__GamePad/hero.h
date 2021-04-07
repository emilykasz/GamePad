#include "Leo_MASK.h"
#include "Leo_PIX.h"


float heroX;
float heroY;
float heroH; 
float heroW;
float heroSpeed;
boolean isDrawn;
float heroDir;
int heroFrame;

Metro heroFrameTimer = Metro(250);

void initHero() {
  heroX = screenW / 2 ;
  heroY = screenH / 2;
  heroW = 32; 
  heroH = 32; 
  heroSpeed = 3;
  isDrawn = false;
  heroFrame = 0;
}

void drawHero() {

  float nextX; 
  float nextY;

  //updates the hero position based on joystick
  nextX = heroX + (joystickBufferX * heroSpeed);
  nextY = heroY + (joystickBufferY * heroSpeed);


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
//  if (nextX + 32 > 318 ) {
//    heroX = 318 - 32;
//    nextX = heroX;
//  }
//  if (nextX < 2) {
//    heroX = 2;
//    nextX = heroX;
//  }
//  if (nextY + 32 > 238) {
//    heroY = 238 - 32;
//    nextY = heroY;
//  }
//  if (nextY  < 2) {
//    heroY = 2 ;
//    nextY = heroY; 
//  }

  //drawLevel(0);

//  if (isDrawn == false) {
//    tft.updateScreen();
//    isDrawn = true;
//  }

  checkMove(currentMode, nextX, nextY, heroW, heroH);

  if (checkMove() == true) {
    heroX=nextX; 
    heroY=nextY
  }

  //clips the area and draws the character
  tft.setClipRect(heroX - 2, heroY - 2 , 35, 35);
  tft.drawRGBBitmap(heroX, heroY, Leo_PIX[heroFrame], Leo_MASK[heroFrame], 32, 32);
  //tft.updateScreen();


//  Serial.print(heroX);
//  Serial.print("   ");
//  Serial.println(heroY);
}
