# Bathroom Emergency Detection System

A real-time embedded system designed to detect potential overdose incidents in private restrooms and discreetly notify staff. The project integrates multiple subsystems to ensure timely alerts while maintaining user privacy.

## Project Overview

The system consists of the following key components:

- **Door Sensor Subsystem (designed and implemented by Jenovia Mistry)**  
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

- **Bare-Metal Programming** *(used throughout the final system)*  
  All firmware was implemented using direct register-level STM32 programming to achieve maximum transparency, full hardware control, and minimal overhead. This was especially critical for the door sensor’s SPI-based LoRa transmission and power-efficient event handling.

> Note: STM32 HAL drivers were considered during early prototyping but were not used in the final design to maintain full control and reduce overhead.


## Purpose

This project was developed as part of the ECE 49022 senior design course at Purdue University in collaboration with the Damien Center — Indiana’s largest HIV services and harm reduction nonprofit. The goal was to create a cost-effective, real-time monitoring system for single-stall restrooms that could detect potential overdose, collapse, or medical emergencies and discreetly notify staff.

The system aims to:

- **Reduce emergency response time** by detecting prolonged occupancy and triggering timely alerts to staff.
- **Protect user privacy** by avoiding intrusive sensors like cameras or microphones.
- **Support manual override and escalation**, including both emergency and reset buttons for user-initiated alerts or cancellations.
- **Ensure accurate, location-specific alerts** by embedding bathroom IDs in all messages sent to staff pagers.
- **Improve public health outcomes**, particularly in high-risk environments like harm reduction clinics and healthcare facilities.
- **Respect accessibility and inclusivity**, accommodating users with varied physical and cognitive abilities.

This solution was designed with global scalability and regulatory compliance in mind, supporting integration into existing systems while being durable, low-maintenance, and moisture-resistant for bathroom deployment.

All system requirements, engineering decisions, and validations were formally documented in a multi-stage design process. This includes:

- **Design Document 1–3**: Requirements gathering, subsystem planning, implementation, and testing strategies.
- **Final ABET Report**: A comprehensive summary of engineering practices, constraints, tradeoffs, testing, and ethical/social/environmental considerations.

