// define the  pin numbers
const int trigPin = 8;
const int echoPin = 9;

// define the variables
long duration;
int distance;


void setup() {
pinMode(trigPin, OUTPUT); // Set the trigPin 8 as an Output
pinMode(echoPin, INPUT);  // Set the echoPin 9 as an Input
 pinMode(3, OUTPUT);
Serial.begin(9600);       // Starts the serial communication at 9600 baud rate 
}


void loop() {

digitalWrite(trigPin, LOW); // Clear the trigPin i.e 8 
delayMicroseconds(5);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);      // Sets the trigPin 8 on HIGH state for 10 micro seconds
digitalWrite(trigPin, LOW);  


duration = pulseIn(echoPin, HIGH);// Reads the echoPin,measures & returns the sound wave travel time in microseconds

distance= 0.0343 * duration/2 ;// Speed of sound(at 20 degree C)=343 m/s =34300 cm/10^6 micro seconds =0.0343cm/microseconds;
                              // The soundwave was recieved at EchoPin after bouncing off the object,
                              // hence the soundwave travelled the distance twice and therefore the duration is divided by 2

Serial.print("Distance: ");  
Serial.println(distance);     // Prints the distance in cm  on the Serial Monitor


  if (distance <= 40) 
  {
    digitalWrite(3, HIGH);
     Serial.print("\n");
    Serial.print("less");
    Serial.print("\n");

  } 
  else 
  {
    digitalWrite(3, LOW);
  }
  
}
