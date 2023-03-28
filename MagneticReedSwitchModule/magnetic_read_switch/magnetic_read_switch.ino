// define the pin numbers for the LEDs and switch
int ledOpen = 8;
int ledClose = 10;
int switchRead = 6;

void setup(){
    // set the pin modes for the LEDs and switch
    pinMode(ledOpen,OUTPUT);
    pinMode(ledClose,OUTPUT);
    pinMode(switchReed,INPUT);
    // initalize the serial communication for debugging purpose
    Serial.begin(9600);
}

void loop(){
    // check the state of switch
    if(digitalRead(switchRead)==HIGH){
        // if the switch is closed,turn on the "closed" LED and turn off the "Open "LED 
        digitalWrite(ledOpen,LOW);
        digitalWrite(ledClose,HIGH);
        // send a massage to the serial monitor to indicate that the door is closed 
        Serial.println("Your Door is Closed");
    }
    else{
        // If the switch is open, turn on the "open" LED and turn off the "closed" LED
        digitalWrite(ledOpen,HIGH);
        digitalWrite(ledClose,LOW);
        // Send a message to the serial monitor to indicate that the door is open
        Serial.println("Your Door is Open");
    }
    // Delay for 1 millisecond before repeating the loop
    delay(1);
}
