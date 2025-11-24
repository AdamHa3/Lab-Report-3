/*
   Blink an LED without using delay().
   This lets the LED blink while the rest of the program keeps running.
*/

const int ledPin = LED_BUILTIN;  // On-board LED pin

int ledState = LOW;              // Current LED state
unsigned long previousMillis = 0; // Last time the LED changed state
const long interval = 1000;       // Blink speed in milliseconds

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Get the time since the Arduino started running
  unsigned long currentMillis = millis();

  // Check if it's time to toggle the LED
  if (currentMillis - previousMillis >= interval) {

    // Update the timestamp
    previousMillis = currentMillis;

    // Flip the LED state
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // Apply the new LED state
    digitalWrite(ledPin, ledState);
  }

  // Other code can still run here without being blocked
}

