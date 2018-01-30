#include "src/motorController/motorController.h"
using namespace std;

const int dirPin = 2;
const int stepPin = 3;
const int sleepPin = 4;
const int leftServoPin = 5;
const int rightServoPin = 6;
const int resetPin = 7;
const int triggerPin = 12;

int numSteps = 40; //arbitrary, test later
  
void setup() {
  //add initializations of system variables here
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(sleepPin, OUTPUT);
  pinMode(resetPin, OUTPUT);
  pinMode(leftServoPin, OUTPUT);
  pinMode(rightServoPin, OUTPUT);
  pinMode(triggerPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  //most of the implementation for rover will be in libraries
  
  MotorController leftMotor(leftServoPin); //initialize left and right motor controller objects
  MotorController rightMotor(rightServoPin);
  
  while(1){
    leftMotor.drive(0.0); //stop the rover while it is in the rocket
    rightMotor.drive(0.0);
    if(digitalRead(triggerPin) == LOW){ //when the trigger wire is pulled away...
      break; //break out of the loop
    }
  }
  
  while(timer < driveTime){
    leftMotor.drive(1.0); //drive at full power while the timer has not expired
    rightMotor.drive(1.0);
  }
  
  leftMotor.drive(0.0); //stop the rover once the timer has expired
  rightMotor.drive(0.0);
  
  //extend solar panels
  for(int i = 0; i < numSteps; i++){
    digitalWrite(dirPin, HIGH);
    digitalWrite(sleepPin, HIGH);
    digitalWrite(resetPin, HIGH);
    if((i % 2) == 0){
      digitalWrite(stepPin, HIGH);
    } else {
      digitalWrite(stepPin, LOW);
    }
    delay(20);
  }
}
