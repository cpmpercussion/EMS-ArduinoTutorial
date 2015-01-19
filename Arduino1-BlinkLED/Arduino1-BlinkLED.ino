int ledPin = 9;      // LED connected to digital pin 9  

void setup () {
  pinMode(ledPin, OUTPUT); // Enable pin 13 for digital output
}

void loop () {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(1000); // Wait one second (1000 milliseconds)
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(1000); // Wait one second
}