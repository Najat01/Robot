// Electronics and Electrical Engineering
// Task 1
//تشغيل العين كإضاءة واحدة

void setup() 
{
  Serial.begin(9600);
 
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}
void loop() 
{
  
  int sensorVal = digitalRead(2);
 
  Serial.println(sensorVal);


  if (sensorVal == HIGH) 
  {
    digitalWrite(3, LOW);
  } 
  else 
  {
    digitalWrite(3, HIGH);
  }

}
