# ⚙️ 1. UART Configuration
* Set USART1 mode to **Asynchronous** mode.
* Other parameters can be kept at their **default** values.

<img width="1702" height="877" alt="UART Configuration" src="https://github.com/user-attachments/assets/5f8c0348-7df3-4424-883e-7872c01cf0cf" />

---

# 🔌 2. GPIO Configuration

## 2.1. STM32F429I_DISC1 (Transmitter)
<p align="center">
  <img width="647" height="718" alt="STM32 GPIO" src="https://github.com/user-attachments/assets/c6989216-c90e-451b-afbe-925fbcf86afb" />
  <br>
  <em> PA9 for transmission (TX) and PA10 for reception (RX) </em>
</p>
<p align="center">
  <img width="1033" height="247" alt="STM32 Pins" src="https://github.com/user-attachments/assets/65bac65c-f2e4-46ce-afe7-c3c470a854a9" />
  <br>
  <em> Configure PA9 and PA10 </em>
</p>

## 2.2. ESP32 DEVKIT V1 (Receiver)
<p align="center">
  <img width="1258" height="712" alt="ESP32 GPIO" src="https://github.com/user-attachments/assets/878c80e2-c596-4289-a5af-ebefbd093dc0" />
  <br>
  <em> GPIO17 for transmission (TX2) and GPIO16 for reception (RX2) </em>
</p>

---

# 🚀 3. Execution: STM32 as Transmitter, ESP32 as Receiver

## 3.1. 📡 TX Board (STM32)
* **Build project:** Click the hammer icon <img width="47" height="32" alt="Build" src="https://github.com/user-attachments/assets/c00ca20b-72db-47f5-a5dc-acaca960a5bd" />
* **Connect** the STM32 board to your computer. It will act as the dedicated TX board.
* **Run program:** Click the play icon <img width="44" height="32" alt="Run" src="https://github.com/user-attachments/assets/5d7a4171-e957-4181-8b68-4ba555298a9d" />
* The **Debug Configurations** window will open. Rename your configuration to `UART Debug TX`.

<img width="1132" height="687" alt="Debug Config" src="https://github.com/user-attachments/assets/fd39db43-7962-4265-8d9a-ddb935a6e293" />

* Click **OK**. The program will now flash and run autonomously on the STM32 board.

## 3.2. 📥 RX Board (ESP32)
* **Connect** the ESP32 board. 
> **💡 Tip:** Using the Arduino IDE for the ESP32 allows you to connect both boards to your computer simultaneously without COM port conflicts.
* **Upload:** Flash the receiver code down to the board <img width="41" height="37" alt="Upload" src="https://github.com/user-attachments/assets/8fa584aa-c2c7-4cec-89b0-e7c2bf1cd43d" />

## 3.3. 🔗 Hardware Wiring
> **⚠️ CRITICAL:** You must connect the GND pins of both boards together for the UART to function correctly and avoid garbage data.

* **STM32 `PA9` (TX)** ➡️ **ESP32 `RX2`**
* **STM32 `GND`** ➡️ **ESP32 `GND`**

<p align="center">
  <img width="600" alt="Wiring Setup" src="https://github.com/user-attachments/assets/da10e1d0-d3b2-4a21-a3ae-986cc8d8cdfd" />
  <br>
  <em> Physical connection between STM32 and ESP32 </em>
</p>

## 3.4. 🎯 Result
Open the **Serial Monitor** in the Arduino IDE. 
* Ensure the baud rate is set exactly to **`115200` baud**.

<img width="1853" height="365" alt="Result" src="https://github.com/user-attachments/assets/c04e64b7-e142-46d0-a034-1cf764978157" />
