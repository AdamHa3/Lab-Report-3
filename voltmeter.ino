/*  
   This program reads the analog value on A0 and converts it into
   the actual voltage (0 to about 5V). Then it prints the result.
*/

void setup() {
  // Start the Serial Monitor at 9600 baud so we can see the output
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from A0 (range: 0 to 1023)
  int V = analogRead(A0);

  // Convert the analog value into a voltage using the formula:
  // voltage = (ADC value * 5V) / 1023
  float VA = V * (5.0 / 1023.0);

  // Print the label "VA = "
  Serial.print("VA = ");

  // Print the calculated voltage
  Serial.println(VA);
}
