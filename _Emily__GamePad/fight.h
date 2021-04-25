
boolean isCaught1 = false;
boolean isCaught2 = false;
boolean isCaught3 = false;

int hearts = 3;
boolean lastCollide = false;

//collision test function
boolean checkCollide(int hX, int hY, int hW, int hH, int eX, int eY, int eW, int eH) {
  boolean canMove = false;     // Assume a move can be made
  boolean xMin = false; if (hX < eX + eW) {
    xMin = true; // Does the xMin collide?
  }
  boolean xMax = false; if (hX + hW > eX) {
    xMax = true; // Does the xMax collide?
  }
  boolean yMin = false; if (hY < eY + eH) {
    yMin = true; // Does the yMin collide?
  }
  boolean yMax = false; if (hY + hH > eY) {
    yMax = true; // Does the yMin collide?
  }
  if (xMin && xMax && yMin && yMax) {
    canMove = true;
  }
  return canMove;
}

void caught() {

  boolean collided = checkCollide(heroX, heroY, 32, 32, enemyX, enemyY, 32, 32);
//  Serial.print (collided); 
//  Serial.print ("\t"); 
//  Serial.println (lastCollide); 
  if (collided == true && !lastCollide) {
    if (!isCaught1  && !isCaught2  && !isCaught3 ) {
      isCaught1 = true;
//      Serial.print ("caught first time") ;
//      Serial.println (isCaught1); 
    }
    else if (isCaught1 == true && !isCaught2  && !isCaught3 ) {
      isCaught2 = true;
//      Serial.print ("caught second time"); 
//      Serial.println(isCaught2);
    }
    else if (isCaught1 == true && isCaught2 == true && !isCaught3) {
      isCaught3 = true;
//      Serial.print ("caught third time"); 
//      Serial.println(isCaught3);
    }
   
    if (isCaught1 == true) {
      tft.setClipRect(55, 210, 20, 20);
      drawLevel(currentMode);
      tft.updateScreen();
    }
    if (isCaught2 == true) {
      tft.setClipRect(30,210,20,20);
      drawLevel(currentMode);
      tft.updateScreen();
    }
  if (isCaught3 == true) {
      tft.setClipRect(5,210,20,20);
      drawLevel(currentMode);
      tft.updateScreen();
    }
  }
  lastCollide = collided;
}
