// declear the Arduino pins

void setup()
{

    Serial.begin(9600);              // initialize the serial communication
    pinMode(REED_PIN, INPUT_PULLUP); // enable internal pull-up for the read switch
}
void loop()
{
    int proximity = digitalRead(REED_PIN); // read the state of the switch

    // if the pin read low,the switch is closed
    if (proximaty == LOW)
    {
        Serial.println("switch closed"); // print serial monitor
    }
    else
    {
        Serial.println("Switch opened"); // print serial monitor
    }
}