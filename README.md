# Digital LED Thermometer

*The purpose:* is to explore using an LED bargraph to simulate an old fashioned thermometer using a string of LEDs and a semiconductor temperature sensor.

*Goal:*
To light-up a string of LEDs based on the temperature from room temperature to anywhere we are able to go, hot or cold.  The LEDs are all on at the highest temp and less in-between depending on the value of the temperature.  If you want it to work with your finger for heating it up and a fan for cooling it down then your numbers will be close to room temperature.  If you want to heat it up more with a soldering iron or a can of compressed air for cooling then your numbers will have to be spread out more.


# Schematic:

![Picture2](https://user-images.githubusercontent.com/102126445/160236994-c76e467a-4b15-42b7-b347-1a0ffadb54ab.png)

*Temp Sensor:* The temperature sensor used is the MCP9700 device which operates from -40C to 125C degrees corresponding to 0.1V to 1.75V

# ADC Input Reference
To get the most out of the Sensor we will set the external reference, AREF, from 1-2V depending on how high we want to go.   Once we decide that and set it, we need to put this instruction into the code so it will use that external reference instead of the internal 5V reference.

analogReference(EXTERNAL);

# Inputting ADC values
The main instruction line is shown below:

Int value = analogRead(analogpin#);

ADC values are based on 10 bits or 0 - 1023
ADC values are based on the AREF voltage.
ADC value = temp voltage/Aref voltage * 1023

# Circuit and Arduino
![Picture3](https://user-images.githubusercontent.com/102126445/160237028-a6628ded-13c4-4e08-ac9a-b9949f14953a.jpg)

![jho](https://user-images.githubusercontent.com/102126445/160237139-c39fdfb1-964d-41d5-992e-b71b9746972f.jpg)

