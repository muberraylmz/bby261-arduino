#include <Wire.h>
#include <ZumoShield.h>
const int ileri=5;
const int geri=6;
const int sag=7;
const int sol=8;
Pushbutton button(ZUMO_BUTTON);

void setup(){
Serial.begin(9600);
button.waitForButton();
pinMode(ileri, OUTPUT); 
pinMode(geri, OUTPUT);
pinMode(sag, OUTPUT);
pinMode(sol, OUTPUT);
}

void loop(){
digitalWrite(ileri, HIGH); 
digitalWrite(geri, LOW);
digitalWrite(sag, LOW);
digitalWrite(sol, LOW);
delay(2000);

digitalWrite(ileri, LOW);
digitalWrite(geri, LOW);
digitalWrite(sag, HIGH);
digitalWrite(sol, LOW);
delay(500);

digitalWrite(ileri, LOW);
digitalWrite(geri, LOW);
digitalWrite(sag, HIGH);
digitalWrite(sol, LOW);
delay(500);

digitalWrite(ileri, LOW); 
digitalWrite(geri, HIGH);
digitalWrite(sag, LOW);
digitalWrite(sol, LOW);
delay(1500);
}
