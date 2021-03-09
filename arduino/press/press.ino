int RED_LED=2;
int SWITCH=4;

int DELAY=1000;
int RED_LED_STATE=HIGH;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SWITCH, INPUT_PULLUP);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  DELAY-=100;
  if (DELAY <= 0) {
    DELAY = 1000;
  }
  
  // First turn the built in LED on
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DELAY); 

  // Now turn it off. 
  digitalWrite(LED_BUILTIN, LOW);
  delay(DELAY);

  int sensorVal = digitalRead(SWITCH);
  if (sensorVal == HIGH) {
    Serial.println("No change");
  } else {
    Serial.println("Toggling");
    if (RED_LED_STATE == HIGH) {
      RED_LED_STATE = LOW;
    } else {
      RED_LED_STATE = HIGH;
    }
    
  }
  digitalWrite(RED_LED, RED_LED_STATE);
  
  
}
