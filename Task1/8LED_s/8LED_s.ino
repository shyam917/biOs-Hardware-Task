void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(1000);
  digitalWrite(12,LOW);
}
