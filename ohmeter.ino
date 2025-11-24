/*
   This program reads the analog value on A0, turns it into a voltage,
   then uses that to estimate the current through a 10k resistor and
   finally calculates the value of an unknown resistor.
*/

void setup() {
  // Start the Serial Monitor at 9600 baud so we can see the results
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from A0 (range: 0 to 1023)
  int V = analogRead(A0);

  // Convert the raw ADC reading into a voltage (0V to about 5V)
  float VA = V * (5.0 / 1023.0);

  // Calculate the current flowing through the 10k resistor
  // Formula: I = (5V - measured voltage) / 10,000 ohms
  float I = (5.0 - VA) / 10000.0;

  // Calculate the value of the unknown resistor using Ohm's law
  // R = V / I
  float R = VA / I;

  // Print the resistance value
  Serial.print("Resistance = ");
  Serial.println(R);

  // Print the measured voltage
  Serial.print("VA = ");
  Serial.println(VA);
}

