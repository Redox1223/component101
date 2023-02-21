# Joystick Module

- The Analog joystick is similar to two potentiometers connected together,one for the Vertical movement (Y-axis) and other for the horizontal movement(X-axis).
- The joystick also comes with a Select Switch.
- It can be very handy for retro gaming,robot control or RC cars.
- So let's ubderstand how it works!
![Joystick Module](IMG/dsc09428.jpg)
  
## Basics

- The Arduino Uno or any other Arduino board that uses Atmega328 as the Microcontroller has ADC resolution of 10 bits.
- Hence the values on the each analog channel can vary from 0 to 1023.
- Now connecting the VRx to A0 and VRy to A1 analog input respectively should show values as shown in the image below.
![Joy Diagram](IMG/Joy_diagram.jpeg)

- The home position for the stick is at (X,Y:511,511).
- If the stick is moved on X axis from one end to the other,the X values will changes from 0 to 1023 and similar thing happens when moved along the Y axis.
- On the same lines you can read position of the stick anywhere in upper half hemisphere from combination of these values.

## Hookup

![Circuit Diagram](IMG/0_Joystick_with_Arduino_bb.png)
