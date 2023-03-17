


const int PIN_TO_SENSOR = 2; // the pin that OUTPUT pin of sensor is connected to 
int pinStateCurrent = LOW; // current state of pin
int pinStatePrevious = LOW; // previous state of pin

void setup (){
    serial.begin(9600);  //initialize serial
    pinMode(PIN_TO_SENSOR, INPUT); // configure an Arduino's pin to the digital input mode by using pinMode() function

}

void loop(){
    pinStatePrevious = pinStateCurrent;// store old state
    pinStateCurrent =digitalRead(PIN_TO_SENSOR);// Read state of sensor's OUTPUT pin by using digitalRead() funtion.

    if (pinStatePrevious== LOW && pinStateCurrent== HIGH){ //pin state change: LOW-->HIGH
        serial.println("Mortion detected!");
        // TODO: turn on alarm, light or activate a device... here
    } 
    else if(pinStatePrevious== HIGH && pinStateCurrent==LOW){// pin state change:HIGH-->LOw
        serial.println("Mortion stopped!");
        // TODO: turn off alarm,light or deactivate a device...here    }
    }
}
