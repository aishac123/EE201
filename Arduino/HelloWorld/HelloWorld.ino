int on = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(on, OUTPUT);
}

void loop() {
  on = digitalRead(7);
  // put your main code here, to run repeatedly:
  if (on == HIGH) {
    Serial.println("Hello World");
  } else {
    Serial.println("It's 2023");
  }
}
