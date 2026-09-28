## 🚀 Data Transmission:

1. **Define Word Length:** Program the `M` bit in the `USART_CR1` register to define the word length.
2. **Configure Stop Bits:** Program the number of stop bits in the `USART_CR2` register.
3. **Set Baud Rate:** Select the desired baud rate using the `USART_BRR` register.
4. **Enable Transmit Block:** Set the `TE` bit in `USART_CR1` to enable the transmit block.
5. **Enable USART:** Enable the USART peripheral by writing the `UE` bit in `USART_CR1`.
6. **Transmit Data:** Now if the `TXE` flag is set, write the data byte to send in the `USART_DR` register.
7. **Wait for Completion:** After writing the last data into the `USART_DR` register, wait until `TC=1`.
## 📥 Data Reception:

1. **Define Word Length:** Program the `M` bit in the `USART_CR1` register to define the word length.
2. **Configure Stop Bits:** Program the number of stop bits in the `USART_CR2` register.
3. **Set Baud Rate:** Select the desired baud rate using the `USART_BRR` register.
4. **Enable USART:** Enable the USART peripheral by writing the `UE` bit in `USART_CR1`.
5. **Enable Receiver Block:** Set the `RE` bit in the `USART_CR1` register, which enables the receiver block of the USART peripheral.
6. **Read Data Byte:** When a character is received, wait until the `RXNE` bit is set and read the data byte from the data register.
7. **Clear RXNE Flag:** The `RXNE` bit must be cleared by reading the data register before the end of the reception of the next character to avoid an overrun error.
