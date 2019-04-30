// This program sets pin 9 as an output. It loops codes that evaluates what the output of pin 9 is, and if the value is
// 0 or less it adds "delta", which is specified as 1. If/when the value is 255 or greater, the program adds -delta, or the
// negation of delta's last value.

int lightValue = 0; 
int delta = 1; 

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(10); 
  pinMode(9, OUTPUT); 
}

void loop() { 
  lightValue = lightValue + delta; 
  if (lightValue <= 0 || lightValue >= 255) {
    delta = -delta;
  }
  analogWrite(9, lightValue);
  Serial.println(lightValue);
  delay(10);
}
