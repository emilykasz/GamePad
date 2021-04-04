//adding the SPI library
#include "SPI.h"
//adding the ILI9341 library
#include "ILI9341_t3n.h"

//which pins are attached to which variable
#define TFT_DC 9
#define TFT_CS 10
#define TFT_RST 8

//creates the screen object
ILI9341_t3n tft = ILI9341_t3n(TFT_CS, TFT_DC, TFT_RST);

//defining the screen width and height
#define screenW 320
#define screenH 240

//initializing the screen buffer
DMAMEM uint16_t screenBuffer[screenW * screenH];

boolean change = false;

Metro roomChange2 = Metro(2000);

void initScreen() {
  tft.begin();
  tft.setRotation(1); //rotates the screen 90 degrees
  tft.setFrameBuffer(screenBuffer);
  tft.useFrameBuffer(1);
  tft.fillScreen(ILI9341_BLACK); //fills the screen black
}

void screenTest() {
  if (roomChange2.check()) {
    change = !change;
  }

  if (change == true) {
    tft.fillScreen(ILI9341_BLACK);
  }
  else {
    tft.fillScreen(ILI9341_WHITE);
  }
}
