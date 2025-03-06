# Spectacles for Blind People

## Overview
This project aims to develop **smart spectacles** for blind people using **ultrasonic sensors, voice feedback, and obstacle detection** technology. These spectacles assist visually impaired individuals in navigating their surroundings safely by providing **real-time alerts** through **voice output**.

## Features
- **Obstacle Detection:** Uses ultrasonic sensors to detect obstacles in front of the user.
- **Voice Feedback:** Notifies the user about obstacles via a speaker or earphones.
- **GPS Integration (Optional):** Helps in navigation and location tracking.
- **Emergency Alert System:** Sends an SOS message in case of emergencies.
- **Rechargeable Battery:** Ensures long-term usage.

## Hardware Requirements
- **Arduino/ESP32 Microcontroller**
- **Ultrasonic Sensors (HC-SR04)**
- **Speaker or Buzzer**
- **Bluetooth Module (HC-05, Optional for voice assistant integration)**
- **Rechargeable Battery Pack**
- **3D-Printed Frame (for mounting components on spectacles)**

## Software Requirements
- **Arduino IDE** (for coding and uploading firmware)
- **Text-to-Speech Module** (for converting alerts into voice feedback)
- **GPS Tracking Software (Optional)**
- **Android App (Optional for advanced navigation features)**

## Working Principle
1. **Ultrasonic Sensors** continuously scan the front area for obstacles.
2. If an obstacle is detected within a specific range:
   - The system triggers **voice feedback** to warn the user.
   - A **buzzer** or **vibration motor** can also be activated for additional alerting.
3. **GPS Integration** (if implemented) provides real-time location tracking.
4. In case of an emergency, an **SOS message** can be sent to pre-set contacts.

## Installation & Setup
1. **Assemble the Spectacles:** Attach the hardware components to a 3D-printed frame.
2. **Connect Sensors & Modules** to the microcontroller as per the circuit diagram.
3. **Upload the Code** using the Arduino IDE.
4. **Test Obstacle Detection** and verify voice output.
5. (Optional) **Integrate GPS & Bluetooth** for enhanced features.

## Future Enhancements
- **AI-based Object Recognition:** Identify objects in real-time.
- **Cloud Connectivity:** Store and retrieve navigation data.
- **Voice Assistant Integration:** Allow users to interact via voice commands.
- **Machine Learning for Better Navigation:** Improve obstacle detection accuracy.

## Contributors
AADHITHYAA S G

## License
This project is open-source under the **MIT License**.
