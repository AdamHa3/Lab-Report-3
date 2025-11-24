/*
   This program reads the analog value on A0. If the value is under 512,
   some LEDs turn ON. If it's above 512, the other LEDs turn ON instead.
*/

int sensorPin = A0;

void setup() {
  // Start the Serial Monitor
  Serial.begin(9600);

c:\Users\adamh\OneDrive\sketch_sep29b  // Set all the LED pins as outputs
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // Read the sensor value (0–1023)
  int sensorValue = analogRead(sensorPin);

  // Show the value for testing
  Serial.print("sensorValue = ");
  Serial.println(sensorValue);

  // If the value is lower than halfway (512)
  if (sensorValue < 512) {
    // Turn ON the first group of LEDs
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);

    // Turn OFF the other group
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  } 0
  else {
    // Turn OFF the first group
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);

    // Turn ON the second group
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
  }
}
