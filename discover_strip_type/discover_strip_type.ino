
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 10

#define NUMLEDS 45

#define BRIGHTNESS 50

#define WAIT 2000

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMLEDS, PIN, NEO_RGB + NEO_KHZ800);


uint32_t foreground = strip.Color(200,200,200);
uint32_t background = strip.Color(100,100,20);
uint32_t off = strip.Color(0,0,0);

Adafruit_NeoPixel strips[] = {
  
  Adafruit_NeoPixel(NUMLEDS, PIN, NEO_RGB + NEO_KHZ800),
  Adafruit_NeoPixel(NUMLEDS, PIN, NEO_RBG + NEO_KHZ800),
  Adafruit_NeoPixel(NUMLEDS, PIN, NEO_GRB + NEO_KHZ800),
  Adafruit_NeoPixel(NUMLEDS, PIN, NEO_GBR + NEO_KHZ800),
  Adafruit_NeoPixel(NUMLEDS, PIN, NEO_BRG + NEO_KHZ800),
  Adafruit_NeoPixel(NUMLEDS, PIN, NEO_BGR + NEO_KHZ800)
  
};

String types[] = {
  "RGB",
  "RBG",
  "GRB",
  "GBR",
  "BRG",
  "BGR"
};

void setBackground(uint32_t color);

void setup() {
  Serial.begin(115200);

  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  setBackground(off);
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  
  setBackground(off);
  
  for(uint16_t i=0; i<6; i++) {
    
    Serial.print("Trying neopixel type: ");
    Serial.print(types[i]);
    Serial.println();
    
    strip = strips[i];
    strip.begin();

    setBackground(strip.Color(255,255,255));
    strip.show();
    delay(500);

    Serial.println("Red");
    setBackground(strip.Color(255,0,0));
    strip.show();
    delay(500); 

    Serial.println("Green");
    setBackground(strip.Color(0,255,0));
    strip.show();
    delay(500); 

    Serial.println("Blue");
    setBackground(strip.Color(0,0,255));
    strip.show();
    delay(500); 

    setBackground(strip.Color(0,0,0));
    strip.show();
    delay(1500); 
    
  }
  delay(WAIT);

}

void setBackground(uint32_t color){
    for(uint16_t i=0; i<strip.numPixels(); i++) { 
      strip.setPixelColor(i, color);
    }
}
