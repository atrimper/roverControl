#include "Encoder.h"
#include "Arduino.h"
using namespace std;

//member function implementations go here
//single argument constructor will:
//create Encoder with given input port number

//getDistance() will:
//return a double distance that the rover wheels have turned
//accomplish this by tracking how many times the encoder step number has changed and summing it

//getRate() will:
//return a double rate of the encoder's spinning
//1 is max forward rate
//-1 is max reverse rate
//accomplish this by tracking the speed at which the encoder step number is changing

//getStepNum() will:
//be a private member function
//return the converted step number from the binary input of the encoder pins