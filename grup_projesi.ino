const int trigger_pin=13;
const int echo_pin=12;
const int buzzer=7;
const int cled=8;
const int bled=9;
const int aled=10;

int Sure;
int Mesafe;

void setup() {
  pinMode(bled, OUTPUT);
  pinMode(cled, OUTPUT);
  pinMode(aled, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin, LOW);
  Sure=pulseIn(echo_pin, HIGH);
  Mesafe=(Sure/2)/28.5;
  Serial.println(Mesafe);
  delay(500);

if(Mesafe<=20)
  {
    digitalWrite(aled, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(aled, LOW);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  else if(Mesafe<=35)
  {
    digitalWrite(bled, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(400);
    digitalWrite(bled, LOW);
    digitalWrite(buzzer, LOW);
    delay(200);
  }
  else
  {
    digitalWrite(cled, HIGH);
    delay(600);
    digitalWrite(cled, LOW);
  }
}
