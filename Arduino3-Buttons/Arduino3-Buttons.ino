const int LED = 9; // the pin for the LED
const int BUTTON = 7; // the input pin where the // pushbutton is connected
int val = 0; // val will be used to store the state // of the input pin

void setup() {
  pinMode(LED, OUTPUT); // tell Arduino LED is an output pinMode(BUTTON, INPUT); // and BUTTON is an input
}

void loop() {
  val = digitalRead(BUTTON); // read input value and store it
  if (val == HIGH) {
    digitalWrite(LED, HIGH); // turn LED ON
  } else {
    digitalWrite(LED, LOW);
  }
}
