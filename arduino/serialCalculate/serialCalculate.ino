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
  calculate();
}
void cleanData() {
  count = 0;
  while (Serial.available() > 0) {
    newData = true;
    if (isDigit(Serial.peek()) == true) {
      delay(1);
      integers[count] = Serial.parseInt();
      count++;
      Serial.print("The current count is ");
      Serial.println(count);
    }
    else if (isGraph(Serial.peek()) == true) {
      delay(1);
      sign = Serial.read();
      Serial.println(sign);
    }
    else {
      Serial.read();
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
void calculate() {
  bool readyToCalculate = false;
  bool readyToPrint = false;
  if (readyToCalculate == true) {
    Serial.println("readyToCalculate is running");
    switch (sign) {
      case '+':
        result = number1 + number2;
        readyToPrint = true;
        Serial.println("+ broke");
        break;
      case '-':
        result = number1 - number2;
        readyToPrint = true;
        Serial.println("- broke");
        break;
      case '*':
        result = number1 * number2;
        readyToPrint = true;
        Serial.println("* broke");
      case '/':
        result = number1 / number2;
        readyToPrint = true;
        Serial.println("/ broke");
      default:
        Serial.println("This operation is not supported. Please try again.");
        readyToPrint = false;
        break;
    }
  }
}
