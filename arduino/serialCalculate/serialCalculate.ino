int number1;
char sign;
int number2;
int result;
int integers[32];
bool newData = false;
int count = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  cleanData();
  parseData();
}
void cleanData() {
  while (Serial.available() > 0) {
    int inbound = Serial.read();
    if (isGraph(inbound)) {
      integers[count] = inbound;
      count++;
      newData = true;
    }
  }
}
void parseData() {
  if (newData == true) {
    number1 = integers[0];
    number2 = integers[1];
    Serial.println(number1);
    Serial.println(sign);
    Serial.println(number2);
    newData = false;
  }
}
