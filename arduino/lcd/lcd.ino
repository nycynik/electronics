#include <LiquidCrystal.h>
#include <time.h>

/* Real time requires an additional module, Real Time Clock, I 
 *  don't have that module :) So I'll stop here.
 *  
 */
const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs, en, d4, d5,d6,d7);

 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  lcd.begin(16, 2);
  
   
}

void loop() {
  // put your main code here, to run repeatedly:
  char time_str[255];
  String t = "";
  time_t current_time = time(NULL);
  struct tm *tm = localtime(&current_time);
  strftime(time_str, sizeof(time_str), "%c", tm);

  Serial.print("Blink time ");
  Serial.println(time_str);
  
  delay(500); 
  lcd.setCursor(0,1);
  lcd.print(time_str); 
  lcd.scrollDisplayLeft();

  lcd.setCursor(0,0);
  lcd.print("Hello There!");
}
