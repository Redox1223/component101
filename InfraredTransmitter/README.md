# C0029-Infrared(IR) Transmitter

## Introduction

- Infrared (IR) communication systems are widely used in remote control applications. They typically consist of an IR transmitter and an IR receiver, which use an encoder and decoder to send and receive data. In this article, we'll take a closer look at the IR transmitter and receiver, the IR signal modulation technique, and the IR transmission protocols.

Image:
![IMG](IMG/IMG.png)

## How to connect to a circuit

- To connect a breakout board mounted IR receiver to an Arduino, simply connect the VCC and GND pins to the corresponding pins on the Arduino.
- The OUT pin should be connected to an input pin on the Arduino.

## The theory behind the components

- IR signal modulation is used to prevent ambient IR light noise from interfering with the IR signal. The modulated IR signal is a series of IR light pulses switched on and off at a high frequency known as the carrier frequency. The carrier frequency used by most transmitters is 38kHz, and the receiver diode has a band-pass filter to let through IR at that frequency. The IR transmission protocol defines the pattern in which the modulated IR signal is converted to binary. Each keypress on the remote generates a unique hexadecimal code, which the receiving microcontroller uses to decipher which key was pressed.

## Features

- IR transmitter produces light in the IR spectrum
- IR receiver converts IR light into an electrical signal
- IR signal modulation is used to prevent ambient IR light noise from interfering with the IR signal
- The carrier frequency used by most transmitters is 38kHz
- IR transmission protocol defines the pattern in which the modulated IR signal is converted to binary
- Each keypress on the remote generates a unique hexadecimal code

## Statistics

- Most transmitters use a carrier frequency of 38kHz
- The NEC protocol is the most common type in Arduino projects
- Different remotes send different codes for keypresses
