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
const int motorPin1 = 13;
const int motorPin2 = 12;
const int motorPin3 = 11;
const int motorPin4 = 10;
const int motorPin5 = 9;
const int motorPin6 = 8;

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
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin5, OUTPUT);
  pinMode(motorPin6, OUTPUT);
  Serial.begin(9600); // Starts the serial communication

}

void vibrateIntensity(long duration, const int motorPin) {
  if(duration <= 5000 and duration >= 3000) {
    analogWrite(motorPin, 60);
  }
  else if(duration <= 3000 and duration >= 2000){
    analogWrite(motorPin, 120);
  }
  else if(duration <= 2000){
    analogWrite(motorPin, 255);
  } 
  else if(duration >= 7000){
    analogWrite(motorPin, 0);
  }
}

void loop() {
 
  //////////////////////////////////SENSOR 1//////////////////////////////////////

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

  vibrateIntensity(duration1, motorPin1);
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance1: ");
  Serial.println(duration1);
  
  delay(1000);
  
  //////////////////////////////////END SENSOR 1//////////////////////////////////

  //////////////////////////////////SENSOR 2//////////////////////////////////////
  
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

  vibrateIntensity(duration2, motorPin2);
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance2: ");
  Serial.println(duration2);
  
  delay(1000);

  //////////////////////////////////END SENSOR 2//////////////////////////////////
  
  //////////////////////////////////SENSOR 3//////////////////////////////////////
  
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

  vibrateIntensity(duration3, motorPin3);
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance3: ");
  Serial.println(duration3);

  delay(1000);

  //////////////////////////////////END SENSOR 3//////////////////////////////////  

  //////////////////////////////////SENSOR 4//////////////////////////////////////
  
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

  vibrateIntensity(duration4, motorPin4);
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance4: ");
  Serial.println(duration4);

  delay(1000);

  //////////////////////////////////END SENSOR 4//////////////////////////////////  

  //////////////////////////////////SENSOR 5//////////////////////////////////////
  
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

  vibrateIntensity(duration5, motorPin5);
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance5: ");
  Serial.println(duration5);

  delay(1000);

  //////////////////////////////////END SENSOR 5//////////////////////////////////  

  //////////////////////////////////SENSOR 6//////////////////////////////////////

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

  vibrateIntensity(duration6, motorPin6);
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance6: ");
  Serial.println(duration6);

  delay(1000);

  //////////////////////////////////END SENSOR 6//////////////////////////////////  

}
