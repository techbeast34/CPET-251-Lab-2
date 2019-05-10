#define LED1_PIN 11
//int LED1_PIN=11;

void setup() {
  pinMode(LED1_PIN, OUTPUT);  
}

void loop() {
  digitalWrite(LED1_PIN, HIGH);
  delay(2000);
  digitalWrite(LED1_PIN, LOW);
  delay(50);
  //LED1_PIN=11; //leave this line of code in when testing “int” declaration
      // comment this line out when using #define
}
