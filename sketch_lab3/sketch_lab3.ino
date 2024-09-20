#include <Adafruit_NeoPixel.h> // Include the Adafruit NeoPixel library
#define LED_PIN 32 // NeoPixel LED strip 
#define NUM_LEDS 8// Number of LEDS

// Create an instance of the Adafruit _NeoPixel class
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

int ledVal[3][8];

void setup() {
  strip.begin(); // Initialize the NeoPixel strip 
  strip.show(); // Initialize the strip

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 8; j++) {
  //     ledVal[i][j] = random(255);
  //   }
  // }

  strip.setBrightness(strip.getBrightness()/2);

  // There's a bug with the serial monitor in this demo
  // do not use
  // Serial.begin (115200);
}

void loop() {
  // read the value from the light sensor
  int analogValue = analogRead(39) ;
  for (int i = 0; i < NUM_LEDS; i++) {
    if(analogValue > (4095.0 / NUM_LEDS) * (i+0.5)) {
      // strip.setPixelColor(i, ledVal[0][i], ledVal[1][i], ledVal[2][i]); // Set the color of the i-th LED to blue
      strip.setPixelColor(i, random(255), random(255), random(255));
    }
    else {
      strip.setPixelColor(i, 0, 0, 0); // Set the color of the i-th LED to black
    }
  }

  // Display the colors on the strip
  strip.show();

  delay(50); // wait before reading again
}
