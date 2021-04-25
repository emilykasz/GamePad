#include "Intro_MASK.h"
#include "Intro_PIX.h"

#include "EndScreen_MASK.h" 
#include "EndScreen_PIX.h"

#include "StatusBar_MASK.h"
#include "StatusBar_PIX.h"

#include "EndWon_PIX.h"
#include "EndWon_MASK.h"

#include "Intro2_MASK.h" 
#include "Intro2_PIX.h"

#include "LossBluberries_MASK.h" 
#include "LossBluberries_PIX.h" 

#include "LossPumpkin_MASK.h"
#include "LossPumpkin_PIX.h"


boolean initIntro;
boolean initIntro2; 
boolean initFirstLevel;
boolean initSecondLevel;
boolean initThirdLevel;
boolean initFourthLevel;
boolean initFifthLevel;
boolean initSixthLevel;
boolean initEndLost;
boolean initEndWon;
int treatPickUp;
boolean initEndScreenBluberries; 
boolean initEndScreenPumpkin;

int heart1;
int heart2;
int heart3;

void initMode() {
  currentMode = -2;
  initIntro = false;
  initIntro2 = false;
  initFirstLevel = false;
  initSecondLevel = false;
  initThirdLevel = false;
  initFourthLevel = false;
  initFifthLevel = false;
  initSixthLevel = false;
  initEndLost = false;
  initEndWon = false;
  treatPickUp = 0;
  initEndScreenBluberries = false; 
  initEndScreenPumpkin = false;
}


void drawHearts(int x, int y) {
  tft.drawRGBBitmap(x, y, StatusBar_PIX[0], 20, 20);
}

void dead(){
 if (isCaught3 == true) {
      currentMode = 6;
    }
}


void introScreen() {
  if (initIntro == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, Intro_PIX[0], screenW, screenH);
    tft.updateScreen();
    initIntro = true;
  }
  if (initIntro == true &&  buttonBuffer[0] == 1) {
    currentMode = -1;
    initIntro = false;
  }
}

void introScreen2() {
  if (initIntro2 == false) {
    tft.setClipRect(0, 0,screenW, screenH);
    tft.drawRGBBitmap(0, 0, Intro2_PIX[0], screenW, screenH); 
    tft.updateScreen();
    initIntro2 = true;
  }
  if (initIntro2 == true && buttonBuffer[1] == 1) {
    currentMode = 0;
    initIntro2 = false;
  }
}

void firstLevel() {
  if (initFirstLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(0);
    if (isCaught1 == false) {
      drawHearts(55, 210);
    }
    if (isCaught2 == false) {
      drawHearts(30, 210);
    }
    if (isCaught3 == false) {
      drawHearts(5, 210);
    }
    
    tft.updateScreen();
    initFirstLevel = true;

    heroX = 145;
    heroY = 125;

    
  }
  if (interaction[currentMode][curTile] == 0x01) {
    currentMode = currentMode + 1;
    initFirstLevel = false;
    heroX = 145;
    heroY = 195;
  }
  
  drawLevel(0);
  drawHero();
  dead();
  tft.updateScreen();
}

void secondLevel() {
  if (initSecondLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(1);
    if (isCaught1 == false) {
      drawHearts(55, 210);
    }
    if (isCaught2 == false) {
      drawHearts(30, 210);
    }
    if (isCaught3 == false) {
      drawHearts(5, 210);
    }
    tft.updateScreen();
    initSecondLevel = true;
    enemyX = 20;
    enemyY = 40;
  }
  if (interaction[currentMode][curTile] == 0x03) {
    currentMode = currentMode + 1;
    initSecondLevel = false;
    heroX = 200;
    heroY = 190;
  }

  if (interaction[currentMode][curTile] == 0x02) {
    currentMode = currentMode - 1;
    initSecondLevel = false;
    heroX = 160;
    heroY = 120;
  }
  
  drawLevel(1);
  caught();
  drawEnemy();
  drawHero();
  dead();
  tft.updateScreen();
 

}

void thirdLevel() {
  if (initThirdLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(2);
    if (isCaught1 == false) {
      drawHearts(55, 210);
    }
    if (isCaught2 == false) {
      drawHearts(30, 210);
    }
    if (isCaught3 == false) {
      drawHearts(5, 210);
    }
    tft.updateScreen();
    initThirdLevel = true;
    enemyX = 150;
    enemyY = 100;
  }


  if (interaction[currentMode][curTile] == 0x06) {
    currentMode = currentMode + 1;
    initThirdLevel = false;
    heroX = 255;
    heroY = 55;
  }

  if (interaction[currentMode][curTile] == 0x08) {
    currentMode = 4;
    initThirdLevel = false;
    heroX = 20;
    heroY = 50;
  }

  if (interaction[currentMode][curTile] == 0x07) {
    currentMode = 5;
    initThirdLevel = false;
    heroX = 125;
    heroY = 190;
  }



  if (interaction[currentMode][curTile] == 0x04) {
    currentMode = currentMode - 1;
    initThirdLevel = false;
    heroX = 198;
    heroY = 20;
  }

  drawLevel(2);
  caught();
  drawEnemy();
  drawHero();
  dead();
  tft.updateScreen();

}


void fourthLevel() {
  if (initFourthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(3);
    if (isCaught1 == false) {
      drawHearts(55, 210);
    }
    if (isCaught2 == false) {
      drawHearts(30, 210);
    }
    if (isCaught3 == false) {
      drawHearts(5, 210);
    }
    tft.updateScreen();
    initFourthLevel = true;
  }


  //interaction mode for door 
  if (interaction[currentMode][curTile] == 0x06) {
    currentMode = currentMode - 1;
    initFourthLevel = false;
    heroX = 20;
    heroY = 50;
  }

  //interaction mode for treat 
  if (interaction[currentMode][curTile] == 0x13) {
    treatPickUp = treatPickUp + 1;
  }
    if (treatPickUp == 3) {
      currentMode = 7;
    }


  drawLevel(3);
  drawHero();
  dead();
  tft.updateScreen();


}

void fifthLevel() {
  if (initFifthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(4);
    if (isCaught1 == false) {
      drawHearts(55, 210);
    }
    if (isCaught2 == false) {
      drawHearts(30, 210);
    }
    if (isCaught3 == false) {
      drawHearts(5, 210);
    }
    tft.updateScreen();
    initFifthLevel = true;
  }

  if (interaction[currentMode][curTile] == 0x11) {
    currentMode = 2;
    initFifthLevel = false;
    heroX = 270;
    heroY = 50;
  }

   //interaction mode for treat 
  if (interaction[currentMode][curTile] == 0x14) {
    //treatPickUp = treatPickUp + 1;
  //}
    //if (treatPickUp == 3) {
      currentMode = 8;
    }
  

  drawLevel(4);
  drawHero();
  dead();
  tft.updateScreen();

}

void sixthLevel() {
  if (initSixthLevel == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(5);
    if (isCaught1 == false) {
      drawHearts(55, 210);
    }
    if (isCaught2 == false) {
      drawHearts(30, 210);
    }
    if (isCaught3 == false) {
      drawHearts(5, 210);
    }
    tft.updateScreen();
    initSixthLevel = true;
  }

  if (interaction[currentMode][curTile] == 0x14) {
    currentMode = 2;
    initSixthLevel = false;
    heroX = 121;
    heroY = 25;
  }

   //interaction mode for treat 
  if (interaction[currentMode][curTile] == 0x15) {
    //treatPickUp = treatPickUp + 1;
  //}
    //if (treatPickUp == 3) {
      currentMode = 9;
    }
  

  drawLevel(5);
  drawHero();
  dead();
  tft.updateScreen();

}

void EndScreen() {
  if (initEndLost == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, EndScreen_PIX[0], screenW, screenH);
    tft.updateScreen();
    initEndLost = true;
  }
   if  (buttonBuffer[1] == 1) {
    initEndLost = false;
    isCaught1 = false; 
    isCaught2 = false;
    isCaught3 = false;
    currentMode = -2; 
    initSecondLevel = false;
    initThirdLevel = false;
  }
}

void EndScreenWon() {
  if (initEndWon == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, EndWon_PIX[0], screenW, screenH);
    tft.updateScreen();
    initEndWon = true;
  }
   if  (buttonBuffer[2] == 1) {
    initEndWon = false;
    isCaught1 = false; 
    isCaught2 = false;
    isCaught3 = false;
    currentMode = -2; 
    initSecondLevel = false;
    initThirdLevel = false;
    initFourthLevel = false;
    initFifthLevel = false;
    initSixthLevel = false;
    treatPickUp = 0;
  }
}

void EndScreenBluberries() {
  if (initEndScreenBluberries == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, LossBluberries_PIX[0], screenW, screenH);
    tft.updateScreen();
    initEndScreenBluberries = true;
  }
 if  (buttonBuffer[3] == 1) {
    initEndScreenBluberries = false;
    isCaught1 = false; 
    isCaught2 = false;
    isCaught3 = false;
    currentMode = -2; 
    initSecondLevel = false;
    initThirdLevel = false;
    initFourthLevel = false;
    initFifthLevel = false;
    initSixthLevel = false;
    treatPickUp = 0;
  }
}

void EndScreenPumpkin() {
  if (initEndScreenPumpkin == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, LossPumpkin_PIX[0], screenW, screenH);
    tft.updateScreen();
    initEndScreenPumpkin = true;
  }
 if  (buttonBuffer[3] == 1) {
    initEndScreenPumpkin = false;
    isCaught1 = false; 
    isCaught2 = false;
    isCaught3 = false;
    currentMode = -2; 
    initSecondLevel = false;
    initThirdLevel = false;
    initFourthLevel = false;
    initFifthLevel = false;
    initSixthLevel = false;
    treatPickUp = 0;
  }
}


void runMode() {
  switch (currentMode) {
    case -2: 
    introScreen();
    break;
    
    case -1:
      introScreen2();
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

    case 6:
      EndScreen();
      break;

     case 7: 
      EndScreenWon();
      break;

      case 8:
      EndScreenBluberries();
      break;

      case 9: 
      EndScreenPumpkin();
      break;
  }
}
