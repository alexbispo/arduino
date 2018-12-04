
#define RED_LED 2
#define ONE_SECOND 1000
#define HALF_SECOND 500

void setup() {  
  pinMode(RED_LED, OUTPUT);

}

void loop() {
  blink(RED_LED);

}

void blink(int led){
  digitalWrite(led, HIGH);
  delay(ONE_SECOND);
  digitalWrite(led, LOW);
  delay(HALF_SECOND);
}

