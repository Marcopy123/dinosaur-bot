#include <Servo.h>

int lightSensor = A0;
int lightValue;
int servo = 3;

Servo servoMotor;
                       
void setup() {
  servoMotor.attach(servo);
  Serial.begin(9600);
  pinMode(lightSensor,INPUT);
  

}

void loop() {

  lightValue = analogRead(lightSensor);
  Serial.println(lightValue);
  
  if(lightValue<=80){
    delay(500); 
    servoMotor.write(70);
    delay(200);
    
    
  }
  else{
    servoMotor.write(0);
  }

}
