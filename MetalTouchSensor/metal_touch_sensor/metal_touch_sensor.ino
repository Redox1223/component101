void setup()
{
    pinMode(13, OUTPUT); // build-in LED set to output
    pinMode(8, INPUT);   // module digital output connected to arduino
    Serial.begin(9600);  // initialize serial
}

void loop()
{
    // display analog and digital values to serial
    Serial.print("Analog pin: ");
    Serial.print(analogRead(A0));

    Serial.print("| Digital pin: ");

    if (digitalRead(8) == HIGH)
    {
        Serial.println("HIGH");
        digitalWrite(13, HIGH); // if module value is higher than threshold switch-on built-in LED
    }
    else
    {
        Serial.println("LOW");
        digitalWrite(13, LOW);
    }
    delay(100); // wait 100 miliseconds
}