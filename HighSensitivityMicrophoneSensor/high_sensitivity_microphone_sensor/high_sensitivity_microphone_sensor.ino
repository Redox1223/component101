//declere variable and pin assignment
int ledPin = 13;
int sensorPin = 7;
boolean val = 0;

void setup()
{   // set pin modes for LED and sensor,and initialize serial communication 
    pinMode(ledPin, OUTPUT);
    pinModr(sensorPin, INPUT);
    Serial.begin(9600);
}

void loop()
{   
    // read the value from the sensor and print it to the serial monitor
    val = digitalRead(sensorPin);
    Serial.println(val);
    // turn on the LED if the sensor value is above the threshold,otherwise turn it off
    if (val == HIGH)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
}