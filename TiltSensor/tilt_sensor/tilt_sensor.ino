// Read the value of a tilt sensor

int tiltsensor = 2;

void setup()
{
    pinMode(tiltsensor,INPUT);
    // initialize communication at 9600 bits per second
    Serial.begin(9600);

}

void loop(){
    // print the value on the serial monitor
    Serial.println(digitalRead(tiltdsensor));
    delay(1000);
}