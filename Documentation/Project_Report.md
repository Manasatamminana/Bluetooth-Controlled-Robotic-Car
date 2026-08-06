# Bluetooth Controlled Robotic Car Using Arduino UNO

## Project Overview

The Bluetooth Controlled Robotic Car is an embedded systems project designed to control a robotic vehicle wirelessly using an Android smartphone. The system uses an HC-05 Bluetooth module to establish communication between the smartphone and the Arduino UNO. Based on the received commands, the Arduino controls the motors through an L298N motor driver module.

This project demonstrates the practical implementation of embedded systems, wireless communication, and motor control.

---

## Objectives

- Develop a Bluetooth-controlled robotic vehicle.
- Implement wireless communication using the HC-05 Bluetooth module.
- Interface Arduino UNO with an L298N motor driver.
- Control the movement of DC motors using serial commands.
- Gain hands-on experience in embedded system design.

---

## Components Used

| Component | Quantity |
|-----------|----------|
| Arduino UNO | 1 |
| HC-05 Bluetooth Module | 1 |
| L298N Motor Driver | 1 |
| DC Gear Motors | 2 |
| Robot Chassis | 1 |
| Wheels | 2 |
| Battery Pack | 1 |
| Jumper Wires | As Required |

---

## Software Requirements

- Arduino IDE
- Embedded C
- Android Bluetooth Controller Application

---

## System Architecture

```
Android Mobile
      │
Bluetooth Communication
      │
HC-05 Bluetooth Module
      │
Arduino UNO
      │
L298N Motor Driver
      │
DC Motors
      │
Robot Movement
```

---

## Working Principle

1. The Android smartphone is paired with the HC-05 Bluetooth module.
2. The user sends movement commands using a Bluetooth controller application.
3. The HC-05 module receives the commands and forwards them to the Arduino UNO.
4. Arduino processes the received command.
5. The Arduino controls the L298N motor driver.
6. The motor driver powers the DC motors to move the robot accordingly.

---

## Bluetooth Commands

| Command | Function |
|----------|----------|
| F | Move Forward |
| B | Move Backward |
| L | Turn Left |
| R | Turn Right |
| S | Stop |

---

## Pin Connections

### Arduino to L298N

| Arduino Pin | L298N Pin |
|--------------|-----------|
| D5 | ENA |
| D8 | IN1 |
| D9 | IN2 |
| D6 | ENB |
| D10 | IN3 |
| D11 | IN4 |

### HC-05 to Arduino

| HC-05 Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TXD | RX (Pin 0) |
| RXD | TX (Pin 1) |

---

## Features

- Wireless Bluetooth Control
- Forward Movement
- Backward Movement
- Left Turn
- Right Turn
- Stop Function
- Easy to Operate
- Low Cost
- Simple Hardware Design

---

## Applications

- Robotics Projects
- Educational Demonstrations
- Wireless Vehicle Control
- Automation Systems
- Embedded Systems Learning

---

## Advantages

- Wireless operation
- Easy to assemble
- Cost-effective
- Simple programming
- Expandable for future enhancements

---

## Future Enhancements

- Obstacle Avoidance using Ultrasonic Sensor
- Voice Control
- Wi-Fi Control using ESP32
- Camera Integration
- Line Following Robot
- IoT-Based Monitoring

---

## Learning Outcomes

Through this project, the following concepts were learned:

- Arduino Programming
- Embedded C Programming
- Bluetooth Communication
- Motor Driver Interfacing
- Serial Communication
- Hardware Integration
- Embedded System Development

---

## Conclusion

The Bluetooth Controlled Robotic Car was successfully designed and developed using Arduino UNO, HC-05 Bluetooth Module, and L298N Motor Driver. The project demonstrates reliable wireless communication and motor control while providing practical exposure to embedded systems and hardware interfacing. It serves as a strong foundation for developing advanced robotic and IoT-based applications.

---

## Author

**Tamminana Manasa**

B.Tech – Electronics and Communication Engineering

Rajiv Gandhi University of Knowledge Technologies (RGUKT)
