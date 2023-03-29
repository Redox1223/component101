// declear the Arduino pins
const int REED_PIN = 2;
const int LED_PIN = 13;

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
        Serial.println("switch closed");
        digitalWrite(LED_PIN, HIGH); // turn the LED on
    }
    else
    {
        Serial.println("Switch opened");
        digitalWrite(LED_PIN, LOW); // turn the LED off
    }
}