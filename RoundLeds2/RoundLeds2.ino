

const static int FIRST_LED = 4;
const static int LAST_LED = 13;
const static int LED_COUNT = 1 + LAST_LED - FIRST_LED;

void setup() {
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    pinMode(pin, OUTPUT);
  }
}

int led = 0;

void loop() {
  const int pin = FIRST_LED + led;
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);

  led = (led + 1) % LED_COUNT;
}
