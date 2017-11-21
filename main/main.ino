#include "src/encoder/encoder.h"
#include "src/motorController/motorController.h"
using namespace std;

void setup() {
  //add initializations of system variables here
  
}
/*
 * int goal = 6; //(feet)
 * int buffer = 2; //(feet)
 * motorController leftMotor;
 * motorController rightMotor;
 * encoder encoderL;
 * encoder encoderR;
 * double rateL = 0;
 * double rateR = 0;
 */
void loop() {
  //most of the implementation for rover will be in libraries
  /*
   * Expected code structure:
   *  -Call encoder function getDistance() to determine distance driven
   *  --While distance driven is less than the goal distance + some safety cushion, keep looping
   *  -Call encoder function getRate() to determine rate of rotation for wheels on each side of rover
   *  --Use rate of rotation data to adjust the speed parameter passed into driveStraight() function for each side
   */

  /*
   * while(encoderL.getDistance() < (goal + buffer)){
   *  rateL = encoderL.getRate();
   *  rateR = encoderR.getRate();
   *  driveStraight();
   */
}

/*
 * void driveStraight(double leftRate, double rightRate, double speed){
 *  leftMotor.drive(leftRate, speed);
 *  rightMotor.drive(rightRate, speed);
 * }
 */
