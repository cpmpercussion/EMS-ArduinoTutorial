int ledPin = 9;      // LED connected to digital pin 9  
int analogPin = 3;   // LDR connected to analog pin 3  
int val = 0;         // variable to store the read value

void setup() {  
  pinMode(ledPin, OUTPUT);   // sets the pin as output  
  Serial.begin(9600); // start serial communication
}

void loop() {  
  val = analogRead(analogPin);   // read the input pin  
  analogWrite(ledPin, val / 4);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255  
  Serial.println(val); // "print" the value to the computer.
}
