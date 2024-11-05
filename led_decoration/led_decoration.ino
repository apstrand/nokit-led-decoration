const int blinkPin = 0;

void setup() {
  pinMode(blinkPin, OUTPUT);
}

void loop() {
  digitalWrite(blinkPin, HIGH);
  delay(100);
  digitalWrite(blinkPin, LOW);
  delay(50);
  digitalWrite(blinkPin, HIGH);
  delay(50);
  digitalWrite(blinkPin, LOW);
  delay(100);
  digitalWrite(blinkPin, HIGH);
  delay(500);
  digitalWrite(blinkPin, LOW);
  delay(100);
}
