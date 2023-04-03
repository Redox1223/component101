#include <Adafruit_Fingerprint.h> // include the fingerprint sensor library

// initialize the fingerprint sensor object
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&Serial);

void setup()
{
    // initialize the serial communication
    Serial.begin(9600);

    // initialize the fingerprint sensor
    finger.begin(57600);

    // check if the fingerprint sensor is found
    if (!finger.verifyPassword())
    {
        Serial.println("Fingerprint sensor not found");
        while (1)
        {
        // do nothing
        }
    }

    // start the fingerprint sensor
    finger.start();
}

void loop()
{
    // read a fingerprint from the sensor
    int fingerprintID = finger.getImage();

    // check if a fingerprint is found
    if (fingerprintID == FINGERPRINT_OK)
    {
        // convert the fingerprint to a template
        fingerprintID = finger.image2Tz();

        // search for the fingerprint in the database
        int match = finger.searchDatabase();

        // display the fingerprint ID and match status on the serial monitor
        Serial.print("Fingerprint ID: ");
        Serial.print(fingerprintID);
        Serial.print(", Match status: ");
        if (match == FINGERPRINT_OK)
        {
            Serial.println("Match found");
        }
        else
        {
            Serial.println("No match found");
        }
    }

    // wait for a few seconds before reading another fingerprint
    delay(5000);
}
