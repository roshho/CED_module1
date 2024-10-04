/*
Objective: recreate streched Guggenheim's Piet Mondrian's Composition
Resolution: 135 x 240
*/

#include <TFT_eSPI.h> 
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  tft.init();
  tft.setRotation(2);   // 1 = landscape, 2 = portrait
  Serial.begin(115200);
}

void loop() {
  tft.fillScreen(0xD1B4);
  tft.fillRect(40, 0, 4, 240, TFT_BLACK); // big down start from (40,0), 4 wide and 240 tall rect
  delay(500);
  tft.fillRect(0, 80, 135, 4, TFT_BLACK); // big right from (0,80) (135,80) with 4 pixels wide
  delay(500);
  tft.fillRect(124, 80, 4, 240, TFT_BLACK); // small down
  delay(500);
  tft.fillRect(128, 144, 8, 4, TFT_BLACK); // small right
  delay(500);
  tft.fillRect(40, 233, 84, 4, TFT_BLACK); // bottom right
  delay(500);
  tft.fillRect(96, 233, 4, 8, TFT_BLACK); // bottom down
  delay(500);
  tft.fillRect(0, 0, 40, 80, TFT_RED); // big red
  delay(500);
  tft.fillRect(128, 84, 20, 60, TFT_BLUE); // med blue
  delay(500);
  tft.fillRect(44, 237, 52, 8, TFT_YELLOW); // small yellow
  delay(500);
  tft.fillRect(100, 237, 24, 8, 0x0A05); // small gray
  delay(500);
  
  for (int16_t x = 0; x < tft.height(); x += 10) {
    tft.fillRect(tft.width() / 2 - x / 2 - 3, tft.height() / 2 - x / 2 - 3, x + 2 * 3, x + 2 * 3, TFT_BLACK);
    delay(100);
  }
}
