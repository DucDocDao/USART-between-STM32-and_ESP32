# 1. UART configuration:
* Set USART1 mode to **Asynchronous** mode.
* Other parameters can be kept default.
<img width="1702" height="877" alt="Untitled" src="https://github.com/user-attachments/assets/5f8c0348-7df3-4424-883e-7872c01cf0cf" />

# 2. GPIO configuration: 
## 2.1. STM32F429I_DISC1:
<p align="center">
  <img width="647" height="718" alt="image" src="https://github.com/user-attachments/assets/c6989216-c90e-451b-afbe-925fbcf86afb" />
  <br>
  <em> PA9 for transmission (TX) and PA10 for reception (RX) </em>
</p>
<p align="center">
  <img width="1033" height="247" alt="image" src="https://github.com/user-attachments/assets/65bac65c-f2e4-46ce-afe7-c3c470a854a9" />
  <br>
  <em> Configure PA9 and PA10 </em>
</p>

## 2.2. ESP32 DEVKITV1:
<p align="center">
  <img width="1258" height="712" alt="image" src="https://github.com/user-attachments/assets/878c80e2-c596-4289-a5af-ebefbd093dc0" />
  <br>
  <em> GPIO17 for transmission (TX2) and GPIO16 for reception (RX2) </em>
</p>

# 3. STM32 as trasmitter, ESP32 as receiver:
## 3.1. TX board:
* Build project: <img width="47" height="32" alt="image" src="https://github.com/user-attachments/assets/c00ca20b-72db-47f5-a5dc-acaca960a5bd" />
* Connect STM32 board. It will act as the TX board.
* Run program: <img width="44" height="32" alt="image" src="https://github.com/user-attachments/assets/5d7a4171-e957-4181-8b68-4ba555298a9d" />
* The debug configurations window will open. Rename your configuration as **UART Debug TX**.
<img width="1132" height="687" alt="image" src="https://github.com/user-attachments/assets/fd39db43-7962-4265-8d9a-ddb935a6e293" />

* Click OK and the program will run autonomously on the TX board.

## 3.2. RX board:
* Connect ESP32 board (in this case I will connect to Arduino IDE so you can connect at the same time with STM32 without being affected).
* Upload the code down to board:<img width="41" height="37" alt="image" src="https://github.com/user-attachments/assets/8fa584aa-c2c7-4cec-89b0-e7c2bf1cd43d" />

## 3.3. PA9 to RX2, GND to GND:
<img width="1440" height="2560" alt="image" src="https://github.com/user-attachments/assets/da10e1d0-d3b2-4a21-a3ae-986cc8d8cdfd" />

## 3.4. Result: 
### Open Serial Monitor of Arduino IDE. Remember to select **115200** baud.
<img width="1853" height="365" alt="image" src="https://github.com/user-attachments/assets/c04e64b7-e142-46d0-a034-1cf764978157" />

