// Electronics and Electrical Engineering
// Task 2
// DC Motor
// عدلنا على كود Blink

int Fvariable = 6;
int Svariable = 7;

void setup() 
{
  pinMode(Fvariable, OUTPUT);
  pinMode(Svariable, OUTPUT);
}

void loop() 
{
  digitalWrite(Fvariable, HIGH);  
  digitalWrite(Svariable, LOW);   
}
