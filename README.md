# ir-rc-car
IR controlled rover using Atemga 328 PU
## RC car
The project uses Atmega 328 as the controller which is programmed using Arduino (used as a programmer). Two L293D is used as the motor shield
with each controlling two motors.
I have also used a TSOP 1738 IR reciever to receive signal. I wouldnt recommend using IR to send signals as it has some drawbacks 
A 12v main supply is present which is connected to 5v voltage regulator which provides supply for the MCU and motor drivers. An additional 3V 
voltage regulator is connected to 12V which would be used to power the IR receiver(Connecting IR receiver to 5v may cause interference and wil
make your car to work improperly

##Controller
The controller uses Atemga 328 PU which is programmed using Arduino. A 5v supply is sufficient for it to work with IR led.
To check whether the IR led is working or not, you just have to view it under a smartphone camera.
It uses joystick to send the signals to the car. 

##Libraries
A predefined arduino IR library: IrRemote, is used for convenience.
