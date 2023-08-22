#include <Arduino.h>
#include<esp_log.h>



void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  Serial.println("1 ") ;
  delay(1000);
}
