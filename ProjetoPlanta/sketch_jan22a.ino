
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>
#include <TFT.h> 
#include "walk.h"
#define FRAME_DELAY (100)
#define FRAME_WIDTH (128)
#define FRAME_HEIGHT (160)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
  // For the breakout board, you can use any 2 or 3 pins.
  // These pins will also work for the 1.8" TFT shield.
  #define TFT_CS        10
  #define TFT_RST       9 // Or set to -1 and connect to Arduino RESET pin
  #define TFT_DC        8

// OPTION 1 (recommended) is to use the HARDWARE SPI pins, which are unique
// to each board and not reassignable. For Arduino Uno: MOSI = pin 11 and
// SCLK = pin 13. This is the fastest mode of operation and is required if
// using the breakout board's microSD card.

// For 1.44" and 1.8" TFT with ST7735 use:
TFT tft = TFT(TFT_CS, TFT_DC, TFT_RST);

// For 1.14", 1.3", 1.54", 1.69", and 2.0" TFT with ST7789:
//Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);


// OPTION 2 lets you interface the display using ANY TWO or THREE PINS,
// tradeoff being that performance is not as fast as hardware SPI above.
//#define TFT_MOSI 11  // Data out
//#define TFT_SCLK 13  // Clock out

// For ST7735-based displays, we will use this call
//Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

// OR for the ST7789-based displays, we will use this call
//Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);
#define ldr A0
int luminosidade = 0;


float p = 3.1415926;

void setup(void) {
  Serial.begin(9600);
  tft.initR(INITR_BLACKTAB);   
  tft.enableDisplay(true);   // Init ST7735S chip, black tab
}
int frame = 0;
void loop() { 
  tft.stroke(0, 0, 0);
  tft.drawRGBBitmap((tft.width()-100)/2,(tft.width()-80)/2,(uint16_t *)frames[frame],100,81);
  // tft.drawBitmap(48, 16, frames[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  Serial.println();
  frame = (frame + 1) % FRAME_COUNT;
  delay(FRAME_DELAY);

}