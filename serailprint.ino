void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  Serial.println("Hello World");  // Continuously print Hello World
  delay(1000);  // Wait for 1 second before printing again
}
