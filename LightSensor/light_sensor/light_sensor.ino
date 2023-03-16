
// The below code reads the value from photocell and determine the light value qualitatively


void setup()
{
// initialize serial communication at 9600 bits per second:

serial.begin(9600);

}
void loop ()
{
// reads the input on analog pin A0 (value between 0 and 1023)
int analogValue = analogRead(A0);

serial.print("Analog reading");
serial.print(analogValue); // the raw analog reading

// we'll have a few threshholds,qualitatively determined
if(analogValue<10) { 
    serial.println(" -Dark");
} else if (analogValue < 200) {
    serial.println("-Dim");
} else if (analogValue < 500) {
    serial.println("-Light");
} else if (analogValue < 800){
    serial.println("- Bright");
} else {
    serial.println("- Very Bright");
}
delay(500);
}