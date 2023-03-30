// declear the variable 
int pH_value;
float voltage;

void setup()
{
    Serial.begin(9600); // intialize the serial communication
    pinMode(pH_value,INPUT);// set the pin mode for the pH value variable to INPUT

}
void loop(){

    pH_value= analogRead(A0); // read the analog input value from pin A0 and store it in pH_value variable
    voltage = pH_value * (5.0/1023);// convert the pH_value to a voltage value and store it in the voltage variable
    Serial.println(voltage); // print the voltage value to the serial monitor
    delay(500); // delay for 500 ms before repeating the loop
}