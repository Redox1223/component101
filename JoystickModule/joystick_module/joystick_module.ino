#define VRX_PIN A0 // arduino pin connected to VRX pin
#define VRX_PIN A1 // arduino pin connected to VRY pin

int xValue = 0; // to store value of the X axis
int yValue = 0; // to store value of the Y axis

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    // read analog X and Y analog value
    xValue = analogRead(VRX_PIN);
    yValue = analogRead(VRX_PIN);

    // print data to serial monitor on Arduino IDE
    Serial.print("x =");
    Serial.print(xValue);
    Serial.print(", y =");
    Serial.print(yValue);
    delay(200);
}