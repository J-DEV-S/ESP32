#include <Arduino.h>
#include <WiFi.h>

#define LED 1

char ssid[]="Santharaj";
char pssd[]="devesh@12345";
uint8_t count=0;

void setup()
{
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  WiFi.begin(ssid,pssd);
/*
  while(WiFi.status()!= WL_CONNECTED)
  {
    delay(1000);
    Serial.println("connecting to wifi....");
  }
  Serial.println(WiFi.localIP());
*/
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(1000);
  
  //
  Serial.println(count);
  count++;
  //

  digitalWrite(LED, LOW);
  delay(1000);
}