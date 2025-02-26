#include <Servo.h>

Servo myServo;

const int servoPin = 9;    
const int irSensorPin = 6; 

const int openAngle = 30;  
const int closeAngle = 180; 

unsigned long interval = 30000; 
const unsigned long openDuration = 5000; 
const unsigned long maxInterval = 60000; 

unsigned long previousMillis = 0; 
bool isTimerExpired = false;      
int openCount = 0;                

void setup() {
  pinMode(irSensorPin, INPUT);
  myServo.attach(servoPin);

  myServo.write(closeAngle);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    isTimerExpired = true;       
    previousMillis = currentMillis; 
  }

  if (isTimerExpired) {
    if (digitalRead(irSensorPin) == LOW) { 
      myServo.write(openAngle);   
      delay(openDuration);        
      myServo.write(closeAngle);  
      isTimerExpired = false;     

      openCount++;

      if (openCount >= 3) {
        openCount = 0; 
        if (interval < maxInterval) {
          interval += 10000; 
        }
      }
    }
  }
}
