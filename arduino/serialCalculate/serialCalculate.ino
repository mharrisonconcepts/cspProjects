int number1;
char sign;
int number2;
int result;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    char inbound = Serial.read();
    Serial.print(inbound, OCT);
    Serial.println("");
  }
}
