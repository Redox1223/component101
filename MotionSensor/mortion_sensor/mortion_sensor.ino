const int PIN_TO_SENSOR = 2; // the pin that OUTPUT pin of sensor is connected to
int pinStateCurrent = LOW;   // current state of pin
int pinStatePrevious = LOW;  // previous state of pin

void setup()
{
    serial.begin(9600);            // initialize serial
    pinMode(PIN_TO_SENSOR, INPUT); // configure an Arduino's pin to the digital input mode by using pinMode() function
}

void loop()
{
    pinStatePrevious = pinStateCurrent;           // store old state
    pinStateCurrent = digitalRead(PIN_TO_SENSOR); // Read state of sensor's OUTPUT pin by using digitalRead() funtion.

    // if the state of the sensor's OUTPUT pin has changed, print out the result:
    if (pinStatePrevious == LOW && pinStateCurrent == HIGH)
    {
        serial.println("Mortion detected!");
    }

    // if the state of the sensor's OUTPUT pin has changed, print out the result:
    else if (pinStatePrevious == HIGH && pinStateCurrent == LOW)
    {
        serial.println("Mortion stopped!");
    }
}
