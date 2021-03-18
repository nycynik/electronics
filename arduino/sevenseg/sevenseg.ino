int COUNTER = 0;
const int ledPinsAF[] = {2,3,4,5,6,7,8};
const int dataPin = 8;
const int latchPin = 10;
const int clockPin = 11;


// the binary nmbers 0-9 in order
int dataArray[10] = {
  0B00000011, // 0
  0B10011111, // 1
  0B00100101, // 2
  0B00001101, // 3
  0B10011001, // 4
  0B01001001, // 5
  0B01000001, // 6
  0B00011111, // 7
  0B00000001, // 8
  0B00001001  // 9
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  
}

void turnOffAllLEDS() {
  for (int x=0; x<7; x++) {
    digitalWrite(ledPinsAF[x], HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  
  for (int x=0; x<10; x++) {
    // shiftOut(dataPin, ClickPin, BitOrder, daata);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, dataArray[x]);
    digitalWrite(latchPin, HIGH);

    delay(300);
  }
  
}
