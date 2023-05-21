Casio F-91W Step Counter
========================

This is a fork of Joey Castillo's Sensor-Watch (see https://github.com/joeycastillo/Sensor-Watch, and https://www.sensorwatch.net/). My changes to this fork is a work-in-progress.

My main goals are to:

* Add led 'side-lighting' to the right side of the LCD as well as the left
* Add a BMA400 accelerometer to the board for step counting, and perhaps experiment with wake-on-arm-lift, etc
* Add PAM8904E for a louder (and adjustable) piezo driver
* Remove USB, and add SWD Tag-Connect pads
* Add additional SWD pads on back of board (covered with tape when watch is assembled with the battery)

I replaced the 2 color led side light with 2 individual 0603 LEDs, so I could pick and choose each LED. Will it be better than the bi-color? We'll see... I chose not to go with an RGB LED, because I wanted LEDs on both sides of the display, and I couldn't spare 6 gpio for them. And I didn't want to connect multiple LEDs to one gpio, because it could exceed the max current for the gpio pin.

I also added a TPS610985 to the board, to ensure that the board always gets a stable 3V supply, and the voltage supply to the LEDs doesn't dip below the LED forward voltage. The GPIO pins have a higher rated current at 3V, so this also ensures that turning on the LEDs doesn't exceed the max GPIO current. Using a boost converter will decrease battery life, but it's still to be determined by how much. The TPS610985 is pretty amazingly efficient, so I'm hoping to still get decent battery life with it.

The PAM8904E should make the buzzer on the watch louder, and the voltage to the buzzer is adjustable by 3 levels, so there's a sort of volume control with it.

I added Tag-Connect pads to make programming the board easier, without having to mess with custom POGO pins and such. Also, the SWD pads on the back of the board will allow me to assemble the board with the LCD, but without the battery, and solder wires to the debug pads to debug the board with the LCD connected. This of course means there is no bootloader, and the board can only be programmed using SWD.

Kicad design files to be uploaded shortly, and I'll update the code in this repository to match all the changes/additions I made...

Prototype boards have been ordered from PCBWay! Crossing my fingers that I didn't miss anything :)

Things I plan on fixing/improving on version 2.0 of the PCB:

* I accidently placed a resistor in a "keep out" zone, where the white case touches the PCB. I'll have to cut the case a little for these boards to fit.
* Connect ENABLE_SECONDARY_POWER to a gpio pin, so that the transient response of the boost regulator can be improved during active mode (I'm thinking about the times I'm using PWM for the LEDs and buzzer).
* See if I can connect all three buttons to an RTC wake pin.

Here's a picture of the new pin assignemts I plan for version 2.0 of the PCB:

![image](/images/UpdatedPinAssignments_PCB_Version2.png)

And pictures of version 1.0 of the PCB:

![image](/images/F91W_PCB.png)

![image](/images/F91W_PCB_3d_Front.jpg)

![image](/images/F91W_PCB_3d_Back.jpg)

