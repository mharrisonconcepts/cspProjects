void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  Serial.setTimeout(10);
  pinMode(13, OUTPUT);
  Serial.println("Hello, How are you?");  //tells the serial port to display the message "Hello, How are you?"
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");

}
// the loop function runs over and over again forever
void loop()
{ if (Serial.available() > 0) {
    String command; //identifies the String in the buffer as the command to later link to the feedback provided by the Arduino
    command = Serial.readString();  //tells the Arduino where to look for the command
    command.trim(); //trims unnecesary characters from the serial moniter input
    if (String(command) == "On") { //tells the Arduino to look at the String "command" and gives it an option for a command
      digitalWrite(13, HIGH); //tells the Arduino to look for the string "On" before turning on the LED
      Serial.println("You turned it on bro"); //provides feedback in the serial moniter telling you what you did
    }
    else if (String(command) == "Off") {  //tells the Arduino to look at the String "command" and gives it an option for a command
      digitalWrite(13, LOW);  //tells the Arduino to look for the string "Off" before turning off the LED
      Serial.println("You just turned off the LED");  //provides feedback in the serial moniter telling you what you did
    }

  }
}
