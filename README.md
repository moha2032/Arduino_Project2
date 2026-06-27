# Arduino 7-Segment Display Countdown

This project is a hardware-focused extension of the core embedded programming fundamentals. It features an Arduino Uno program that controls a single-digit 7-segment display to run a visual countdown sequence from 9 down to 0.

## What This Program Does
- Initializes 7 digital pins as outputs to drive the individual LED segments.
- Uses array lookup or logical control to switch specific pins HIGH or LOW to correctly illuminate the numbers 9 through 0.
- Implements a timed loop that decrements the count value every 1000 milliseconds (1 second).
- Halts or loops cleanly once the countdown hits zero.

## Concepts Demonstrated
- Digital Outputs: Multi-pin configuration (`pinMode` and `digitalWrite`) to control individual LED segments.
- Data Structures/Loops: Managing loop counters effectively to walk downward through a sequential numeric range.
- Hardware Mapping: Translating software integer values into specific hardware pin states.

## How to Run It
1. Open the .ino file in the Arduino IDE.
2. Connect your Arduino Uno to your computer via USB.
3. Wire your 7-segment display to the Arduino digital pins using appropriate current-limiting resistors.
4. Select Tools > Board > Arduino Uno and pick the correct serial Port.
5. Upload the sketch and watch the display countdown!

## Author
- Alidu Mohammed Muhidden
- GCTU BCE Group B
