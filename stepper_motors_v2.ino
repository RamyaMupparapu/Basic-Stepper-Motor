// Include the Arduino Stepper Library
#include <Stepper.h>

// Number of steps per output rotation
const int stepsPerRevolution = 200;

// Create Instance of Stepper library
Stepper myStepper1(stepsPerRevolution, 12, 11, 10, 9);
Stepper myStepper2(stepsPerRevolution, 6, 5, 4, 3);

void setup()
{
  // set the speed at 20 rpm:
  myStepper1.setSpeed(20);
  myStepper2.setSpeed(20);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() 
{
  // step one revolution in one direction:
  Serial.println("clockwise");
  myStepper1.step(stepsPerRevolution);
  //delay(500);
  myStepper2.step(stepsPerRevolution);
  //+delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper1.step(-stepsPerRevolution);
  delay(500);
  myStepper2.step(-stepsPerRevolution);
  delay(500);

}
