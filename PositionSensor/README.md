# C0013-Position sensor

## How to connect Position Sensor to a Circuit

- Position sensors can be connected to a circuit in different ways depending on the specific sensor being used and the application it is being used for.
- In general, most position sensors will have at least two connections, which are typically power and ground.
The output of the sensor may be analog or digital, depending on the type of sensor used.
-Wiring a Linear Potentiometer Position Sensor
A linear potentiometer position sensor is a type of variable resistor that changes resistance as the object being measured moves linearly.

## Image

![IMG](IMG/IMG.jpeg)

## To connect a linear potentiometer position sensor to an Arduino circuit, follow the steps below

### Linear Potentiometer Position Sensor Circuit Diagram

- Connect the GND pin on the linear potentiometer to the GND pin on the Arduino.
- Connect the VCC pin on the linear potentiometer to the 5V pin on the Arduino.
- Connect the wiper pin on the linear potentiometer to an analog input pin on the Arduino (e.g., A0).
- Add a 10k resistor between the wiper pin and the VCC pin on the potentiometer to create a voltage divider.
- Upload the code to the Arduino that will read the analog voltage on the analog input pin and convert it to a position measurement.
- Wiring a Rotary Encoder Position Sensor
A rotary encoder position sensor is a type of sensor that measures the rotation of an object.

## To connect a rotary encoder position sensor to an Arduino circuit, follow the steps below

- Rotary Encoder Position Sensor Circuit Diagram
- pin 1 = Vdd - 5v dc
- pin 2 = Ground
- pin 3 = _SS, is a 5v tolerant digital input
- pin 4 = SCLK, is a 5v tolerant digital input
- pin 5 = MOSI, is a 5v tolerant digital input/output
- pin 6 = Ground
- pin 7 = Vdig
- pin 8 = Ground
- note: pin 1 and pin 7 connect with Ground with capacitor.
 This is a basic circuit diagram and the actual connections may vary depending on the specific sensor being used and the application it is being used for.

- Always refer to the datasheet or manufacturer's instructions for the correct wiring and usage of the sensor.
