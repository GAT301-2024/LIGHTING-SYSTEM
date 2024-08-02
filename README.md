# LIGHTING-SYSTEM
ATOO NORBERT 23/U/2202/GIM/PS

LDR-Controlled LED Project

This project demonstrates how to control an LED using a Light Dependent Resistor (LDR) with an ESP32 microcontroller. The LED will turn on when the light level detected by the LDR is below a specified threshold and turn off when the light level is above the threshold.

Hardware Requirements

ESP32 microcontroller
LDR (Light Dependent Resistor)
LED
Resistors (for LDR and LED)
Breadboard and jumper wires
Circuit Diagram
Connect the LDR to the analog pin GPIO34 of the ESP32.
Connect the LED to the digital pin GPIO23 of the ESP32.
Use appropriate resistors for the LDR and LED to protect the components.
Software Requirements
Arduino IDE with ESP32 board support installed
Pin Configuration
ldrPin: Analog pin connected to LDR (GPIO34)
ledPin: Digital pin connected to LED (GPIO23)
Threshold Configuration
lightThreshold: The light level threshold to control the LED. Adjust this value based on your needs.

Installation

Connect the hardware components as described in the circuit diagram.
Open the Arduino IDE and ensure the ESP32 board support is installed.
Copy the code into a new sketch in the Arduino IDE.
Select the appropriate board and port from the Tools menu.
Upload the code to the ESP32.
Usage
Open the Serial Monitor in the Arduino IDE (set the baud rate to 115200).
Observe the light level readings printed in the Serial Monitor.
Adjust the lightThreshold value in the code to fine-tune the LED control based on the ambient light conditions.
Contributing


