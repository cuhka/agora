

const static int FIRST_LED = 4;
const static int LAST_LED = 13;

void setup() {
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    digitalWrite(pin, HIGH);

  }

  delay(500);

  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    digitalWrite(pin, LOW);
  }

  delay(500);
}
