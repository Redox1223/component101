#define laserPin 2 // Define the pin for the laser module

void setup()
{
    Serial.begin(9600);        // initialize serial communication with the Arduino IDE serial monitor
    pinMode(laserPin, OUTPUT); // Set the laser pin as output
}

void loop()
{
    int laserStatus = digitalRead(laserPin); // read the status of the laser module

    if (laserStatus == HIGH)
    {
        Serial.println("Laser is ON"); // if the laser is ON, print "Laser is ON" to the serial monitor
    }
    else
    {
        Serial.println("Laser is OFF"); // if the laser is OFF, print "Laser is OFF" to the serial monitor
    }

    delay(1000); // delay for 1 second before checking the laser status again
}
