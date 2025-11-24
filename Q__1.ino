/*  
   This program reads the analog value from A0 (0–1023)
   and shows the result in the Serial Monitor.
*/

void setup() {
  // Start the Serial Monitor at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from pin A0 (0 to 1023)
  int V = analogRead(A0);

  // Print the label "SensorValue = "
  Serial.print("SensorValue = ");

  // Print the actual value stored in V
  Serial.println(V);
}
