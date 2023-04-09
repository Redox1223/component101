const int VOLTAGE_PIN = A0;  // analog pin for reading voltage
const int LED_PIN = 13;  // digital pin for LED indicator

void setup() {
  pinMode(LED_PIN, OUTPUT);
  
  // initialize Serial communication
  Serial.begin(9600);
}

void loop() {
  // read voltage from Breadboard Power Supply
  int voltage = analogRead(VOLTAGE_PIN);
  
  // calculate voltage in millivolts
  float mV = voltage * (5000.0 / 1023.0);
  
  // turn on LED if voltage is within range (4.5-5.5V)
  if (mV >= 4500 && mV <= 5500) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  
  // print voltage on Serial monitor
  Serial.print("Output voltage: ");
  Serial.print(mV);
  Serial.println(" mV");
  
  delay(500);
}
