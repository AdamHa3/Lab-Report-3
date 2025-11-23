/*  
   This program reads the analog value from A0 (0–1023)
   and shows the result in the Serial Monitor.
*/

void setup() {
  // Start the serial monitor at 9600 so we can see the values
  Serial.begin(9600);
}

void loop() {
  // Read the analog value on pin A0
  int V = analogRead(A0);

  // Show the value in the Serial Monitor
  Serial.print("SensorValue = ");
  Serial.println(V);
}
