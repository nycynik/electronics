int RED_LED=2;
int DELAY=1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Blink time ");
  Serial.println(DELAY);

  DELAY-=100;
  if (DELAY <= 0) {
    DELAY = 1000;
  }
  
  // First turn the built in LED on
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(RED_LED, LOW);
  delay(DELAY); 

  // Now turn it off. 
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(RED_LED, HIGH);
  delay(DELAY);

  
  
}
