// IoT
// Task 1
// LED and ESP32

/*
Webpages:
Red: https://najat01.github.io/123/Red
White: https://najat01.github.io/123/White
Blue: https://najat01.github.io/123/Blue
Green: https://najat01.github.io/123/Green
Off: https://najat01.github.io/123/Off
*/
#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const String url = "https://najat01.github.io/123/Blue";
String payload = "";
void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  pinMode(25, OUTPUT); //Red
  pinMode(33, OUTPUT); //White
  pinMode(32, OUTPUT); //Blue
  pinMode(26, OUTPUT); //Green
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.print("OK! IP=");
  Serial.println(WiFi.localIP());

  Serial.print("Fetching " + url + "... ");

  


}

void loop() {
  HTTPClient http;
  http.begin(url);
  int httpResponseCode = http.GET();
  if (httpResponseCode > 0) {
    Serial.print("HTTP ");
    Serial.println(httpResponseCode);
    payload = http.getString();
    Serial.println();
    Serial.println(payload);
    if( payload == "Green" ){
      digitalWrite(26, HIGH);
    }
    else if( payload == "Blue" ){
      digitalWrite(32, HIGH);
    }
    else if( payload == "White" ){
      digitalWrite(33, HIGH);
    }
    else if( payload == "Red" ){
      digitalWrite(25, HIGH);
    }
    else if( payload == "Off" ){
      digitalWrite(25, LOW);
      digitalWrite(33, LOW);
      digitalWrite(32, LOW);
      digitalWrite(26, LOW);
    }




  }
  else {
    Serial.print("Error code: ");
    Serial.println(httpResponseCode);
    Serial.println(":-(");
  }
  
}
