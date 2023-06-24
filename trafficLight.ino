/*
An arduino program for a mini traffic light.
Idea is that a traffic light is in one state: green or red.
When a button is pressed then the light changes the state.
*/

// initialize variables which represent my current pin setup on arduino
int greenLed = 5; // pin D5 on Arduino Nano
int yellowLed = 4; // pin D4 on Arduino Nano
int redLed = 3; // pin D3 on Arduino Nano
int button = 10; // pin D10 on Arduino Nano
// for reading the states
int buttonPressed = 0;
int greenLedState = LOW; // a helper variable to keep track of my traffic light state

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(button, INPUT);
  // I'll begin my traffic light with red light being on:
  digitalWrite(redLed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonPressed = digitalRead(button);

  if(buttonPressed == HIGH && greenLedState == LOW) { // button is pressed and green is off
    delay(200);
    // turn on yellow
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    // turn on green
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
    greenLedState = HIGH;
  }
  else if(buttonPressed == HIGH && greenLedState == HIGH) {
    delay(200);
    // turn on yellow
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    // turn on red
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    greenLedState = LOW;
  }
}
