
void setup() {
  Serial.begin(9600);
  
  pinMode(4, OUTPUT);
  pinMode(5, INPUT_PULLUP);

  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
}

void loop() {
  int state = digitalRead(5);
  if(state == 0){
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
}
