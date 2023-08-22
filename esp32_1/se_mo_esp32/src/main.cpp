#include <Arduino.h>
#include <WiFi.h>

int count=0;
char ssid[] ="Santharaj";
char pswd[] ="devesh@12345";

void swifi();

void setup()
{  

  Serial.begin(115200);
  WiFi.begin(ssid,pswd);
  swifi();
}

void swifi()
{
  Serial.println("CONNECTING TO WIFI..........");
  while(WiFi.status() != WL_CONNECTED)
 {
  Serial.println(". ");  
  delay(1000);
 }
 Serial.println(WiFi.localIP());
}

void loop() 
{
 if(WiFi.status()==WL_CONNECTED)
 {
     //Serial.println(WiFi.status()); output is anyways 3 | 3 means connected
  Serial.println(count);
  count++;
  delay(1000);
 }

}