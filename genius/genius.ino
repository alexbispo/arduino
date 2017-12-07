
#define ONE_SECOND 1000
#define HALF_SECOND 500

#define GREEN_LED 2
#define YELLOW_LED 4
#define RED_LED 7
#define BLUE_LED 8

#define SEQUENCY_LENGTH 4

int ledSequency[SEQUENCY_LENGTH];

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  ledSequency[0] = BLUE_LED;
  ledSequency[1] = YELLOW_LED;
  ledSequency[2] = RED_LED;
  ledSequency[3] = GREEN_LED;

}

void loop() {  
  for(int i = 0; i < SEQUENCY_LENGTH; i++){
    flash(ledSequency[i]); 
  }
  flashAll();
}

void flash(int led) {
  digitalWrite(led, HIGH);
  delay(ONE_SECOND);
  digitalWrite(led, LOW);
  delay(HALF_SECOND);
}

void flashAll() {
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(RED_LED, HIGH);
  digitalWrite(BLUE_LED, HIGH);
  
  delay(ONE_SECOND);
  
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
  delay(HALF_SECOND);
}

