#include <Wire.h>
#include <Adafruit_AMG88xx.h>

Adafruit_AMG88xx amg;

void setup() {

  Serial.begin(9600);
  amg.begin();
  
}

void loop() {
  float pixels[64];

  amg.readPixels(pixels);

  for (int i = 0; i < 64; i++) {
    Serial.print(pixels[i]);
    Serial.print("\t");

    if ((i + 1) % 8 == 0) {
      Serial.println();
    }
  }

  Serial.println();
  delay(100);
}
