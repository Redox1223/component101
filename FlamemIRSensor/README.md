# Flamem IR Sensor

- Fire Alarm System are very common in commericial building and factories,these devices usual contain a cluster of sensors that constantly monitors for any flame,gas or fire in the building and triggers an alarm if it detect any of these.
- One of the simplest way to detect fire is by using an IR Flame sensor.
- These sensors have an IR photodiode which is sensitive to IR light.
- Now, in the event of a fire,the fire will not only produce heat but will also emit IR rays.(Every burning flame will emit some level of IR light.These light is not visible to human eyes but our flame sensor can detect it and alert a microcontroller like arduino that a fire has been detected.)

## Flame Sensor

- A Flame Detector is a sensor designed to detect and respond to the presence of a flame fire.
- Responses to a detected flame depend on the installation but can include sounding an Alarm, detectivating a fuel line(such as a propane or a natural gas line),and activating a fire suppression system.
![Sensor](IMG/Fire-or-flame-sensor-module.jpg)

- There are different type of flame detection methods.Some of them are Ultraviolet detector,near IR array detector,imfrared(IR) detector,Infrared thermal cameras,UV/IR detector etc.
- When fire burns it emits a small amount of infra-red light,this light will be received by the photodiode(IR receiver) on the sensor module.
- Then we use an OP-Amp to check for a change in voltage across the IR Receiver,so that if a fire is detected the output pin (DO) will give 0V(LOW),and if the is no fire the output pin will be 5V (HIGH).
- This Sensor can detect infrared light with a wavelength ranging from 700nm to 1000nm and its detection angle is about 60`.
- This flame sensor module consists of a photodiode (IR receiver), resistor, capacitor,potentiometer and LM393 comparator in an integrated circuit.
- The sensitivity can be adjusted by varying the onboard potentiometer.
- Working voltage is between 3.3V and 5V DC,with a digital output.
- A logic high on the output indicates the presense of flame or fire.
- A logic low on output indicates the absence of flame or fire.

## Below is the Pin Description of the Flame sensor Module

- VCC-->3.3V-5V power supply
- GND-->Ground
- Dout-->Digital output

## Application of flame sensor

- Hydrogen stations
- Combustion monitor for burners
- Oil and gas pipelines
- Automotive manufacturing facilities
- Nuclear facilities
- Aircraft hangars
- Turbine enclosures

## Circuit Diagram

![Circuit Diagram](IMG/Circuit-Diagram-for-Flame-Sensor-Interfacing-with-Arduino.png)
