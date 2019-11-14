/*
*/
#define fsrpin A0

const int arduLed1=4;
const int arduLed2=5;
const int arduLed3=6;
const int arduLed4=7;

int fsrreading; //Variable to store FSR value

  // Begin serial communication at a baud rate of 9600:
void setup() {
   Serial.begin(9600);
  pinMode(arduLed1, OUTPUT);
  pinMode(arduLed2, OUTPUT);
  pinMode(arduLed3, OUTPUT);
  pinMode(arduLed4, OUTPUT);  
}

void loop() {
  fsrreading = analogRead(fsrpin);
  Serial.print("Analog reading = ");
  Serial.print(fsrreading);
  if (fsrreading<100) {
    digitalWrite(arduLed1, LOW);
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
    digitalWrite(arduLed4, LOW);    
  }
  else if (fsrreading<200) {
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
    digitalWrite(arduLed4, LOW);    
  }
  else if (fsrreading<300) {
  digitalWrite(arduLed1, HIGH);
  digitalWrite(arduLed2, HIGH);
  digitalWrite(arduLed3, LOW);
  digitalWrite(arduLed4, LOW);    
  }
  else if (fsrreading<400) {
  digitalWrite(arduLed1, HIGH);
  digitalWrite(arduLed2, HIGH);
  digitalWrite(arduLed3, HIGH);
  digitalWrite(arduLed4, LOW); 
  }
  else {
  digitalWrite(arduLed1, HIGH);
  digitalWrite(arduLed2, HIGH);
  digitalWrite(arduLed3, HIGH);
  digitalWrite(arduLed4, HIGH); 
  }
}
