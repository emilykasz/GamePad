
boolean isCaught = false; 
 

//collision test function 
boolean checkCollide(int hX, int hY, int hW, int hH, int eX, int eY, int eW, int eH){
 boolean canMove = false;     // Assume a move can be made
  boolean xMin = false; if(hX < eX + eW){xMin = true;}               // Does the xMin collide?
  boolean xMax = false; if(hX + hW > eX){xMax = true;}               // Does the xMax collide?
  boolean yMin = false; if(hY < eY + eH){yMin = true;}               // Does the yMin collide?
  boolean yMax = false; if(hY + hH > eY){yMax = true;}               // Does the yMin collide?
  if (xMin && xMax && yMin && yMax) {canMove = true;}
  return canMove;
}

void caught() { 

  boolean collided = checkCollide(heroX, heroY, 32, 32, enemyX, enemyY, 32,32);
  Serial.println (collided);
  if (collided == true ) {
    isCaught = true; 
  }
}
