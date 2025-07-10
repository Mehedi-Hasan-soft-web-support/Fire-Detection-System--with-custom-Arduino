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

  // Assuming LOW = fire detected
  if (flameDetected == LOW) {
    Serial.println("Fire Detected!");
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);  // Buzzer ON continuously
  } else {
    Serial.println("No Fire Detected");
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);   // Buzzer OFF
  }

  delay(200); // Delay to avoid flooding serial monitor
}
