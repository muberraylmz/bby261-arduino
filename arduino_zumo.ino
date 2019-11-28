#include <Wire.h>
#include <ZumoShield.h>
#define LED_PIN 12
ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON);
void setup(){
  pinMode(LED_PIN, OUTPUT);
}

void loop(){
if (button.getSingleDebouncedRelease()){ //https://github.com/pololu/pushbutton-arduino
  digitalWrite(LED_PIN, HIGH);
  for (int speed = 0; speed <= 1000; speed++)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }
  for (int speed = 1000; speed >= 0; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }
  digitalWrite(LED_PIN, LOW);
  for (int speed = 0; speed >= -1000; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }
  for (int speed = -1000; speed <= 0; speed++)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }
  digitalWrite(LED_PIN, HIGH);
  for (int speed = 0; speed <= 1000; speed++)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }
  for (int speed = 1000; speed >= 0; speed--)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }
  digitalWrite(LED_PIN, LOW);
  for (int speed = 0; speed >= -1000; speed--)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }
  for (int speed = -1000; speed <= 0; speed++)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }
  delay(400);
}
}
