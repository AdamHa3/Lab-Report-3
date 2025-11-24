/*
   This program reads the analog value on A0. If the value is under 512,
   some LEDs turn ON. If it's above 512, the other LEDs turn ON instead.
*/

// Store which pin the sensor is connected to
int sensorPin = A0;

void setup() {
  // Start the Serial Monitor at 9600 baud
  Serial.begin(9600);

  // Set all LED pins as OUTPUT
  pinMode(6, OUTPUT);  // Pin 6 controls an LED
  pinMode(5, OUTPUT);  // Pin 5 controls an LED
  pinMode(4, OUTPUT);  // Pin 4 controls an LED
  pinMode(3, OUTPUT);  // Pin 3 controls an LED
  pinMode(2, OUTPUT);  // Pin 2 controls an LED
}

void loop() {
  // Read the sensor value from A0 (0 to 1023)
  int sensorValue = analogRead(sensorPin);

  // Print the label "sensorValue = "
  Serial.print("sensorValue = ");

  // Print the actual value read from A0
  Serial.println(sensorValue);

  // Check if the value is below 512
  if (sensorValue < 512) {

    // Turn ON LEDs on pins 2, 3, 4
    digitalWrite(2, HIGH);  
    digitalWrite(3, HIGH);  
    digitalWrite(4, HIGH);  

    // Turn OFF LEDs on pins 5 and 6
    digitalWrite(5, LOW);   
    digitalWrite(6, LOW);   
  }
  else {
    // Turn OFF LEDs on pins 2, 3, 4
    digitalWrite(2, LOW);   
    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   

    // Turn ON LEDs on pins 6 and 5
    digitalWrite(6, HIGH);  
    digitalWrite(5, HIGH);  
  }
}
