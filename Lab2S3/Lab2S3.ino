#define SW1_PIN 5
#define LED1_PIN 11
#define MSEC_SAMPLE 100

boolean isSwPressed, prevIsSwPressed, isSwJustReleased, isSwJustPressed,
isSwChange;

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(SW1_PIN, INPUT_PULLUP);
  digitalWrite(LED1_PIN, LOW);

  Serial.begin(9600);
  Serial.println(F("Lab 2: Switch State Decoding v0.0\n"));
}

void loop() {
  prevIsSwPressed = isSwPressed;
  isSwPressed = !digitalRead(SW1_PIN);
  isSwJustPressed = (isSwPressed && !prevIsSwPressed);
  isSwJustReleased = (!isSwPressed && prevIsSwPressed);
  isSwChange = (isSwJustReleased || isSwJustPressed);

  //digitalWrite(LED1_PIN, isSwPressed);
  digitalWrite(LED1_PIN, isSwJustReleased);
  //digitalWrite(LED1_PIN, isSwJustPressed);
  //digitalWrite(LED1_PIN, isSwChange);
  //digitalWrite(LED1_PIN, !digitalRead(LED1_PIN));
  
  delay(MSEC_SAMPLE);
}
