# C0004-Magnetic fields sensor

Magnetic field sensors are electronic devices that detect and measure magnetic fields around permanent magnets, current conductors, and electrical devices. As the world becomes increasingly electrified, there is a growing demand for improved positional and current sensing.

## Image

![Image](IMG/IMG.png)

## How to Connect to a Circuit

- To operate a sink sensor like the Honeywell 2SS52M, an external power supply should be connected to the sink through a resistor. When no magnetic field is detected, the sink works as an open switch and no current flows from the power supply to the device.  
- When a magnetic field is detected, the sink acts as a closed switch and some current flows from the external power supply to the device. To determine if the device is sensing a magnetic field, measure the voltage across the resistor. If it is zero, there is no external magnetic field present (apart from the Earth's magnetic field). If a strong enough magnetic field is placed close to the sensor, a voltage should be measurable.

## The Theory Behind the Components

- The Honeywell 2SS52M is a digital magnetoresistive sensor that detects magnetic fields oriented parallel to the longest side of its package (indicated by the white arrow on the device).
- The sensor is omnipolar, meaning that the orientation of the magnetic field doesn't matter – either a south-north or north-south alignment triggers the device. When the external magnetic field in a given direction is strong enough, the device works as a sink for current. Sink sensors have an output mode that is different from source sensors.
- To operate a sink sensor, an external power supply must be connected to the sink through a resistor.

## Features

- The Honeywell 2SS52M is a compact device with three pins – GND, VCC, and an output pin.
- It is highly sensitive to magnetic fields and can detect them even when they are weak.
- The sensor is compatible with a variety of electronic devices and can be used in many different applications, such as position sensing, current sensing, and rotational sensing.

## Statistics

Sensitivity: Magnetic fields sensor have a sensitivity rating, typically expressed in millivolts per Gauss (mV/G). This rating indicates how much the sensor's output voltage changes in response to changes in the magnetic field strength.

Operating Voltage: Magnetic fields sensor often work within a specific voltage range, such as 3.3V or 5V, depending on the module and manufacturer.

Output Type: Magnetic fields sensor typically provide a digital output (high or low) when a specific magnetic field threshold is reached. Some modules also offer analog output, providing a voltage proportional to the magnetic field strength.

Maximum Current: Magnetic fields sensor may have a maximum current rating for the load they can drive. This is important if you're using the sensor to control external devices.

Response Time: The response time of a Magnetic fields sensor is the time it takes to detect changes in the magnetic field and produce an output response. It is typically quite fast.

Hysteresis: Some Magnetic fields sensor exhibit hysteresis, meaning they may have slightly different output values for the same magnetic field strength depending on whether the magnetic field is increasing or decreasing.

Operating Temperature Range: The sensor's performance can be influenced by temperature, so it's important to consider the operating temperature range if you plan to use it in extreme conditions.

Mounting Options: Depending on the module, Magnetic fields sensor may come in various shapes and sizes, with different mounting options.
