

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
  const int led2 = ((led + LED_COUNT - 3) % LED_COUNT);
  digitalWrite(pin, HIGH);
  digitalWrite(led2 + FIRST_LED, LOW);
  delay(100);

  led = (led + 1) % LED_COUNT;
}
