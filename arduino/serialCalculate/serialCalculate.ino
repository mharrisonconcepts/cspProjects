long number1;
char sign;
long number2;
long result;
long integers[2];
bool newData = false;
int count = 0;
bool readyToPrint = false;
bool readyToCalculate = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  char sign = ' ';
  cleanData();
  parseData();
  calculate();
  concatenateResultsAndPrint();
  readyToCalculate = false;
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
    bool newData = true;
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
    readyToCalculate = true;
  }
}
void calculate() {
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
        break;
      case '/':
        result = number1 / number2;
        readyToPrint = true;
        Serial.println("/ broke");
        break;
      default:
        Serial.println("This operation is not supported. Please try again.");
        readyToPrint = false;
        break;
    }
    bool readyToPrint = true;
  }
}
void concatenateResultsAndPrint() {
  if (readyToPrint == true){
    String (printCalculation) = String(number1) + ' ' + String(sign) + ' ' + String(number2) + String(" = ") + String(result);
    Serial.println(printCalculation);
    readyToPrint = false;
    }
  }
