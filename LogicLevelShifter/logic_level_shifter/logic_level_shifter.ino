// define the pins that are connected to the level shifter module
const int levelShifterInPin = 2;  // Input pin on the Arduino
const int levelShifterOutPin = 3; // Output pin on the Arduino

void setup()
{
    // set the input and output pins as OUTPUT
    pinMode(levelShifterInPin, OUTPUT);
    pinMode(levelShifterOutpin, OUTPUT);

    // start the serial communication
    Serial.begin(9600);
}

void loop()
{

    // read the data from serial monitor
    if (Serial.available() > 0)
    {
        char receivedChar = Serial.read();

        // write the data to the level shifter module
        digitalWrite(levelShifterInPin, receivedChar);

        // write the data from the level shifter module
        int levelShifterData = digitalRead(levelShifterOutPin);

        // print the data to serial monitor
        Serial.println(levelShifterData);
    }
}