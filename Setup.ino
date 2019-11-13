
void setup() {

  // Setup baudrate for serial communication  
  Serial.begin(115200);

  // Setup connection with access point
  setup_wifi();

  // Setup connection with mqtt broker
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  long now = millis();
  if (now - lastMsg > 5000) {
    lastMsg = now;
    
  }
}