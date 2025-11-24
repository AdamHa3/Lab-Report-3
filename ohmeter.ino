/*
   This program reads the analog value on A0, turns it into a voltage,
   then uses that to estimate the current through a 10k resistor and
   finally calculates the value of an unknown resistor.
*/

void setup() {
  // Start the Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Read the analog value (0–1023)
  int V = analogRead(A0);

  // Convert the ADC value into the actual voltage
  float VA = V * (5.0 / 1023.0);

  // Current through the 10k resistor (using the source voltage 5V)
  float I = (5.0 - VA) / 10000.0;

  // Calculate the unknown resistance using R = V / I
  float R = VA / I;

  // Print the resistance value
  Serial.print("Resistance = ");
  Serial.println(R);

  // Print the measured voltage
  Serial.print("VA = ");
  Serial.println(VA);
}

