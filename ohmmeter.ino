/*  
   This program reads the analog value on A0 and converts it into
   the actual voltage (0 to about 5V). Then it prints the result.
*/

void setup() {
  // Open the Serial Monitor at 9600 so we can see the readings
  Serial.begin(9600);
}

void loop() {
  // Read the raw analog value (0–1023)
  int V = analogRead(A0);

  // Convert the reading into a voltage
  float VA = V * (5.0 / 1023.0);

  // Show the voltage in the Serial Monitor
  Serial.print("VA = ");
  Serial.println(VA);
}

