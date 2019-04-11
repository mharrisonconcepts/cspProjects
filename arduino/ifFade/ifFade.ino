int lightValue = 0; //sets "lightValue" to 0 at the beginning of the program
int delta = 1; //sets "delta" to 1

void setup() { //runs code once
  Serial.begin(9600); //sets serial port as output
  Serial.setTimeout(10); //tells the serial buffer to refresh every 10 milliseconds
  pinMode(9, OUTPUT); //sets pin 9 as an output
}

void loop() { //runs code repeatedly
  lightValue = lightValue + delta; //specifies the value of "lightValue telling the 
  if (lightValue <= 0 || lightValue >= 255) {
    delta = -delta;
  }
  analogWrite(9, lightValue);
  Serial.println(lightValue);
  delay(10);
}
