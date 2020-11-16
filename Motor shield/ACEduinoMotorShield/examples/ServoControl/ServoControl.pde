#include <ServoControl.h>

ServoShield servos;                       //Create an object to control up to 8 servos

void setup()
{
  for (int servo = 0; servo < 8; servo++)//Initialize all 8 servos
  {
    servos.setbounds(servo, 1000, 2000);  //Set the minimum and maximum pulse duration of the servo
    servos.setposition(servo, 1500);      //Set the initial position of the servo
  }
  
  servos.start();                         //Start the servo control
}

void loop()
{
  for(int pos = 1000; pos < 2000; pos++)  //Move the servos from 0 degrees to 180 degrees 
  {                                       //in steps of 1 degree 
    for (int i = 0; i < 8; i++)          //for all 8 servos
      servos.setposition(i, pos);        //Tell servo to go to position in variable 'pos' 
     delay(1);                           //waits 15ms for the servos to reach the position 
  } 
  
  for(int pos = 2000; pos >= 1000; pos--) //Move the servos from 180 degrees to 0 degrees 
  {                                
    for (int i = 0; i < 8; i++)          //all 8 servos
      servos.setposition(i, pos);        //Tell servo to go to position in variable 'pos' 
    delay(1);                            //waits 15ms for the servos to reach the position 
  } 
}