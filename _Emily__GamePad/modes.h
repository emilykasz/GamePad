#include "Intro_MASK.h"
#include "Intro_PIX.h"


boolean initIntro;
boolean initFirstLevel;
boolean initSecondLevel;
boolean initThirdLevel;
boolean initFourthLevel;
boolean initFifthLevel;
boolean initSixthLevel;

int heart1; 
int heart2; 
int heart3;

void initMode() {
  currentMode = -1;
  initIntro = false;
  initFirstLevel = false;
  initSecondLevel = false;
  initThirdLevel = false;
  initFourthLevel = false;
  initFifthLevel = false;
  initSixthLevel = false;

}


#include "StatusBar_MASK.h"
#include "StatusBar_PIX.h"

void drawHearts(int x, int y){
 tft.drawRGBBitmap(x, y, StatusBar_PIX[0], 20, 20);
}

void introScreen() {
  if (initIntro == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, Intro_PIX[0], screenW, screenH);
    tft.updateScreen();
    initIntro = true;
  }
  if (initIntro == true &&  buttonBuffer[0] == 1) {
    currentMode = 0;
  }
}

void firstLevel() {
  if (initFirstLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(0);
    drawHearts(5,210);
    drawHearts(30,210);
    drawHearts(55,210); 
    tft.updateScreen();
    initFirstLevel = true;
  }
  
 if(interaction[currentMode][curTile] == 0x01){
  currentMode = currentMode + 1;
  initFirstLevel = false; 
  heroX = 145;
  heroY = 195;
}

  drawLevel(0);
  drawHero();
  
}

void secondLevel() {
  if (initSecondLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(1);
    drawHearts(5,210);
    drawHearts(30,210);
    drawHearts(55,210); 
    tft.updateScreen();
    initSecondLevel = true;
    enemyX = 20;
    enemyY = 40; 
  }
  if(interaction[currentMode][curTile] == 0x03){
  currentMode = currentMode + 1;
  initSecondLevel = false; 
  heroX = 200;
  heroY = 190;
}

if(interaction[currentMode][curTile] == 0x02){
  currentMode = currentMode - 1;
  initSecondLevel = false; 
  heroX = 160;
  heroY = 120;
}
  drawLevel(1);
  caught();
  drawEnemy();
  drawHero();
  

}

void thirdLevel() {
  if (initThirdLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(2);
    drawHearts(5,210);
    drawHearts(30,210);
    drawHearts(55,210); 
    tft.updateScreen();
    initThirdLevel = true;
    enemyX = 150;
    enemyY = 100;
  }
 
 
 if(interaction[currentMode][curTile] == 0x06){
  currentMode = currentMode + 1;
  initThirdLevel = false; 
  heroX = 255;
  heroY = 55;
}

 if(interaction[currentMode][curTile] == 0x08){
  currentMode = 4;
  initThirdLevel = false; 
  heroX = 20;
  heroY = 50;
}

if(interaction[currentMode][curTile] == 0x07){
  currentMode = 5;
  initThirdLevel = false; 
  heroX = 125;
  heroY = 190;
}



if(interaction[currentMode][curTile] == 0x04){
  currentMode = currentMode - 1;
  initThirdLevel = false; 
  heroX = 198;
  heroY = 20;
}

  drawLevel(2);
  caught();
  drawEnemy();
  drawHero();
}

void fourthLevel() {
  if (initFourthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(3);
    drawHearts(5,210);
    drawHearts(30,210);
    drawHearts(55,210); 
    tft.updateScreen();
    initFourthLevel = true;
  }

 if(interaction[currentMode][curTile] == 0x06){
  currentMode = currentMode - 1;
  initFourthLevel = false; 
  heroX = 20;
  heroY = 50;
}


  drawLevel(3);
  drawHero();
  
  
}

void fifthLevel() {
  if (initFifthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(4);
    drawHearts(5,210);
    drawHearts(30,210);
    drawHearts(55,210);  
    tft.updateScreen();
    initFifthLevel = true;
  }

 if(interaction[currentMode][curTile] == 0x11){
  currentMode = 2;
  initFifthLevel = false; 
  heroX = 270;
  heroY = 50;
}

  drawLevel(4);
  drawHero();
  


}

void sixthLevel() {
  if (initSixthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(5);
    drawHearts(5,210);
    drawHearts(30,210);
    drawHearts(55,210); 
    tft.updateScreen();
    initSixthLevel = true;
  }

  if(interaction[currentMode][curTile] == 0x14){
  currentMode = 2;
  initSixthLevel = false; 
  heroX = 121;
  heroY = 25;
  }
  
  drawLevel(5);
  drawHero();
  
}

void runMode() {
  switch (currentMode) {
    case -1:
      introScreen();
      break;

    case 0:
      firstLevel();
      break;

    case 1:
      secondLevel();
      break;

    case 2:
      thirdLevel();
      break;

    case 3:
      fourthLevel();
      break;

    case 4:
      fifthLevel();
      break;

    case 5:
      sixthLevel();
      break;
  }
}
//
//if  (drawHearts(20,210)) {
//  heart1 = 1; 
//}
//
//if (heart1 = 0) {
//  draw
//}
