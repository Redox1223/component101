// rotary encoder input
#define CLK 2
#define DT 3
#define SW 4

int counter =0;
int currentStateCLK;
int lastStateCLK;
String currentDir = "";
unsigned long lastButtonPress = 0;

void setup()
{
    //Set encoder pins as inputs
    pinMode(CLK,INPUT);
    pinMode(DT,INPUT);
    pinMode(SW,INPUT_PULLUP);

    //setup Serial Monitor
    Serial.begin(9600);

    // read the initial state of CLK
    lastStateCLK = digitalRead(CLK);

}

void loop(){

    //read the current state of CLK
    currentStateCLK = digitalRead(CLK);

    // if last and current state of CLK are different,then pulse occurred
    // read to only 1 state change to avoid double count
    if(currentStateCLK != lastStateCLK && currentStateCLK== 1){

        //if the DT state is different than the CLK state then the encoder is rotating CCW so decrement
        if(digitalRead(DT) != currentStateCLK){

            counter--;
            currentDir="CCW";

        }else{
            //encoder is rotating CW so increment
            counter ++;
            currentDir="CW";

        }

        Serial.print("Direction:");
        Serial.print(currentDir);
        Serial.print(" | Counter:");
        Serial.println(counter);

    } 
    // remember last CLK state
    lastStateCLK = currentStateCLK;

    // read the button state
    int btnState = digitalRead(SW);
    
    // if we detect LOW signal,button is pressed
    if (btnState == LOW){
        //if 50ms have passed since last LOw pulse,it means that the button has been pressed,released and pressed again
        if (millis()-lastButtonPress>50){
            Serial.println("Butoon pressed!");
        }

        // remember last button press event
        lastButtonPress = millis();
    }
    // put in s slight delay to help debounce the reading
    delay(1);
}
