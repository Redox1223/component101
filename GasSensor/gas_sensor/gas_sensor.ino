// sensor pins D6 LED output,pin A0 analog input
#define ledPin 6
#define sensorPin A0

void setup()
{
    Serial.begin(9600);        // start serial communication
    pinMode(ledPin, OUTPUT);   // set the LED pin as output
    digitalWrite(ledPin, LOW); // turn off the LED
}
void loop()
{
    Serial.print("Analog output"); // print the label for sensor
    Serial.print(readSensor());    // read the sensor data and print it to the serial monitor
    delay(500);                    // delay for half a second before reading the sensor again
}
// this funtion returns the analog data to calling funtion
int readSensor()
{
    unsigned int sensorValue = analogRead(sensorPin);             // Read the analog value from sensor
    unsigned int outputValue = map(sensorValue, 0, 1023, 0, 255); // map the 10 bit sensor value to 8 bit output value
    if (outputValue > 65)
        analogWrite(ledPin, outputValue); // generate PWM signal
    else
        digitalWrite(ledPin, LOW); // generate PWM signal
    return outputValue;            // return analog moisture value
}