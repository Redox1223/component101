# C0034-IR Sensor
An IR sensor, or infrared sensor, is a device that detects infrared radiation to measure heat and proximity, commonly used in various applications like robotics and electronic devices.

## Image
This project is for testing the IR sensor module. :)

![image](https://github.com/RPSTD/component101/assets/147227378/66c8fd44-23ef-4099-9d23-b46e23db5cb6)
Components you will need
1. IR sensor module.
2. 3x Jumper wires.
3. Arduino board.

## How to connect.
1. Connect the OUT pin of the module to the Digital Pwm of the Arduino board.
2. Connect the GND (-) pin of the module to the gnd of the Arduino board.
3. Connect the VCC (+) pin of the module to the 5v power of the Arduino board.



You can make this one after you have made the first one, this project is for fun to upgrade your circuit if your interested!, :)


![image](https://github.com/RPSTD/component101/assets/147227378/231c86d3-c5e4-4341-84c1-249786b24440)

Components you will need
1. IR sensor module.
2. 5x jumper wires, 5x small jumper wires.
3. A buzzer.
4. LED Bulb.
5. 220 Ohm Resisitor.
6. Bread Board.
7. Arduino board.

## How to connect the circuit
1. Connect the OUT pin of the module to the 9 Digital PWM of the Arduino board.
2. Connect the GND (-) pin of the module to the negative (-) to a bread board using a small jumper wire.
3. Connect the VCC (+) pin of the module to the 5v power of the Arduino board 
4. Observe the diagram above and make the rest of the cicuit!.

## The theory behind the components

The Flame Sensor module consists of an IR photodiode (IR receiver), resistor, capacitor, potentiometer, and LM393 comparator in an integrated circuit. When a fire burns, it emits a small amount of infrared light which is received by the IR receiver. The LM393 comparator is used to check for a change in voltage across the IR receiver. If a fire is detected, the output pin (Dout) will give 0V (LOW), and if there is no fire, the output pin will be 5V (HIGH). The sensitivity of the sensor can be adjusted by varying the onboard potentiometer.

## Features

- Detects infrared light with a wavelength ranging from 700nm to 1000nm
- Detection angle of about 60 degrees
- Sensitivity can be adjusted by varying the onboard potentiometer
- Working voltage is between 3.3V and 5V DC, with a digital output
- Logic high on output indicates the presence of flame or fire
- Logic low on output indicates the absence of flame or fire

## Statistics

- Some common applications of the Flame Sensor include hydrogen stations, combustion monitors for burners, oil and gas pipelines, automotive manufacturing facilities, nuclear facilities, aircraft hangars, and turbine enclosures.
