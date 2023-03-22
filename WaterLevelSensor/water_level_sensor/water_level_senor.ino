// Sensor Pins
#define sensorPower 7
#define sensorPin A0

// Value for storing water level
int val = 0;

void setup()
{
    // Set D7 as an OUTPUT
    pinout(sensorPower, LOW);
    // Set to LOW so no power flows through the sensor
    digitalWrite(sensorPower, LOW);

    Serial.begin(9600);
}

void loop()
{
    // get the reading from the funtion below and print it
    int level = readSensor();

    Serial.print("Water Level:");
    Serial.print(level);

    delay(1000);
}

// This is a funtion used to get the reading
int readSensor()
{
    digitalWrite(sensorPower, HIGH); // Turn the sensor ON'
    delay(10);                       // wait 10 miliseconds
    val = analogRead(sensorPin);     // Read the analog value from sensor
    digitalWrite(sensorPower, LOW);  // Turn the sensor OFF
    return val;                      // Send current reading
}