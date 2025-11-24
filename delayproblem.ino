/*
   Blink an LED without using delay().
   This lets the LED blink while the rest of the program keeps running.
*/

const int ledPin = LED_BUILTIN;   // The pin connected to the built-in LED

int ledState = LOW;               // Keeps track of whether the LED is ON or OFF
unsigned long previousMillis = 0; // Stores the last time the LED changed
const long interval = 1000;       // How long to wait before toggling the LED (1 second)

void setup() {
  // Set the LED pin as an output so we can control it
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Get the number of milliseconds since the Arduino started running
  unsigned long currentMillis = millis();

  // Check if enough time has passed to change the LED state
  if (currentMillis - previousMillis >= interval) {

    // Save the current time as the new "last toggle" time
    previousMillis = currentMillis;

    // If the LED was OFF, turn it ON. If it was ON, turn it OFF.
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // Update the actual LED to match the new state
    digitalWrite(ledPin, ledState);
  }

  // Code placed here would run without being delayed or blocked
}

