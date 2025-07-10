# Fire-Detection-System--with-custom-Arduino
# 🔥 Fire Detection System using Arduino

This project is a basic fire detection and alert system built with Arduino Uno, a flame sensor, LED, and buzzer. When fire is detected, the system activates a buzzer and LED as warning signals. 

## ⚙️ Components Used
- Arduino Uno
- Flame Sensor (Digital)
- LED
- Buzzer
- Jumper Wires
- Breadboard

## 🔌 Circuit Diagram
- Flame sensor: D2 (digital input)
- LED: D8 (output)
- Buzzer: D9 (output)

## 🧠 Code Overview

```cpp
#define FLAME_SENSOR_PIN 2
#define LED_PIN 8
#define BUZZER_PIN 9

void setup() {
  pinMode(FLAME_SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int flameDetected = digitalRead(FLAME_SENSOR_PIN);

  Serial.print("Sensor Value: ");
  Serial.println(flameDetected);

  if (flameDetected == LOW) { // Fire detected
    Serial.println("🔥 Fire Detected!");
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    Serial.println("✅ No Fire Detected");
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(200);
}
