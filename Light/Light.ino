const static int LIGHT_SENSOR = A0;
const static int FIRST_LED = 4;
const static int LAST_LED = 13;
const static int LED_COUNT = 1 + LAST_LED - FIRST_LED;
const static unsigned long MIN_DELAY = 50;

int led = 0;

void setup() {
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
    int pinOn = FIRST_LED + led;
    int pinOff = FIRST_LED + ((LED_COUNT + led - 1) % LED_COUNT);

    digitalWrite(pinOn, HIGH);
    digitalWrite(pinOff, LOW);

    led = (LED_COUNT + (led + 1)) % LED_COUNT;

    int light = analogRead(LIGHT_SENSOR);
    unsigned long delayTime = MIN_DELAY + light;
    delay(delayTime);
}
