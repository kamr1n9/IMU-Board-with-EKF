## IMU-Board-with-EKF
# Overview

This project is a custom-designed IMU board based on the STM32 platform, focused on real-time state estimation using an Extended Kalman Filter (EKF).

The system fuses sensor data from multiple IMUs to estimate orientation and motion states with high accuracy. It is designed as part of a larger flight controller / robotics system.

# Features
- STM32-based embedded system (HAL / bare-metal compatible)
- SPI-connected IMU sensors (e.g. LSM6DSVTR)
- Real-time sensor data acquisition
- Extended Kalman Filter (EKF) implementation
- Orientation estimation (roll, pitch, yaw)
- MicroSD logging (SPI / SDIO)
- Modular firmware structure (ready for integration into flight controllers)

# System Archtitecture:
<img width="627" height="543" alt="image" src="https://github.com/user-attachments/assets/227cc384-2a96-45d6-9837-726f5f2b4109" />

- MCU: STM32F405RGT6
- IMUs: 2× SPI-connected IMUs
- Storage: MicroSD
Power:
- 5V input (USB-C)
- Buck converter → 5V rail
- LDO → 3.3V sensor rail
- Interfaces:
- SPI (IMUs, SD)
- USB (debug / data)
- GPS (optional expansion)

# State Estimation (EKF)

This project implements an Extended Kalman Filter (EKF) for sensor fusion.

Inputs:
- Accelerometer data
- Gyroscope data
- Timestamp
