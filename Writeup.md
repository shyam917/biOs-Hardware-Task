# C P Ghanshyam
# AM.EN.U4CSE20118
## Task 1
- Open TinkerCAD.
- Create a new circuit.
- Take a ARDUINO Chip and connect its GPIO pins to LED's via a breadboard.
- Code the Chip to make the led's to blink one after the other
### Code
```INO
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
```

![](./Task1/Smashing%20Jarv.png)

## Task 2
- Solve the 1st Circuit to get the value of "a".
- So we get the value as $(10011110)_{decimal}$ so we get a=158.
- Similarly solve the circuits to obtain b.
-  We get the value of b as $(11001110)_{decimal}$ so we get b=206.
![](./Task%202/MicrosoftTeams-image.png)