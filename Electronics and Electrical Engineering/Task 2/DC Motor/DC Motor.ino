// Electronics and Electrical Engineering
// Task 2
// DC Motor

int speed1=0,speed2=0,x=0, pwm=0;
void setup()
{
 pinMode(3,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(4,INPUT);
digitalWrite(4,HIGH);
 pinMode(5,INPUT);
digitalWrite(5,HIGH);
}

void loop()
{
 
speed1=digitalRead(4);
speed2=digitalRead(5);

if(speed1==LOW)
{x=3;
	digitalWrite(6,HIGH);
 	digitalWrite(7,LOW);
}
if(speed2==LOW)
{x=5;
	digitalWrite(7,HIGH);
 	digitalWrite(6,LOW);
}
   
pwm=map(x,0,5,0,255);
analogWrite(3,pwm);
    
}