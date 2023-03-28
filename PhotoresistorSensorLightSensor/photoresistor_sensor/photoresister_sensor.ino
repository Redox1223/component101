int sensorValue = 0; // declear variable

void setup()
{

    pinMode(A0, INPUT); // pin A0 is configured as an input
    pinMode(9, OUTPUT); // pin 9 is configured as an output
    Serial.begin(9600); // bound rate argument(what speed to communicate),in this case 9600 bits per seconds
}
void loop()
{

    // read the value from sensor
    sensorValue = analogRead(A0);
    // print the sensor reading
    Serial.println(sensorValue);
    // map the sensor reading to a range for LED
    analogWrite(9, map(sensorValue, 0, 1023, 0, 255));
    delay(100); // wait for 100 milisecond(s)
}
