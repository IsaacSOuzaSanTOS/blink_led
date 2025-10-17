void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, 1);
  delay(400);
  digitalWrite(LED_BUILTIN, 0);
  delay(300);
}
