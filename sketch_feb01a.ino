// defines pins numbers
const int trigPin1 = 32;
const int echoPin1 = 33;
const int trigPin2 = 30;
const int echoPin2 = 31;
const int trigPin3 = 28;
const int echoPin3 = 29;
const int trigPin4 = 26;
const int echoPin4 = 27;
const int trigPin5 = 24;
const int echoPin5 = 25;
const int trigPin6 = 22;
const int echoPin6 = 23;

// defines variables
long duration1;
int distance1;
long duration2;
int distance2;
long duration3;
int distance3;
long duration4;
int distance4;
long duration5;
int distance5;
long duration6;
int distance6;

void setup() {
  
  pinMode(trigPin1, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin1, INPUT); // Sets the echoPin as an Input
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin4, INPUT); // Sets the echoPin as an Input
  pinMode(trigPin5, OUTPUT);
  pinMode(echoPin5, INPUT);
  pinMode(trigPin6, OUTPUT);
  pinMode(echoPin6, INPUT);
  Serial.begin(9600); // Starts the serial communication

}

void loop() {
  
  // Clears the trigPin
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2); 
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration1 = pulseIn(echoPin1, HIGH);
  
  // Calculating the distance
  distance1 = duration1*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance1: ");
  Serial.println(duration1);
  
  delay(1000);
  
  // Clears the trigPin
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2); 
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration2 = pulseIn(echoPin2, HIGH);
  
  // Calculating the distance
  distance2 = duration2*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance2: ");
  Serial.println(duration2);
  
  delay(1000);
  
  // Clears the trigPin
  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2); 
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration3 = pulseIn(echoPin3, HIGH);
  
  // Calculating the distance
  distance3 = duration3*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance3: ");
  Serial.println(duration3);

  delay(1000);
  
  // Clears the trigPin
  digitalWrite(trigPin4, LOW);
  delayMicroseconds(2); 
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin4, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration4 = pulseIn(echoPin4, HIGH);
  
  // Calculating the distance
  distance4 = duration4*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance4: ");
  Serial.println(duration4);

  delay(1000);
  
  // Clears the trigPin
  digitalWrite(trigPin5, LOW);
  delayMicroseconds(2); 
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin5, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin5, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration5 = pulseIn(echoPin5, HIGH);
  
  // Calculating the distance
  distance5 = duration5*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance5: ");
  Serial.println(duration5);

  delay(1000);
  
   // Clears the trigPin
  digitalWrite(trigPin6, LOW);
  delayMicroseconds(2); 
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin6, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin6, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration6 = pulseIn(echoPin6, HIGH);
  
  // Calculating the distance
  distance6 = duration6*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance6: ");
  Serial.println(duration6);

  delay(1000);

}
