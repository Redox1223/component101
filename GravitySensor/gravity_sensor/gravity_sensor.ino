// This code shows how to read the tds value and calibrate it with the standard buffer solution.

#include <EEPROM.h>
#include <GravityTDS.h>

#define TdsSensorPin A1
GravityTDS gravityTds;

float temperature = 25;
float tdsValue=0;

void setup()
{
  Serial.begin(115200);
  gravityTds.setPin(TdsSensorPin);
  gravityTds.setAref(5.0); // reference voltage on ADC,default 5.0V on Arduino Uno
  gravityTds.setAdcRange(1024); // 1024 for 10bit ADC;4096 for 12bit ADC
  gravityTds.begin();// initialization 

}

void loop()
{
    temperature = readTemperature(); // add your temperature sensor and read it.
    gravityTds.setTemperature(temperature);//set the temperature and execute temperature compensation
    gravityTds.update();//sample and calculate
    gravityTds.update();// then get the value
    Serial.print(tdsValue,0);
    Serial.println("ppm");
    dalay(1000);
}