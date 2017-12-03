int firstRedPin   = A1;
int firstGreenPin = A2;
int firstBluePin  = A3;

int secondRedPin   = A4;
int secondGreenPin = A5;
int secondBluePin  = A6;

enum STATUS {
  RUNNING,
  FAILURE,
  SUCCESS
};

// Life cycle
void setup() {
  setupBuzzer();
  setupFirstLed();
  setupSecondLed();
}

void loop() {
//  tone(buzzerPin, 1000);
//  delay(300);
//  noTone(buzzerPin);
//  delay(3000);
  
  setStatus(firstLed, running);
  delay(2000);
  
  setStatus(firstLed, success);
  delay(2000);

  setStatus(firstLed, failure);
  delay(2000);
}

// Set colors
void setColor(int redPin, int redValue, int greenPin, int greenValue, int bluePin, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

void setRunningColor(int redPin, int greenPin, int bluePin) {
  setColor(redPin, 255, greenPin, 160, bluePin, 0);
}

void setFailureColor(int redPin, int greenPin, int bluePin) {
  setColor(redPin, 255, greenPin, 0, bluePin, 0);
}

void setSuccessColor(int redPin, int greenPin, int bluePin) {
  setColor(redPin, 0, greenPin, 0, bluePin, 255);
}
}

// Setup LEDs
void setupFirstLed() {
  pinMode(firstRedPin, OUTPUT);
  pinMode(firstGreenPin, OUTPUT);
  pinMode(firstBluePin, OUTPUT);
}

void setupSecondLed() {
  pinMode(secondRedPin, OUTPUT);
  pinMode(secondGreenPin, OUTPUT);
  pinMode(secondBluePin, OUTPUT);
}
