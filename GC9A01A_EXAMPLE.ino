#include "Adafruit_GC9A01A.h"

#define TFT_CS 10
#define TFT_DC 9

 Adafruit_GC9A01A tft (TFT_CS, TFT_DC);

void setup() {
  tft.begin();
  tft.setRotation(3);  // Ajusta la orientación de la pantalla si es necesario
  tft.fillScreen(GC9A01A_GREEN);
  tft.setTextColor(GC9A01A_RED);
  tft.setTextSize(2);
  tft.setCursor(50, 110);
  tft.println("Hola, mundo!");
}

void loop() {
  // Tu código aquí
}
