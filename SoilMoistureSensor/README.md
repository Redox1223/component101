# Soil Moisture Sensor
- This sensor measures the volumetric content of water in soil and gives us the moisture level.
- This sensor gives us both analog and digital output.
- We are going to connect it in both modes.
## How does the arduino soil sensor work?
- The soil moisture sensor consists of two probes that are used to measure the volumetric content of water.
- The two probes allow the current to pass through the soil, which gives the resistance value to measure the moisture value.
- When there is water, the soil will conduct more electricity,which means that there will be less resistance.
- Dry soil conducts electricity poorly, so when there is less water,then the soil will conduct less electricity,which means that there will be more resistance.
- This sensor can be connected in analog and digital modes.First, we will connect it in analog mode,and then digital.
## Specifications
- The specifications of the FC-28 soil moisture sensor are as follows.
   - Input Voltage:3.3V to 5V
   - Output Voltage:0 to 4.2V
   - Output Current:35mA
   - Output Signal:both analog and digital 
## Pin-Out
- The FC-28 soil moisture sensor has four pins.
  - VCC:power
  - A0:Analog Output
  - D0: Digital Output
  - GND: Ground
- The module also contains a potentiometer,which will set the threshold value.
- This threshold value will be compared by the LM393 comparator.
- The output LED will light up and down according to this threshold value.
