# Ultrasonic Distance Sensor
- The HC-SR04 is an affordable and easy to use distance measuring sensor which has a range from 2cm to 400cm (about an inch to 13 feet)
- The sensor is composed of two ultrasonic transducers.
- One is transmitter which outputs ultrasonic sound pulses and other is receiver which listens for reflected waves.
- It's basically a SONAR which is used in submarines for detecting underwater object.
<img src="IMG\HC-SR04-Ultrasonic-Sensor-Arduino-Tutorial-768x432.png">
<br>
<table>
<tr>
<th>Operating Voltage</th>
<td>5V DC</td>
</tr>
<tr>
<th>Operating Current</th>
<td>15mA</td>
</tr>
<tr>
<th>Operating Frequency</th>
<td>5V DC</td>
</tr>
<tr>
<th>Min Range</th>
<td>2cm/1 inch</td>
</tr>
<tr>
<th>Max Range</th>
<td>400cm/13 feet</td>
</tr>
<tr>
<th>Accuracy</th>
<td>3mm</td>
</tr>
<tr>
<th>Measuring Angle</th>
<td>15`</td>
</tr>
<tr>
<th>Dimension</th>
<td>45 x 20 x 15mm</td>
</tr>
</table>
<br>
 
## HC-SR04 Ultrasonic Sensor Pinout
<img src="IMG\HC-SR04-Ultrasonic-Sensor-Pinout.png">

- VCC- 5V
- GND -GND
- Trig- pin9
- Echo- pin10
- Using the Trig we sent the ultrasound wave from the transmitter and with the Echo pin we listen for the reflected signal.
## How the HC-SR04 Ultrasonic Distance Sensor Works?
- It emits an ultrasound at 40000Hz which travels through the air and if there is an object or obstacle on its path it will bounce back to the module.
- Considering the travel time and the speed of the sound you can calculate the distance.
<img src="IMG\How-Ultrasonic-Sensor-Working-Principle-Explained-768x394.png">
- In order to generate the Ultrasound we need to set the Trig pin on a High Stage for 10 microsecond.
- That will send out an 8 cycle ultrasonic burst which will travel at the speed of sound.
- The Echo pins goes high right away after that 8 cycle ultrasonic burst is sent,and it starts listining or waiting for that wave to be reflected from an object.
- If there is no object or reflected pulse,the Echo pin will time-out after 38ms and get back to low state.
<img src="IMG\Ultrasonic-Sensor-Diagram.png">
- If we receive a reflected pulse,the Echo pin will go down sooner than those 38ms.
- According to the amount of time the Echo pin was HIGH, we can determine the distance the sound wave traveled,thus the distance from the sensor to the object.

## How to Connect HC-SR04 Ultrasonic Sensor to Arduino
<img src="IMG\HC-SR04-Ultrasonic-Sensor-Arduino-Connection-Wiring-1024x580.png">

- The Ground and the VCC pins of the module needs to be connected to the Ground and the 5V pins on the arduino board respectively and the trig and echo pins to any Digital I/O pin on the Arduino board.