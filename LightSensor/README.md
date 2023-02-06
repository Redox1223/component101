# The light sensor


<img src="IMG/light_sensor.jpg" width ="100px" height="100px" >
<br>


 - Light sensor module is used to detect the light intensity of light
 - It is associated with both analog output pin  and digital output pin labeled as AO and DO respectively on the board
 - when there is a light, the resiston of LDR become low according to the intensity of light.
 - It means when the light level is decreases, the resistons of the LDR is increases.
 - As this resistans increases in relation to other Resistor, which has fixed resistance, it causes the  voltage dropped across the LDR to also increase.
 -  This sensor module is designed to detect and measure various physical properties,such as temperature,humadity,pressure,light intensity and more.
 - Light sensor is a type of photodetector(also called photosensor) that detect light.
 - Different type of light sensors can be used to measure illuminance,respond to changes in the amount of light received ,or convert light to electricty.
 - How to connect arduino board to this device,
   - 1.connect the LDR to the analog input pin 0 on the arduino
   - 2.one leg on sensor which called VCC is connect to the 5V.
   - 3.Other leg on sensor which called GRD is connect to the GRD pin of Arduino board. 

<img src="IMG/connection_diagram.webp">