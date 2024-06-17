int ledPin = 13;
volatile byte state = LOW;
const int interruptPin = 2;
void setup() {
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(0, blink1, CHANGE); // put your setup code here, to run once:
}
void loop() {
  digitalWrite(ledPin, state);
}
void blink1() {
  state = !state;
}
