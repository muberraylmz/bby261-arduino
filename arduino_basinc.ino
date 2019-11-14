/*
*/
#define fsrpin A0

#define  c     3830    // 261 Hz
#define  d     3400    // 294 Hz
#define  e     3038    // 329 Hz
#define  f     2864    // 349 Hz
#define  g     2550    // 392 Hz
#define  a     2272    // 440 Hz
#define  b     2028    // 493 Hz
#define  C     1912    // 523 Hz
// Define a special note, 'R', to represent a rest
#define  R     0

int speakerOut = 8;

const int arduLed1=4;
const int arduLed2=5;
const int arduLed3=6;
const int arduLed4=7;

int fsrreading;

void setup() {
  pinMode(speakerOut, OUTPUT);
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
    int melody[] = {a};
    digitalWrite(speakerOut,HIGH);   
  }
  else if (fsrreading<200) {
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
    digitalWrite(arduLed4, LOW);  
    int melody[] = {d};
    digitalWrite(speakerOut,HIGH);     
  }
  else if (fsrreading<300) {
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, LOW);
    digitalWrite(arduLed4, LOW);
    int melody[] = {f};
    digitalWrite(speakerOut,HIGH);       
  }
  else if (fsrreading<400) {
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);
    digitalWrite(arduLed4, LOW); 
    int melody[] = {b};
    digitalWrite(speakerOut,HIGH);   
  }
  else {
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);
    digitalWrite(arduLed4, HIGH); 
    int melody[] = {e};
    digitalWrite(speakerOut,HIGH);   
  }
}
