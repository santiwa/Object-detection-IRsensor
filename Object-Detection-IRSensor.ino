/*Name: Tiwari Ramesh Sanjana
Date: 1-4-2024
Title: Implementation of Object Detection using IR Sensor
Description: An IR sensor is used to sense the presence of object
within it's sensing range. LED connected to the board glows upon
detection of object, and a buzzer beeps for increased security. 
*/

int irSensor = 9; // IR sensor pin
int buzzerPin = 10; // Buzzer pin
int ledPin = 8; // LED pin

void setup() {
  Serial.begin(9600);
  pinMode(irSensor, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = digitalRead(irSensor);

  if (value == 1) { // Value = 1, object detected 
    digitalWrite(buzzerPin, HIGH);
    Serial.print("Sensor value: ");
    Serial.println(value);
    Serial.println("Object Detected!");
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
  }
  else  {
    digitalWrite(buzzerPin, LOW);
    Serial.print("Sensor value: ");
    Serial.println(value);
    Serial.println("Object Not Detected.");
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }

  delay(100);
}
