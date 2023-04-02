// Define the pin number for the rain sensor
const int rainPin = A0;

// Setup function - runs once at the beginning
void setup() {
  // Start serial communication
  Serial.begin(9600);
}

// Loop function - runs repeatedly
void loop() {
  // Read the value of the rain sensor
  int rainValue = analogRead(rainPin);
  // Print the rain sensor value to the serial monitor
  Serial.print("Rain sensor value: ");
  Serial.println(rainValue);
  // Delay for 100 milliseconds
  delay(100);
}
