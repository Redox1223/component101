//MLX90316 Rotary Position Sensor

// in this sketch the sensor does not communicates using the "SPI.h library"
#include "Metro.h"
#include "MLX90316.h"

int pin_SS =10;
int pinSCLK=13;
int pinMOSI=11;
int ii;
int angle;
Metro mlxMetro=Metro(5);
MLX90316 mlx_1=MLX90316();

void setup(){
    Serial.begin(115200);//initializes the SPI bus by setting SCK,MOSI and SS to outputs,pulling SCK and MOSI low,and SS high.
    mlx_1.attach(pin_SS,pinSCLK,pinMOSI);
    Serial.println("MLX90316 Rotary Position Sensor");
 }  

void loop(){
    if (mlxMetro.check()==1){
        ii=mlx_1.readAngle();
        angle=ii/10;//readAngle gives 10* degrees,thus 3600= is 360.0
         /* if ii=-1 then no SPI signal
            if ii=-2 then signal too strong
            if ii=-3 then signal too weak
            "angle"will read 0 if signal is lost
            */
           Serial.print(angle);
           Sreial.println("");
    }
}