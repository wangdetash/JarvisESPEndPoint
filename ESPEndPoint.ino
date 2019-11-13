
#include <WiFi.h>
#include <PubSubClient.h>

// Replace the next variables with your SSID/Password combination
const char* ssid = "GNXS-483F50";
const char* password = "1234567890";

// Add your MQTT Broker IP address, example:
const char* mqtt_server = "192.168.1.220";

WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int value = 0;


// LED Pin
const int ledPin = 26;