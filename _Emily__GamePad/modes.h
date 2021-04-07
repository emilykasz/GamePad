#include "Intro_MASK.h"
#include "Intro_PIX.h"

int currentMode;
boolean initIntro;
boolean initFirstLevel;
boolean initSecondLevel;
boolean initThirdLevel;
boolean initFourthLevel;
boolean initFifthLevel;
boolean initSixthLevel;

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
    tft.updateScreen();
    initFirstLevel = true;
  }

  drawLevel(0);
  drawHero();

  if (initFirstLevel == true) {
    currentMode = 1;
  }
}

void secondLevel() {
  if (initSecondLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(1);
    tft.updateScreen();
    initSecondLevel = true;
  }
  
  drawLevel(1);
  drawHero();

  if (initSecondLevel == true) {
    currentMode = 2;
  }
}

void thirdLevel() {
  if (initThirdLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(2);
    tft.updateScreen();
    initThirdLevel = true;
  }

  drawLevel(2);
  drawHero();
 

  if (initThirdLevel == true) {
    currentMode = 3;
  }
}

void fourthLevel() {
  if (initFourthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(3);
    tft.updateScreen();
    initFourthLevel = true;
  }

  drawLevel(3);
  drawHero();
  
  if (initFourthLevel == true) {
    currentMode = 4;
  }
}

void fifthLevel() {
  if (initFifthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(4);
    tft.updateScreen();
    initFifthLevel = true;
  }

  drawLevel(4);
  drawHero();
  

  if (initFifthLevel == true) {
    currentMode = 5;
  }
}

void sixthLevel() {
  if (initSixthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(5);
    tft.updateScreen();
    initSixthLevel = true;
  }

  drawLevel(5);
  drawHero();
  

  if (initThirdLevel == true) {
    currentMode = 6;
  }
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
