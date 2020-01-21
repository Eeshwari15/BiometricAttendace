#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
void setup () {
 
  Serial.begin(115200);
  WiFi.begin("PLATFORUMA", "platforuma@123");
 
  while (WiFi.status() != WL_CONNECTED) {
 
    delay(1000);
    Serial.println("Connecting..");
 
  }
  Serial.println("Connected to WiFi Network");
 
}
void loop() {
 
  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
    Serial.println(1111);
 
    HTTPClient http;  //Declare an object of class HTTPClient
 
//    http.begin("http://www.google.com"); //Specify request destination
    http.begin("http://www.google.com"); //Specify request destination
    Serial.println("http://192.168.1.40:5000/helloesp");
    int httpCode = http.GET(); //Send the request

    Serial.println(httpCode);
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);             //Print the response payload
 
    }else Serial.println("An error ocurred");

 
    http.end();   //Close connection
 
  }
 
  delay(10000);    //Send a request every 10 seconds
 
}
