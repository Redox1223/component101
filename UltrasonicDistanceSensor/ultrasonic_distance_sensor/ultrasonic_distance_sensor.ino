// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
long distance;

void setup()
{
    pinMode(trigPin, OUTPUT); // sets the trigPin as an output
    pinMode(echoPin, INPUT);  // sets the echoPin as an input
    Serial.begin(9600);       // starts the serial communication
}
void loop()
{
    // clear the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    // sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    deleyMicroseconds(2);
    digitalWrite(trigPin, LOW);
    // Reads the echoPin,returns the sound wave travel time in microseconds
    duration = pulseln(echoPin, HIGH);
    // calculating the distance
    distance = duration * 0.034 / 2;
    // print the distance on the serial monitor
    Serial.print("Distance:");
    Serial.println(distance);
}