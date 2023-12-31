// Electronics and Electrical Engineering
// Task 2
// servo Motor (Knob)


#include <Servo.h>

Servo myservo;  

int potpin = A0;  
int val;    

void setup() {
  myservo.attach(9);  
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(15);                           
}
