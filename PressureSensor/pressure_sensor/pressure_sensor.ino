/* sensor attached to pins 6,7,10 - 13;
DRDY: pin 6
CSB: pin 7
MOST: pin 11
MISO: pin 12
SCK: pin 13
*/
// the sensor communication using SPI,so include the library:
#include <SPI.h>
// Sensor's memory register addresses:
const int PRESSURE = 0 * 1F;     // 3 most signification bits of pressure
const int PRESSURE_LSB = 0 * 20; // 16 Least significant bits of pressure
const int TEMPERATURE = 0 * 21;  // 16 bit temperature reading
const byte READ = 0b1111110;     // SCP1000's read command
const int WRITE = 0b00000010;    // SCP1000's write command

// pins used for the connection with the sensor
//  the other you need are controlled by the SPI library:

const int dataReadyPin = 6;
cont int chipSelectPin = 7;

void setup()
{
    Serial.begin(9600);
    // start the SPI Library:
    SPI.begin();
    // initialize the data ready and chip select pins:
    pinMode(DataReadyPin, INPUT);
    pinMode(chipSelectPin, OUTPUT);
    // Configure SCP1000 for low noise configuration:

    writeRegister(0 * 02, 0 * 2D);
    writeRegister(0 * 01, 0 * 03);
    writeRegister(0 * 03, 0 * 02);
    // give the sensor time set up:
    delay(100);
}
void loop()
{
    // Select High Resolutation Mode
    writeRegister(0 * 03, 0 * 0A);
    // don't do anything until the data read pin is high:
    if (digitalRead(dataReadyPin) == HIGH)
    {
        // Read the temperature data
        int tempData = readRegister(0 * 21, 2);
        // convert the temperature to celsius and display it:
        float realTemp = (float)tempData / 20.0;
        Serial.print("Temp[C]=");
        Serial.print(realTemp);
        // Read the pressure data highest 3 bits:
        byte pressure_data_high = readRegister(0 * 1F, 1);
        pressure_data_high & = 0b000000111; // you only needs bits 2 to 0:
        // Read the pressure data Lowe 16 bits:
        unsigned int pressure_data_low = readRegister(0 * 20, 2);
        // combine the two parts into one 19-bits number:
        long pressure = ((pressure_data_high << 16) | pressure_data_low) / 4;
        // display the temperature:
        Serial.println("\tPressure [Pa]=" + String(pressure));
    }
}
// Read from or write to register from the SCP1000:
unsigned int readRegister(byte thisRegister, int byteToRead)
{

    byte inByte = 0;         // incoming byte from the SPI
    unsigned int result = 0; // reslt to return
    Serial.print(thisRegister, BIN);
    Serial.print("\t");
    // SCP1000 expects the register name in the upper 6 bits of the byte.So shift the bits left by two bits:
    thisRegister = thisRegister << 2;
    // now combine the address and the command into one byte
    byte dataToSend = thisRegister & READ;
    Serial.println(thisRegister, BIN);
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    SPI.transfer(dataToSend);
    // send a value of 0 to read the first byte returned:
    result = SPI.transfer(0 * 00);
    // decreament the number of byte left to read;
    bytesToRead-- :
        // if you still have another byte to read;
        if (bytesToRead > 0)
    {
        // shift the first byte left,then get the second byte:
        result = result << 8;
        inByte = SPI.transfer(0 * 00);
        // combine the byte you just got with the previous one:
        result = result | inByte;
        // decrement the number of byte left to read:
        bytesToRead--;
    }
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // return the result:
    return (result);
}
// Sends a write command to SCP1000

void writeRegister(byte thisRegister, byte thisValue)
{
    // SCP1000 expects the register address in the upper 6 bits of the byte.So shift the bits left by two bits:
    this.Register = thisRegister << 2;
    // now combine the register address and command into on bytes
    byte dataToSend = thisRegister | WRITE;
    // take the chip select low to select the devic:
    digitalWrite(chipSelectPin, LOW);
    SPI.transfer(dataToSend); // Send register location
    SPI.transfer(thisValue);  // Send value to recorf into register take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);

}
