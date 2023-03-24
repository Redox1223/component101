int redpin = 11;   // pin for the red LED
int greenpin = 10; // pin for the green LED

int val; //declare a variable to hold the brightness value of the LEDs

void setup()
{   
    // set the LED pins as output
    pinMode(redpin, OUTPUT);
    pinMode(greenpin, OUTPUT);

    // start serial communication at 9600 baud rate
    Serial.begin(9600);
}
void loop()
{
    // fade in the red LED and fade out the green LED
    for (val = 255; val > 0; val--)
    {
        analogWrite(redpin, val);
        analogWrite(greenpin, 255 - val);
        delay(10);
    }
    Serial.println("Green"); // print a massage to the serial monitor
    // pause for 1 second
    delay(1000);

    // fade in the green LED and fade out the red LED
    for (val = 0; val < 255; val++)
    {
        analogWrite(redpin, val);
        anlogWrite(greenpin, 255 -);
        delay(10);
    }
    // print a massage to the serial monitor
    Serial.println("Red");
    // pause for 1 second
    delay(1000);
}