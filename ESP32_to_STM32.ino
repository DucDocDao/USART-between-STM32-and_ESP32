#include <Arduino.h>

// Định nghĩa chân UART2
#define RXp2 16
#define TXp2 17

// Định nghĩa chân LED tích hợp trên ESP32
#define LED_BUILTIN 2 

void setup() {
  Serial.begin(115200);
  Serial2.begin(115200, SERIAL_8N1, RXp2, TXp2);
  
  // Khởi tạo chân LED là OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.println("ESP32 Transmitter with LED is ready!");
}

void loop() {
  String tx_msg = "Hello STM32, ESP32 is sending data!\r\n";
  
  // 1. Bật LED (Sáng lên)
  digitalWrite(LED_BUILTIN, HIGH);
  
  // 2. Gửi dữ liệu qua TX2
  Serial2.print(tx_msg);
  Serial.print("Sent to STM32: ");
  Serial.print(tx_msg);
  
  // 3. Giữ LED sáng trong 100ms để mắt người kịp nhìn thấy
  delay(100); 
  
  // 4. Tắt LED
  digitalWrite(LED_BUILTIN, LOW);
  
  // 5. Chờ phần thời gian còn lại trước khi gửi gói tin tiếp theo (ví dụ: 10 giây)
  delay(10000); 
}