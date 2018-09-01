#include "TridentTD_analogWrite32.h"

byte brightness = 0;     // LED's brightness
byte fade       = 5;     // step of LED fading 

void setup() {  
}

void loop() {
  TridentTD::analogWrite( LED_BUILTIN, brightness);

  brightness += fade;
  if( brightness <= 0 || brightness >=255)  fade = - fade;
  delay(30);
}

