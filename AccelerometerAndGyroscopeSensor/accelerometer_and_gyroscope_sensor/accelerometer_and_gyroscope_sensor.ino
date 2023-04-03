// Include necessary libraries
#include <Wire.h> // for I2C communication
#include <Adafruit_Sensor.h> // for sensor management
#include <Adafruit_ADXL345_U.h> // for accelerometer
#include <Adafruit_L3GD20_U.h> // for gyroscope

// Define I2C addresses for sensors
#define ADXL345_ADDRESS (0x53)
#define L3GD20_ADDRESS (0x6B)

// Create instances of sensors
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);
Adafruit_L3GD20_Unified gyro = Adafruit_L3GD20_Unified(12345);

// Setup function - runs once at the beginning
void setup() {
  // Start serial communication
  Serial.begin(9600);
  // Initialize accelerometer sensor
  if(!accel.begin(ADXL345_ADDRESS)) {
    Serial.println("Failed to initialize accelerometer.");
    while(1);
  }
  // Initialize gyroscope sensor
  if(!gyro.begin(L3GD20_ADDRESS)) {
    Serial.println("Failed to initialize gyroscope.");
    while(1);
  }
}

// Loop function - runs repeatedly
void loop() {
  // Create variables to hold sensor data
  sensors_event_t accel_event;
  sensors_event_t gyro_event;
  // Get accelerometer data
  accel.getEvent(&accel_event);
  // Print accelerometer data to serial monitor
  Serial.print("Accelerometer (m/s^2): ");
  Serial.print(accel_event.acceleration.x);
  Serial.print(", ");
  Serial.print(accel_event.acceleration.y);
  Serial.print(", ");
  Serial.println(accel_event.acceleration.z);
  // Get gyroscope data
  gyro.getEvent(&gyro_event);
  // Print gyroscope data to serial monitor
  Serial.print("Gyroscope (degrees/s): ");
  Serial.print(gyro_event.gyro.x);
  Serial.print(", ");
  Serial.print(gyro_event.gyro.y);
  Serial.print(", ");
  Serial.println(gyro_event.gyro.z);
  // Delay for 100 milliseconds
  delay(100);
}
