const int buttonPin = 8;    // Pin for button input
const int ledPin = 13;      // Pin for LED output

void setup() {
  pinMode(ledPin, OUTPUT);     // Set LED pin as output
  pinMode(buttonPin, INPUT);   // Set button pin as input
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Read button state
  if (buttonState == HIGH) {                // If button is pressed
    digitalWrite(ledPin, HIGH);             // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);              // Turn LED off
  }
}
