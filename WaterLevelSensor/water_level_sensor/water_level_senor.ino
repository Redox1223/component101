// Sensor Pins
#define sensorPower 7
#define sensorPin A0

// Value for storing water level
int val = 0;

void setup()
{
    // Set D7 as an OUTPUT and set it to LOW initially
    pinMode(sensorPower, OUTPUT);
    digitalWrite(sensorPower, LOW);

    Serial.begin(9600);
}

void loop()
{
    // get the reading from the function below and print it
    int level = readSensor();

    Serial.print("Water Level:");
    Serial.println(level); // Use println to print on a new line

    delay(1000);
}

// This is a function used to get the reading
int readSensor()
{
    digitalWrite(sensorPower, HIGH); // Turn the sensor ON
    delay(10);                       // wait 10 milliseconds
    val = analogRead(sensorPin);     // Read the analog value from the sensor
    digitalWrite(sensorPower, LOW);  // Turn the sensor OFF
    return val;                      // Send current reading
}
