const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
  // digitalWrite(LED, HIGH);
  digitalWrite(LED, LOW);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(9);
  digitalWrite(LED, LOW);
  delay(1);
}
