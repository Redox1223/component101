// define the input and output pins
int inPin = 3;// analog input pin
int var = 0;// variable to store the input value
int pin11 = 5;// PWM output pin

void setup(){
    //Initialize serial communication at a baud rate of 9600
    Serial.begin(9600);

}
void loop(){
    // Read the input voltage and store it in the var variable
    var = analogRead(inPin);
    // if the input voltage is greater than or equal to 1
    if (var>=1)
    {
        //constrain the input voltage to a range of 1 to 100
        var = constrain (var,1,100);
        // map the constrained input voltage to a range of 1 to 255
        var = map(var,1,100,1,255);
        // output the scaled input voltage to the PWM output pin
        analogWrite(pin11,var);
    }
    else {
        //if the input voltage is less than 1,turn off the PWM output
        analogWrite(pin11,0);
    }
    // Print the input voltage to the serial monitor for debugging
    Serial.println(var);
    
}