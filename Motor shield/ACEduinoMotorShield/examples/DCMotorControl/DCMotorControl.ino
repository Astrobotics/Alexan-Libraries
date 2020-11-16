/* Sample code for ACEduino Motor Shield that will help understand the operation of 
full bridge driver IC L298 */

void setup ()                // set L298D (A) output pins
{
  pinMode (5, OUTPUT);
  pinMode (9, OUTPUT);
}

void loop ()
{
  /* Setting INPUT1 HIGH and setting input2 LOW, making the motor turn in a clockwise
  direction */
  
  digitalWrite (5, HIGH);     // clockwise direction
  digitalWrite (9, LOW);
  
  delay (1000);              // wait 1 second
  
  /* Setting INPUT1 HIGH and setting input2 HIGH, stops the motor */
  
  digitalWrite (5, HIGH);     // motor stop
  digitalWrite (9, HIGH);
  
  delay (1000);              // wait 1 second
  
   /* Setting INPUT1 LOW and setting input2 HIGH, making the motor turn in a counter-
   clockwise direction */
  
  digitalWrite (5, LOW);     // counterclockwise direction
  digitalWrite (9, HIGH);
  
  delay (1000);              // wait 1 second
  
  /* Setting INPUT1 LOW and setting input2 LOW, stops the motor */
  
  digitalWrite (5, LOW);     // motor stop
  digitalWrite (9, LOW);
  
  delay (1000);              // wait 1 second
}
