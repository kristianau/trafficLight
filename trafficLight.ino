/*
An arduino program for a mini traffic light.
Idea is that a traffic light is in one state: green or red.
When a button is pressed then the light changes the state.
*/

// initialize variables which represent my current pin setup on arduino
int greenLed = 5;
int yellowLed = 4;
int redLed = 3;
int button = 10;
// for reading the states
int buttonPressed = 0;
int greenLedState = LOW; // a helper variable to keep track of my traffic light state

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(button, INPUT);
  // I'll begin my traffic light with red light being on
  digitalWrite(redLed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonPressed = digitalRead(button);

  if(buttonPressed == HIGH && greenLedState == LOW) { // button is pressed and green is off
    delay(200);
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
    greenLedState = HIGH;
  }
  else if(buttonPressed == HIGH && greenLedState == HIGH) {
    delay(200);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    greenLedState = LOW;
  }
}
