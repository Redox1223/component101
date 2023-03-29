// define the pins to be i
#define laser 2
#define sensor 3
#define LED 4
#define buzzer 5

void setup(){
    Serial.begin(9600); // start serial communication at a baud rate of 9600
    pinMode(laser,OUTPUT);// set the laser pin as an output
    pinMode(sensor,INPUT); // set the sensor pin as an input
    pinMode(sensor,OUTPUT);// set the LED and buzzer pins as outputs
    pinMode(sensor,OUTPUT);

    digitalWrite(laser,HIGH); // turn on the laser

}
void loop(){
    // read the value of the sensor
    bool value = digitalRead(sensor);
    // if the sensor value is low
    if(value == 0){

        digitalWrite(LED,HIGH);// turn on the LED
        digitalWrite(buzzer,LOW);// turn off the buzzer
    }
}