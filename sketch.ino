#include <WiFi.h>
#include <HTTPClient.h>
#include "DHTesp.h"

const char* ssid = "Wokwi-GUEST";
const char* password = "";

String apiKey = "YV584I39W8WJONF0";

const char* server = "http://api.thingspeak.com/update";

const int DHT_PIN = 15;

DHTesp dhtSensor;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected!");

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {

  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  Serial.print("Temperature: ");
  Serial.println(data.temperature);

  Serial.print("Humidity: ");
  Serial.println(data.humidity);

  if(WiFi.status()== WL_CONNECTED){

    HTTPClient http;

    String url = server;
    url += "?api_key=" + apiKey;
    url += "&field1=" + String(data.temperature);
    url += "&field2=" + String(data.humidity);

    http.begin(url);

    int httpResponseCode = http.GET();

    Serial.print("HTTP Response: ");
    Serial.println(httpResponseCode);

    http.end();
  }

  Serial.println("--------------------");

  delay(15000);
}