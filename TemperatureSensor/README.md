# C0003-Temperature sensor

## Introduction

- A temperature sensor is a type of sensor used to measure the temperature of an object or environment.
In Arduino, the temperature sensor converts the surrounding temperature to voltage, which is then converted into Fahrenheit and displayed on an LCD.

## Image

![Image](IMG/IMG.png)

## How to connect to a circuit

- Pin 1 of the temperature sensor is connected to DC 5V.
- Pin 2 is connected to any analog signal pin on the Arduino board.
- Pin 3 is connected to the GND pin on the board.
The theory behind the components
- The temperature sensor converts the surrounding temperature to voltage using a thermistor, which is a type of resistor that changes its resistance with temperature.
- As the temperature increases, the resistance of the thermistor decreases, which causes an increase in the voltage output of the sensor.
- This voltage output is then converted to Fahrenheit using a formula and displayed on an LCD.

## Features

- Temperature sensors can be used in various applications, such as weather monitoring, industrial processes, and home automation.
- They come in different types, such as thermistors, thermocouples, and RTDs, and can measure temperature ranges from -200 to 2000 degrees Celsius.

## Statistics

- The accuracy of temperature sensors depends on the type and model, with some having accuracies of ±0.1°C and others having accuracies of ±1.5°C.
- They also have a response time, which is the time it takes for the sensor to detect a change in temperature, and can range from milliseconds to several seconds
