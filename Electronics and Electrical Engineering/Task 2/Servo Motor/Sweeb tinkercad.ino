// Electronics and Electrical Engineering
// Task 2
// servo Motor (Sweep)

#include <Servo.h>

Servo myservo; 
int pos = 0;   

void setup() {
  myservo.attach(9);  
}

void loop() {
  for (pos = 0; pos <= 45; pos += 1) { //from 0 degrees to 180 degrees
   
    myservo.write(pos);              
    delay(10);                        
  }
  for (pos = 45; pos >= 0; pos -= 1) { //from 180 degrees to 0 degrees
    myservo.write(pos);              
    delay(10);                       
  }
}
