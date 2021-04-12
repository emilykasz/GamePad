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
int curTileX;
int curTileY;
int curTile;

Metro heroFrameTimer = Metro(250);

void initHero() {
  heroX = screenW / 2 ;
  heroY = screenH / 2;
  heroW = 32; 
  heroH = 32; 
  heroSpeed = 0.5;
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

   
//  //Leos eyes light up hearts
  if (buttonBuffer[0] == 1) {
      heroFrame = 9;
  }
  

  boolean canMove = checkMove(currentMode, nextX, nextY, heroW, heroH);

  if (canMove == true) {
    heroX=nextX; 
    heroY=nextY;
  }

  //clips the area and draws the character
  tft.setClipRect(heroX - 2, heroY - 2 , 35, 35);
  tft.drawRGBBitmap(heroX, heroY, Leo_PIX[heroFrame], Leo_MASK[heroFrame], 32, 32);
  //tft.updateScreen();

   curTileX = heroX / tileSize;  
   curTileY = heroY / tileSize; 
   curTile = curTileX + (curTileY * tileW);


}
