

const static int FIRST_LED = 4;
const static int LAST_LED = 13;
const static unsigned long DELAY = 50;

void setup() {
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    digitalWrite(pin, HIGH);
    delay(DELAY);
  }

  
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    digitalWrite(pin, LOW);
    delay(DELAY);
  }

}
