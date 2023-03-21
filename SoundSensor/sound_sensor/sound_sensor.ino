#define sensorPin 8

// Variable to store the time when last event happened

unsigned long lastEvent = 0;

void setup(){
    pinMode(sensorPin,INPUT); // Set sensor pin as an INPUT
    Serial.begin(9600);

}

void loop(){
    //Read Sound Sensor
    int sensorData = digitalRead(sensorPin);

    // If pin goes LOW,sound is detected
    if (sensorData == LOW){

        // if 25 have passed since last LOW state,it means that clap is detected and not due to any spurious sound
        if(millis()-lastEvent> 25){
            Serial.println("Clap detected!");
        }

        // Remember when last event happened
        lastEvent= millis();
    
    }
}