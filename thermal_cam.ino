#include <Wire.h>
#include <Adafruit_AMG88xx.h>

Adafruit_AMG88xx amg;

void setup() {

  Serial.begin(9600);
  amg.begin();
  
}

void loop() {
  
  float pix[64];
  amg.readPixels(pix);
  int c = 0;
 
  for (int i = 0; i < 64; i++) {
    Serial.print(pix[i]);
    Serial.print("\t");

    c++;

    if (c == 8) {
      
      Serial.println();
      c = 0;  
    }
  }

  Serial.println();
  delay(100);
}
