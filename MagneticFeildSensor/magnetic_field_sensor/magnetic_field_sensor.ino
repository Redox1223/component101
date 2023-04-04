// add libraries to system
#include <wire.h>
#include <QMC5883L.h>

QMC5883L compass; // create object which is the member of the QMC5883L

void setup()
{
    wire.begin();       // initialize the 12C interface
    Serial.begin(9600); // initialize the serial monitor
    compass.init();     // initialize the compass object with the init() funtion from the QMC5883L class
}

viod loop()
{
    int x, y, z; // declear the varilables

    compass.read(&x, &y, &z); // read() that pulls in the values from the sensor
    // print x,y,z values in serial monitor
    serial.print("x: ");
    serial.print(x);
    serial.print("   y:");
    serial.print(y);
    serial.print("   z:");
    serial.println(z);

    delay(250); // wait 250ms for another loop
}