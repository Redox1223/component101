const int PIEZO_PIN = 9;   // define the pin the piezo buzzer
const int THRESHOLD = 500; // define the threshold for triggering the buzzer (adjust as needed)

int previousReading = 0; // intialize the previous reading variable

void setup()
{

    Serial.begin(9600); // Start the serial communication

    pinMode(PIEZO_PIN, OUTPUT);
}
void loop()
{
    int reading = analogRead(A0);

    if (reading > THRESHOLD && previousReading <= THRESHOLD) // if the reading is above the threshold and the previous reading was below the threshold,trigger the buzzer
    {
        // turn on the piezo buzzer
        digitalWrite(PIEZO_PIN, HIGH);

        // print a massage to the serial monitor
        Serial.println("Sound detected!");
    }
    // otherwise,if the reading is below the threshold and the previous reading was above the threshold,turn off the buzzer
    else if (reading <= THRESHOLD && previousReading > THRESHOLD)
    {
        digitalWrite(PIEZO_PIN, LOW); // turn off the piezo buzzer
    }

    previousReading = reading; // update the previous reading variable

    delay(10); // wait for a short period of time before checking the sensor again
}
