


const static int TILT_SENSOR = 2;
const static int BUZZER = 3;
const static int FIRST_LED = 4;
const static int LAST_LED = 13;
const static int LED_COUNT = 1 + LAST_LED - FIRST_LED;
const static unsigned long DEBOUNCE_DELAY = 50;

const unsigned long DELAY = 500;

int direction = 1;
int led = 0;
unsigned long nextTick = 0;
int tiltState;
int lastTiltState;
unsigned long nextDebounceCheck = 0;


void setup() {
  for (int pin = FIRST_LED; pin <= LAST_LED; pin++) {
    pinMode(pin, OUTPUT);
  }
  pinMode(BUZZER, OUTPUT);
  pinMode(TILT_SENSOR, INPUT);
  tiltState = digitalRead(TILT_SENSOR);
  lastTiltState = tiltState;

  Serial.begin(9600);
}



void loop() {
  const unsigned long now = millis();

  if (now >= nextTick) {
    int pinOn = FIRST_LED + led;
    int pinOff = FIRST_LED + ((LED_COUNT + led - direction) % LED_COUNT);

    digitalWrite(pinOn, HIGH);
    digitalWrite(pinOff, LOW);

    led = (LED_COUNT + (led + direction)) % LED_COUNT;
    nextTick = now + DELAY;
  }

  int currentTiltState = digitalRead(TILT_SENSOR);
  if (currentTiltState != lastTiltState) {
    nextDebounceCheck = now + DEBOUNCE_DELAY;
    lastTiltState = currentTiltState;
  }

  if ( nextDebounceCheck > 0 && now >= nextDebounceCheck) {
    if (currentTiltState != tiltState) {
      tiltState = currentTiltState;
      tone(BUZZER, 8000, 50);
      direction = -direction;
    }

    nextDebounceCheck = 0;
  }
}
