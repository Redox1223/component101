// calibrating the load cell
#include <HX711.h>

// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 2;
const int LOADCELL_SCK_PIN = 3;

// initialize the load cell object with the HX711 library
HX711 scale;

void setup()
{
    // port for serial communication
    Serial.begin(57600);
    // initialize the load cell
    scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
}
void loop()
{
    // check if the load cell is ready to use or not
    if (scale.is_ready())
    {
        // set the scale factor 
        scale.set_scale();
        Serial.println("Tare...remove any weight from the scale.");
        delay(5000);
        // tare the scale to remove any weight
        scale.tare();
        Serial.println("Tare done...");
        Serial.print("Place a knowm weight on the scale...");
        delay(5000);
        // get the reading from the load cell
        long reading = scale.get_units(10);
        Serial.print("Result:");
        Serial.println(reading);
    }
    else
    {
        // if the load cell is not ready to use
        Serial.println("HX711 not found");
    }
    delay(1000);
}
// calibration factor will be the (reading)/(known weight)
