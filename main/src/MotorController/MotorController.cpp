#include "MotorController.h"
#include "Arduino.h"
using namespace std;

//function implementations for MotorController go here
//single argument constructor will:
//create MotorController with a given signal port number
//driveMotor will:
//-Take in a speed from -1 to 1 and convert that into a PWM pulse
//-Send PWM pulse to motor controller to acheive desired speed