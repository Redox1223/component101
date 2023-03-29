#define control 8 // pin that controls pin as output

void setup(){
    pinMode(control,OUTPUT); // define control pin as output
    Serial.begin(9600);

}
void loop(){
    digitalWrite(control,HIGH); // turn the MOSFET switch ON
    delay(2000); // wait for 2000 ms or 2 second

    digitalWrite( control,LOW); // turn the MOSFET switch OFF
    delay(2000); // wait for 2000 ms or 2 second
    }