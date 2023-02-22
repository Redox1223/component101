# Magnetic Feild Sensor

- Magnetic feild sensor are devices that detect and measure magnetic feild around permanent magnetic,current conductors, and electrical device.
- As the world becomes increasingly electrifeild, demand for imoproved positional and current sensing has grown in turn.
- The magnetic feild sensor is represented as a box connected to the ground and the 5V Pin of the arduino boardl.
- The sink is in fact a transistor that conducts when a magnetic is close to the sensor and does not if the magnet is far from it.
- It is connected through a chain of resistors to the 3.3V Arduino Pin.
![Magnetic Feild Sensor](IMG/MagneticFieldSensor.png)

- The Honeywell 2SS52M is a device that belongs to the class of digital magnetosistive sensor.
- It comes in a compact packege with three pins.(GND and VCC),while the third one is its "Output".
- The device is sensitive to magnetic field oriented such that they are parallel to the longest side of its package(the white arrow in the figure)
- Being the sensor Omnipolar, the orientation of magnetic feild doesn't matter:either south-north or north-south alignment triggers the device.
- when the external magnetic feild in given direction is strong enough, the device works as a sink for the current.
- There are,in fact , two kinds of sensors.
  - those whose output mode is source and those whose output mode is sink.
  - A source is a point from which current flows from the device
- A sink,on the contrary, is a point to which current flows.
- In order to operate a sink sensor,you need an external power supply to be connected to the sink through a resistor.
- If no magnetic feild is detected, the sink works as an open switch and current does not flow from the power supply to the device.
- When a magnetic feild is measured , instead the sink acts as a closed switch and some current flows from the external power supply to the device.
- According to the Ohm's Law, when a current I flow through a resistor,R the voltage drop accross it is V=RI.
- In order to tell if the device is sensing a magnetic feild,it is enought to measure V:if it is zero,no external magnetic feild is present(apart,of course,the earth's magnetic feild);
if a strong enough magnetic feild is placed close to the sensor you should be able to measure a voltage V
