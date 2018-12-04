const unsigned int LED_PIN = 13;
const unsigned int DOT = 500;
const unsigned int DASH = DOT * 3;
const unsigned int CHAR_SPACE = DOT;
const unsigned int LETTER_SPACE = DOT * 3;
const unsigned int WORD_SPACE = DOT * 7;

const int A[3] = {2, DOT, DASH};
const int E[2] = {1, DOT};
const int L[5] = {4, DOT, DASH, DOT, DOT};
const int X[5] = {4, DASH, DOT, DOT, DASH};

void setup() {
//  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  writeMorseLetter(A);
  turnOff(LETTER_SPACE);
  writeMorseLetter(L);
  turnOff(LETTER_SPACE);
  writeMorseLetter(E);
  turnOff(LETTER_SPACE);
  writeMorseLetter(X);
  turnOff(WORD_SPACE);
}

void writeMorseLetter(int codes[]) {
  int total = codes[0];

  if(total == 1){
    turnOn(codes[1]);
    return;
  }
  
  int i;
  for (i=1; i < total; i++) {
    turnOn(codes[i]);
    turnOff(CHAR_SPACE);
  }
  turnOn(codes[total]);
}

void turnOn(int code) {
  digitalWrite(LED_PIN, HIGH);
  delay(code);
}

void turnOff(int code) {
  digitalWrite(LED_PIN, LOW);
  delay(code);
}
