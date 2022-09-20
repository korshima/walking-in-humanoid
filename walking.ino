// A program for the travelling/walking of a humanoid
By korshima
#include <Servo.h>
Servo lowerleft;
Servo upperleft;
Servo lowerright;
Servo upperright;

void setup() {
  // put your setup code here, to run once:
  lowerleft.attach(4);
  upperleft.attach(5);
  lowerright.attach(6);
  upperright.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
  lowerleft.write(80);
    upperleft.write(90);
      lowerright.write(90);
        upperright.write(100);
     
 // its left legs
delay(1000);
 upperright.write(50);
 // delay (250);
 lowerright.write(40);
 delay (1000);

  lowerleft.write(80);
    upperleft.write(90);
      lowerright.write(90);
        upperright.write(100);

 // its right legs
delay(1000);
 upperleft.write(140);
 // delay (250);
 lowerleft.write(150);
 delay (1000);
 
