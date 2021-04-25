//including the pixel sprites
#include "Gamepad_MASK.h"
#include "Gamepad_PIX.h"


#define tileW 16
#define tileH 12
#define tileSize 20
#define numLevels 6


int levels[numLevels][tileW * tileH] {
  // Level 0 - Front of clinic
  {
    0x2B, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2D,
    0x32, 0x33, 0x33, 0x33, 0x33, 0x38, 0x39, 0x3A, 0x3B, 0x3A, 0x38, 0x33, 0x33, 0x33, 0x33, 0x2E,
    0x32, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x2E,
    0x32, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x36, 0x37, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x2E,
    0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x34, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x2F,
    0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x0A, 0x0A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A,
    0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46,
    0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46,
    0x46, 0x46, 0x46, 0x24, 0x46, 0x46, 0x46, 0x26, 0x46, 0x46, 0x46, 0x46, 0x28, 0x46, 0x46, 0x46,
    0x46, 0x46, 0x46, 0x25, 0x46, 0x46, 0x46, 0x27, 0x46, 0x46, 0x46, 0x46, 0x29, 0x46, 0x46, 0x46,
    0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46,
    0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46,
  }, {
    // Level 1 - reception room
    0x08, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x41, 0x45, 0x06, 0x06, 0x06, 0x07,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x19, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x16, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x3D, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x3E, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x42, 0x44, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04,
  },{
    // Level 2- checkup room 
    0x08, 0x06, 0x06, 0x06, 0x06, 0x06, 0x41, 0x45, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42,
    0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x20, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x1F, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1C, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1D, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x42, 0x3F, 0x03, 0x03, 0x03, 0x04,
  },{
    // Level 3- surgical room  
    0x1C, 0x1D, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42,
    0x1C, 0x1D, 0x00, 0x00, 0x20, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43,
    0x1C, 0x1D, 0x00, 0x00, 0x1F, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x00, 0x00, 0x47, 0x48, 0x00, 0x00, 0x00, 0x1F, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1D, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04,
  },{
   // Level 4- grooming room
    0x08, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21,
    0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22,
    0x01, 0x00, 0x00, 0x00, 0x20, 0x1C, 0x00, 0x00, 0x20, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x1F, 0x1D, 0x00, 0x00, 0x1F, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x48, 0x00, 0x00, 0x22,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
    0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D,
  }, {
   // Level 5- boarding room 
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x23, 0x03, 0x03, 0x03, 0x03, 0x03, 0x42, 0x3F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x23,
  },
};


void drawLevel(int thisLevel) {
  for (int y = 0; y < tileH; y++) {
    for (int x = 0; x < tileW; x++) {
      int index = x + (y * tileW);
      int whichTile = levels[thisLevel][index];

      int finalX = x * tileSize;
      int finalY = y * tileSize;
      tft.drawRGBBitmap(finalX, finalY, GamePad_PIX[whichTile], tileSize, tileSize);
    }
  }
}
