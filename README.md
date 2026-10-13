
# ESP32 Environmental Monitoring System

A simulation-based embedded systems project that monitors
temperature and humidity using an ESP32 and DHT22 sensor.
The system generates an LED alert when the temperature
exceeds a predefined threshold.

## Project Overview

Environmental monitoring is important in applications
such as storage facilities, laboratories, industrial
environments, and smart buildings.

This project demonstrates sensor interfacing, embedded
C++ programming, GPIO control, serial communication,
and threshold-based alert generation.

## Objectives

- Measure temperature and relative humidity.
- Display sensor readings using the Serial Monitor.
- Detect temperatures above 30 degrees Celsius.
- Activate an LED as a high-temperature warning.
- Handle invalid sensor readings.
- Validate system behavior through simulation.

## Components Used

- ESP32 DevKit
- DHT22 temperature and humidity sensor
- Red LED
- 220-ohm current-limiting resistor
- Virtual breadboard and connecting wires

## Software and Tools

- Wokwi online simulator
- Arduino framework
- Embedded C++
- GitHub for version control and documentation

## System Architecture

DHT22 Sensor
     |
     v
ESP32 Microcontroller
     |
     v
Temperature Threshold Comparison
     |
     v
LED Alert

The ESP32 also sends temperature and humidity readings
to the Serial Monitor.

## Pin Configuration

| Component | ESP32 Pin |
|-----------|-----------|
| DHT22 VCC | 3V3 |
| DHT22 DATA | GPIO 15 |
| DHT22 GND | GND |
| Alert LED | GPIO 2 through 220-ohm resistor |

## Working Principle

1. The ESP32 initializes the DHT22 sensor and LED.
2. Temperature and humidity are read every two seconds.
3. The readings are displayed on the Serial Monitor.
4. If temperature exceeds 30 degrees Celsius,
   the LED turns on.
5. Otherwise, the LED remains off.
6. Invalid readings generate an error message.

## Simulation

Run the project online:

[Open ESP32 Simulation](https://wokwi.com/projects/477781622893071361)

## Testing and Validation

Test the system under these conditions:

- 25 degrees Celsius: LED OFF
- 30 degrees Celsius: LED OFF
- 35 degrees Celsius: LED ON
- Temperature reduced below the threshold: LED OFF

Record the actual results obtained during simulation.

## Project Limitations

- The project has been evaluated in simulation only.
- Physical hardware testing has not been performed.
- The alert uses a fixed temperature threshold.
- The system does not currently store historical readings.

## Future Enhancements

- Add humidity-based alerts.
- Implement FreeRTOS tasks.
- Add MQTT-based remote monitoring.
- Develop a graphical dashboard.
- Add data logging and fault diagnostics.

## Learning Outcomes

- Embedded C++ programming
- ESP32 GPIO configuration
- Sensor interfacing
- Serial debugging
- Conditional control logic
- Simulation-based testing
- GitHub project documentation

## Author

Sujetha S

Electronics and Instrumentation Engineering

