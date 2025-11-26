
int LED = 8;
int KNOB = 0;

void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(KNOB);                // Read potentiometer value (A0)
  int ledPower = map(val, 0, 1023, 0, 254);  
  analogWrite(8, ledPower);                 // Set LED brightness
}
