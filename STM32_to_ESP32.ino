#include <Arduino.h>

// Định nghĩa chân giao tiếp UART2
#define RXp2 16  // Bắt buộc nối với TX của STM32
#define TXp2 17  // (Không sử dụng để gửi đi, nhưng vẫn cần khai báo)

void setup() {
  // Bật Serial Monitor để xem kết quả
  Serial.begin(115200);
  
  // Khởi tạo UART2 để nhận dữ liệu từ STM32
  Serial2.begin(115200, SERIAL_8N1, RXp2, TXp2);
  
  Serial.println("ESP32 Receiver is ready! Waiting for data...");
}

void loop() {
  // Nếu có dữ liệu trong bộ đệm UART2
  if (Serial2.available()) {
    // Đọc chuỗi cho đến khi gặp ký tự xuống dòng ('\n')
    String dataFromSTM32 = Serial2.readStringUntil('\n');
    
    // In kết quả nhận được lên màn hình
    Serial.print("Received from STM32: ");
    Serial.println(dataFromSTM32);
  }
}