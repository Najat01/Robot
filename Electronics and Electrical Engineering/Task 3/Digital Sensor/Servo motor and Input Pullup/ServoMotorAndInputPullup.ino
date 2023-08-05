// Electronics and Electrical Engineering
// Task 3
// servo Motor (Sweep) and Input Pullup

#include <Servo.h>

Servo myservo; 
int pos = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);

   myservo.attach(9);  
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  int sensorVal = digitalRead(2);
  int se= digitalRead(5);
  Serial.println(sensorVal);
  
// The First Button
  if (sensorVal == HIGH) {
    digitalWrite(3, LOW);
    

  } else {
    digitalWrite(3, HIGH);
     for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    myservo.write(pos);              
    delay(15);                      
  }
  }
  // The Second Button
  if (se == HIGH) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
   for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              
    delay(15);                       
  }                      
  }
  
}
