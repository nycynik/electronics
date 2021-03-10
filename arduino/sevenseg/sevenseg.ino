int COUNTER = 0;
const int ledPinsAF[] = {2,3,4,5,6,7,8};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int x=0; x<7; x++) {
    pinMode(ledPinsAF[x], OUTPUT);
  }
  
}

void turnOffAllLEDS() {
  for (int x=0; x<7; x++) {
    digitalWrite(ledPinsAF[x], HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  turnOffAllLEDS();
  // now turn on one
  digitalWrite(ledPinsAF[COUNTER], LOW);
  delay(700);

  COUNTER++;
  if (COUNTER>7) {
    COUNTER = 0;
  }
}
