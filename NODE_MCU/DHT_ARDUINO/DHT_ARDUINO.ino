#include<DHT.h>
DHT dht;
#define DHT11_PIN 3 
void setup() {
Serial.begin(9600); 
Serial.println("welcome Humidity and temperature Detector");
 }
void loop() { 
int chk = dht.read11(DHT11_PIN); 
Serial.println(" Humidity " ); 
Serial.println(dht.humidity, 1); 
Serial.println(" Temparature "); 
Serial.println(dht.temperature, 1);
delay(2000); 
}
