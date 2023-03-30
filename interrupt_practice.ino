#include <Servo.h>

const int SERVO = 9;
const int ledPin = 10;
Servo servo;
const int buttonPin = 2;

int servo_state = 30;
bool servo_state_changed = false;
int led_state = LOW;
bool led_state_changed = false;
int buttonState;
int lastButtonState = LOW;

unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 5
0;    

void buttonPressed() {
  servo_state = (servo_state == 30) ? 150 : 30;
  led_state = (led_state == LOW) ? HIGH : LOW;
  servo_state_changed = true;
  led_state_changed = true;
}

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPressed, RISING);
  servo.attach(SERVO);
  servo.write(0);
  delay(1000);
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
        if (servo_state_changed) {
          servo_state_changed = false;
          servo.write(servo_state);
        }
        if (led_state_changed) {
          led_state_changed = false;
          digitalWrite(ledPin, led_state);
        }
      }
    }
  }

  lastButtonState = reading;
}
