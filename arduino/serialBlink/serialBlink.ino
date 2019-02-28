void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  Serial.println("Hello, How are you?");  //tells the serial port to display the message "Hello, How are you?"
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
}
// the loop function runs over and over again forever
void loop() {
  if (Serial.readString() == "On") {
    digitalWrite(13, HIGH);
  }
  else if (Serial.readString() == "Off") {
    digitalWrite(13, LOW);
  }
}
