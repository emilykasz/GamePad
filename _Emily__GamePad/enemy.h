#include "Doc_PIX.h"
#include "Doc_MASK.h"
#include <Metro.h>


Metro enemyFrameTimer = Metro(250);
Metro enemyBrainTimer = Metro(1000);

int enemyMargin = 1;
float enemyX = 0;
float enemyXDir = 0; //moving left = -1, moving right = 1
float enemyY = 0;
float enemyYDir = 0; //moving up = -1, moving right = 1
int enemyW = 32;
int enemyH = 32;
int enemyType = 0; // 0 = doctor, 1 = receptionist 
int enemySmart = 3;
float enemySpeed = 0.3;
int enemyFrame = 0; //which animation frame is it on? 0,1,2,3 = Doc 4,5,6,7 = recpetionist
boolean enemyHit = false; //are either of the enemies touching Leo?
int c; // counter for the random numbers


void drawEnemy() {
  if (enemyBrainTimer.check()) {
    c = random(0, enemySmart + 1);
    if (c == 0) {
      enemyXDir = random(-1, 2);
      enemyYDir = random(-1, 2);
    } else {
      if (heroX < enemyX) {
        enemyXDir = -1;
      }
      if (heroX > enemyX) {
        enemyXDir = 1;
      }
      if (heroY < enemyY) {
        enemyYDir = -1;
      }
      if (heroY > enemyY) {
        enemyYDir = 1;
      }
    }
  }
  float nextXEnemy = enemyX + (enemyXDir * enemySpeed);
  float nextYEnemy = enemyY + (enemyYDir * enemySpeed);

  boolean canMove = checkMove(currentMode, nextXEnemy, nextYEnemy, enemyW, enemyH);

  if (canMove == true) {
    enemyX = nextXEnemy;
    enemyY = nextYEnemy;
  }


  if (currentMode == 1) {
    enemyType = 1;
  }
  if (currentMode == 2) {
    enemyType = 0;
  }

  
  if (enemyXDir == 1 && enemyType == 0) {
    enemyFrame = 2;
    if (enemyFrameTimer.check()) {
      enemyFrame = 2 + (enemyFrame + 1) % 2;
    }
  }
  if (enemyXDir == -1 && enemyType == 0) {
    enemyFrame = 0;
    if (enemyFrameTimer.check()) {
      enemyFrame = 0 + (enemyFrame + 1) % 2;
    }
  }

  if (enemyXDir == 1 && enemyType == 1) {
    enemyFrame = 6;
    if (enemyFrameTimer.check()) {
      enemyFrame = 6 + (enemyFrame + 1) % 2;
    }
  }
  if (enemyXDir == -1 && enemyType == 1) {
    enemyFrame = 4;
    if (enemyFrameTimer.check()) {
      enemyFrame = 4 + (enemyFrame + 1) % 2;
    }
  }
  tft.setClipRect(enemyX -2, enemyY -2, 35,35);
  drawLevel(currentMode);
  tft.drawRGBBitmap(enemyX, enemyY, Doc_PIX[enemyFrame], Doc_MASK[enemyFrame], 32,32);
  tft.updateScreen();
}
