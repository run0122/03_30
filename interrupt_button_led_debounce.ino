const int ledPin = 10;
const int buttonPin = 2;

int led_state = LOW;
bool led_state_changed = false;

int buttonState;            
int lastButtonState = LOW;  

unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;    

void buttonPressed() {
  led_state = (led_state == LOW) ? HIGH : LOW;
  led_state_changed = true;
}

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPressed, RISING);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == HIGH) {
        if (led_state_changed) {
          led_state_changed = false;
        }
      }
    }
  }

  digitalWrite(ledPin, led_state);

  lastButtonState = reading;
}
