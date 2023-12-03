# IOT BASED FAN SPEED AND RELAY CONTROLLER
## Components Required
- NodeMCU ESP 8266 [1 Unit 5 Volt ]
- Relay Module (2 Channel) [3.3 - 5 Volt]
- Servo Motor SG90 [1 Unit 3 Volt]
- Fan Regulator [1 Unit 240 Volt]
- AC LED bulb [2 Unit 240 Volt]
- Jumper wire [7 Piece]
- Bulb Holder [2 Unit AC Bulb]
- Twin wire [4 Feet]
## The IoT-Based Fan & Relay Controller project is a low-cost wireless system. It specifically focuses on the development of an IOT-based home automation system.
# Project Report
- https://docs.google.com/document/d/1_J9Gehi3r3zFgDahSHSiQXNw3msMjH7H/edit?usp=sharing&ouid=105416064584751078665&rtpof=true&sd=true

# Servo and Relay Control with Blynk

#### Overview

This Arduino sketch, designed for the ESP8266 microcontroller, allows you to control a servo motor and two relay modules remotely using the Blynk IoT platform. The servo motor position is controlled through Blynk app slider (V0), and the two relays are controlled via Blynk buttons (V2 and V3).

#### Blynk Setup

1. **Blynk Template and Device Name:**
   - The code is configured to connect to the Blynk IoT platform using a specific template ID (`BLYNK_TEMPLATE_ID`) and a device name (`BLYNK_DEVICE_NAME`).

2. **Blynk Server Connection:**
   - The Blynk server is set up with the authentication token (`BLYNK_AUTH_TOKEN`), and the connection is established using the `BlynkSimpleEsp8266` library.

#### Pin Definitions

3. **Pin Definitions:**
   - The ESP8266 pins for relay control (`relay1` and `relay2`) and the servo motor (`D0`) are defined at the beginning of the code.

#### Servo Control

4. **Servo Control (BLYNK_WRITE(V0)):**
   - Blynk app slider (V0) is linked to control the position of the servo motor.
   - The servo motor angle is set based on the value received from the Blynk app.
   - The current servo position is sent back to the app for display (V1).

#### Relay Control

5. **Relay Module 1 Control (BLYNK_WRITE(V2)):**
   - Blynk app button (V2) is linked to control the first relay module (`relay1`).
   - When the button is turned on (1), `relay1` is activated (LOW), and when turned off (0), `relay1` is deactivated (HIGH).

6. **Relay Module 2 Control (BLYNK_WRITE(V3)):**
   - Blynk app button (V3) is linked to control the second relay module (`relay2`).
   - Similar to the first relay, it is activated or deactivated based on the button state.

#### WiFi Setup

7. **WiFi Credentials:**
   - The WiFi credentials (SSID and password) are specified to connect the ESP8266 to the local network.

#### Setup and Loop

8. **Setup Function:**
   - The `setup` function initializes the serial communication, sets up pins, attaches the servo, and connects to the Blynk server.

9. **Loop Function:**
   - The `loop` function runs repeatedly and is responsible for handling Blynk communication (`Blynk.run()`).

#### Usage

1. Connect your ESP8266 to the appropriate pins for the servo and relay modules.
2. Update the WiFi credentials, Blynk authentication token, and any other parameters as needed.
3. Upload the sketch to your ESP8266 board.
4. Open the Serial Monitor to view debug information.
5. Run the Blynk app, and control the servo motor and relay modules remotely.

#### How to Contribute

1. Fork the repository.
2. Create a branch: `git checkout -b feature/new-feature`.
3. Make changes and commit: `git commit -m 'Add new feature'`.
4. Push to the branch: `git push origin feature/new-feature`.
5. Create a pull request.

#### License

This project is licensed under the [MIT License](LICENSE).

Feel free to customize this template according to your specific project details and requirements.
