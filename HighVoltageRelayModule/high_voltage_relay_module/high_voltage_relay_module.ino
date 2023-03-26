// constants
const int pResistor = A0; // photoresistor at Arduino analog pin A0
const int relayPin = 10;  // Led pin at arduino pin 9

// variable
int prvalue; // store value from photoresistor(0 - 1023)

void setup()
{
    pinMode(relayPin, OUTPUT); // set ledPin- 9 pin as an output
    pinMode(pResistor, INPUT); // set pResistor - A0 pin as an input
    Serial.begin(9600);
}

void loop()
{
    prvalue = analogRead(pResistor);
    Serial.print("PR Value");
    Serial.println(prvalue);

    // edit value depending on youe photoresistor specs
    if (prvalue < 350)
    {
        digitalWrite(relayPin, HIGH); // active relay(lamp on)
    }
    else
    {
        digitalWrite(relayPin, LOW); // deactivate relay (lamp off)
    }
    delay(1000); // small delay
}