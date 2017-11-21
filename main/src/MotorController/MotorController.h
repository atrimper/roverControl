#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include "Arduino.h"
using namespace std;

class MotorController{
	private:
		int port;
		
	public:
		MotorController(int);
		//member function implementations in MotorController.cpp
		driveMotor(double);
}

#endif