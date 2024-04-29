# DAC-Interfacing-and-DC-Power-Supply-Design-using-8051-Microcontroller



This project involves interfacing with a Digital-to-Analog Converter (DAC) circuit using Pulse Width Modulation (PWM) signals on an 8051 microcontroller. The objective is to generate PWM signals, observe their effects on DC voltage and LED brightness, design basic and advanced DC power supplies, and generate waveforms using the DAC circuit.

## Overview

The project comprises several tasks:

1. **PWM Signal Generation and Observation**
   - Write a function to generate a PWM signal on pin P21 of the 8051 microcontroller based on a 0-100 input.
   - Observe the PWM signal with a logic analyzer or oscilloscope.
   - Check the DC voltage variation on DAC1 and observe LED DA1 brightness changes.

2. **ADC Reading and Display**
   - Close J52 jumper to supply DAC-generated DC voltage to ADC's AIN3 input.
   - Read and display DAC voltage on an LCD.

3. **Basic DC Power Supply Design**
   - Use keys K1 and K2 to decrease/increase PWM duty cycle, respectively.
   - Display DAC output voltage on LCD and voltmeter, creating a basic DC power supply.

4. **Advanced DC Power Supply Design**
   - Utilize the keypad to input voltages from 0-5 volts (including decimals).
   - Ensure DAC output matches the entered voltage, cautioning against heavy loads.

5. **Waveform Generator**
   - Generate sine and sawtooth waveforms using the DAC circuit.
   - Display generated waveforms on an oscilloscope.

## Requirements

- 8051 microcontroller

- Logic analyzer or oscilloscope
- Voltmeter
- LCD display

## Setup

1. Build the LM358-based low pass filter circuit to convert PWM to DC voltage.
2. Connect the 8051 microcontroller and necessary components as per the project requirements.

## Usage

1. Run the code on the 8051 microcontroller to generate PWM signals and observe their effects.
2. Experiment with key controls to manipulate PWM duty cycles and DAC output.
3. Utilize the keypad for advanced voltage settings and waveform generation.

## Caution

- Be mindful of the circuit's current capabilities, especially when connecting loads.
- Use appropriate safety measures when working with electrical components.

## Conclusion

By following the steps outlined in this README and the provided code for the 8051 microcontroller, you can explore DAC interfacing, PWM signal generation, DC voltage control, and waveform generation using an 8051 microcontroller and LM358-based circuitry.
