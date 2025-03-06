#include <Wire.h>
#include <SoftwareSerial.h>

#define TRIG_PIN 9
#define ECHO_PIN 10
#define BUZZER_PIN 5

SoftwareSerial bluetooth(2, 3); // RX, TX for Bluetooth module (Optional)

void setup() {
    Serial.begin(9600);
    bluetooth.begin(9600);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
    long duration;
    int distance;

    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    duration = pulseIn(ECHO_PIN, HIGH);
    distance = duration * 0.034 / 2; // Convert to cm

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance > 0 && distance < 50) { // If an obstacle is within 50 cm
        digitalWrite(BUZZER_PIN, HIGH);
        bluetooth.println("Obstacle detected at " + String(distance) + " cm!");
    } else {
        digitalWrite(BUZZER_PIN, LOW);
    }

    delay(500);
}
