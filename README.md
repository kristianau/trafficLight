# Traffic Light

![Traffic Light](traffic_light.jpg)

## Description

The Traffic Light project is a small implementation of a traffic light using an Arduino Nano microcontroller. It consists of three LEDs: red, yellow, and green, and a button for user interaction. The program code is written using the Arduino framework (C++).

The traffic light starts in the red state, with only the red LED turned on. When the user presses the button, the lights transition in a manner similar to a typical traffic light sequence:

1. Red LED turns off.
2. Yellow LED turns on briefly.
3. Yellow LED turns off.
4. Green LED turns on.

At this point, the traffic light is displaying the green signal. If the user presses the button again, the lights transition as follows:

1. Green LED turns off.
2. Yellow LED turns on briefly.
3. Yellow LED turns off.
4. Red LED turns on.

Now the traffic light is back to the red state.

## Features

- Simulates a traffic light sequence with three LEDs: red, yellow, and green.
- User interaction through a button to switch between red and green states.
- Smooth transitions between different states of the traffic light.

## Prerequisites

- Arduino Nano microcontroller
- Breadboard
- LEDs (red, yellow, green) 0.02 A
- Button (I used 10 k&Omega resistor with my button)
- Resistors (I used 330 &Omega for red and yellow LEDs, 220 &Omega for green LED)
- Jumper wires
