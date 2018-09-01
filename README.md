# TridentTD_analogWrite32 library
## analogWrite( ) for ESP32  
  
(click picture to view VDO on youtube)   
[![MultiModule](https://img.youtube.com/vi/R2wZU6_Gc1I/0.jpg)](https://youtu.be/R2wZU6_Gc1I)  


### Usage  

__TridentTD::analogWrite( uint8_t pin, uint8_t value )__  

### parameter  
__pin__ :  1 - 16  ( GPIO1 - GPIO16)  
__value__ : 0 - 255

### Basic Example  

```C
#include <TridentTD_analogWrite32.h>

uint8_t pin = 4;   // can use GPIO1 - GPIO16 for analogWrite

void setup(){
   TridentTD::analogWrite( pin, 120 );   // set analog value between 0-255 for specific pin
}
void loop(){
}
```


__TridentTD__  
01/09/2018
