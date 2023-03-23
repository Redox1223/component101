void setup()
{
    pinMode(13, OUTPUT); // built-in LED pin set to output
    pinMode(8, INPUt);   // module signal output connected to arduino pin 8
    Serial.begin(9600);
}

void loop()
{
    if (digitalRead(8) == HIGH)
    { // if module detects a dark surface,show massage on serial monitor  switch-on-built-in LED
        Serial.println("Dark Surface");
        digitalWrite(13, HIGH);
    }
    else
    {
        Serial.println("Light Surface");
        digitalWrite(13, LOW);
    }
}