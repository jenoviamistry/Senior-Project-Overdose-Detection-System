# Bathroom Emergency Detection System

A real-time embedded system designed to detect potential overdose incidents in private restrooms and discreetly notify staff. The project integrates multiple subsystems to ensure timely alerts while maintaining user privacy.

## Project Overview

The system consists of the following key components:

- **Door Sensor Subsystem (developed by Jenovia Mistry)**  
  Monitors door open/close status using a reed switch. Built using bare-metal programming on an STM32F0 microcontroller, this subsystem includes direct register-level control and structured SPI communication with an RF transceiver to transmit door state updates.

- **Pager Notification Subsystem**  
  Receives wireless alerts and silently notifies staff through a vibration or sound mechanism. This allows discrete response without drawing public attention.

- **Alert Logic Controller**  
  Manages emergency conditions based on door activity and elapsed time. Triggers escalation if a door remains closed beyond a defined threshold.

- **Main MCU Coordination Unit**  
  Acts as the central hub, coordinating messages and states across subsystems, and handling system-wide behavior logic.

## Repository Structure

Each subsystem is organized into its own directory and uses [PlatformIO](https://platformio.org/) for independent development and deployment.

> Note: PlatformIO must be run within the specific subsystem folder. Top-level builds are not supported.

## Development Modes

- **Hardware Abstraction Layer (HAL):**  
  Uses STM32 HAL drivers to simplify peripheral initialization. Recommended for rapid development or fallback debugging.

- **Bare-Metal Programming (used for the door sensor):**  
  Direct manipulation of peripheral registers for full hardware control, minimal overhead, and maximum transparency. This mode was used to implement the door sensor's SPI-based RF transmission logic.

## Purpose

This project was developed as part of the ECE 49022 senior design course at Purdue University in collaboration with a local health center. The goal is to reduce response time to potential overdose events by enabling non-invasive, real-time monitoring.
