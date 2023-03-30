const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
  // digitalWrite(LED, HIGH);
  digitalWrite(LED, LOW);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(5);
  digitalWrite(LED, LOW);
  delay(5);
}
