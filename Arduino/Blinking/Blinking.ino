  int ledOne = 2;
  int ledTwo = 7;

void setup() {
  // put your setup code here, to run once:

   pinMode(ledOne, OUTPUT);
   pinMode(ledTwo, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledOne, HIGH);
  delay(1000);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, HIGH);
  delay(500);
  digitalWrite(ledTwo, LOW);
  delay(500);
  digitalWrite(ledTwo, HIGH);
  delay(500);
  digitalWrite(ledTwo, LOW);
  delay(500);
  digitalWrite(ledOne, HIGH);
  delay(1000);
  digitalWrite(ledOne, LOW);
}
