#include <Arduino.h>

#define RXp2 16 
#define TXp2 17 

void setup() {
  Serial.begin(115200);

  Serial2.begin(115200, SERIAL_8N1, RXp2, TXp2);
  
  Serial.println("ESP32 Receiver is ready! Waiting for data...");
}

void loop() {
  if (Serial2.available()) {
    String dataFromSTM32 = Serial2.readStringUntil('\n');
    
    Serial.print("Received from STM32: ");
    Serial.println(dataFromSTM32);
  }
}
