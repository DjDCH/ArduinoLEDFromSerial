// Connect an RGB LED to the PWM pins as indicated below

#define REDPIN 6
#define GREENPIN 5
#define BLUEPIN 3

#define SLEEP 10

void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() >= 3)  {
      analogWrite(REDPIN, Serial.read());
      analogWrite(GREENPIN, Serial.read());
      analogWrite(BLUEPIN, Serial.read());
  }

  delay(SLEEP);
}
