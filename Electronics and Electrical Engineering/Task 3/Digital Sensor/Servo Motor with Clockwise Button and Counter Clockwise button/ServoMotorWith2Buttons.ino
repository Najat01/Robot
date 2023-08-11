// Electronics and Electrical Engineering
// Task 3
//Servo Motor with Clockwise Button and Counter Clockwise button


#include <Servo.h>
Servo myservo;
int Clockwise =2;
int CounterClockwise =4;
void setup(){  
  pinMode(Clockwise ,INPUT);
  pinMode(CounterClockwise,INPUT);
  myservo.attach(9); 
}
void loop(){
  if(digitalRead(Clockwise) == HIGH){
    myservo.write(-360);
  }
  if(digitalRead(CounterClockwise) == HIGH){
    myservo.write(360);
  }else{
    myservo.write(0);
  }
}
