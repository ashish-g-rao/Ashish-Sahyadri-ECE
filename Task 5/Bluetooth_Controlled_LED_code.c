
const int ledPin = PD0; // LED connected to digital pin PD0 

void setup() {
  pinMode(ledPin, OUTPUT); // Initialize the LED pin as an output
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  if (Serial.available() > 0) { // Check if data is available to read
    char command = Serial.read(); // Read the incoming byte
    if (command == '1') {
      digitalWrite(ledPin, HIGH); // Turn the LED on
    } else if (command == '0') {
      digitalWrite(ledPin, LOW); // Turn the LED off
    }
  }
}
