#ifndef ENCODER_H
#define ENCODER_H

#include "Arduino.h"
using namespace std;

class Encoder{
		private:
			int currentTotalSteps;
			int lastStepNum;
			int currentStepNum
			int port;
			int getCurrentStepNum();
		public:
			Encoder();
			Encoder(int);
			//implementations in Encoder.cpp
			double getDistance(); //probably return in feet
			double getRate(); //probably return something from -1 to 1
}

#endif