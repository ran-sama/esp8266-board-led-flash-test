#define BOARD_LED_PIN 2

void setup() {
  pinMode(BOARD_LED_PIN, OUTPUT);
  digitalWrite(BOARD_LED_PIN, LOW);
}

void loop() {
  delay(250);
  digitalWrite(BOARD_LED_PIN, LOW);
  delay(250);
  digitalWrite(BOARD_LED_PIN, HIGH);
}
