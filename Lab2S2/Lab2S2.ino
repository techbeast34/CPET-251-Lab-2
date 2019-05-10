#define SW1_PIN 5
#define LED1_PIN 11
boolean isSwPressed;

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(SW1_PIN, INPUT_PULLUP); 
}

void loop() {
  isSwPressed = !digitalRead(SW1_PIN);
  
  if(isSwPressed){
    digitalWrite(LED1_PIN, HIGH);
  }
  else {
    digitalWrite(LED1_PIN, LOW);
  }
}
