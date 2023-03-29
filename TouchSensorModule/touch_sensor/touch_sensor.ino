const int signal_pin = 2; //define pin configuration
int state ;// define variable value that will hold the state of the signal pin

void setup(){
    Serial.begin (115200);// start serial communication 
    pinMode(signal_pin,INPUT);// configure the signal pin as an input pin

}

void loop(){
    state = digitalRead(signal_pin);// read the state of the touch sensor
    Serial.println(state); // print value in the state in serial monitor 
    if (state== HIGH)// the touch sensor signal pin outputs HIGH when pressure is applied
    Serial.println("Touch Detected!");
    delay(500);// wait for 500ms
}