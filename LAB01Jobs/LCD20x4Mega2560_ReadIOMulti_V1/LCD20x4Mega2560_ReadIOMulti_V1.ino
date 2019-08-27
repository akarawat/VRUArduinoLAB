/*
Akarawat Panwilai
VRU Mechatronics and Robot
Asset tracking system.
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 20, 4); // ถ้าไม่ได้ให้ลอง 0x3F
//2-12(11), 14-19(6), 22-34(13)

int inPin1 = 2;
int inPin2 = 3;
int inPin3 = 4;
int inPin4 = 5;
int inPin5 = 6;
int inPin6 = 7;
int inPin7 = 8;
int inPin8 = 9;
int inPin9 = 10;
int inPin10 = 11;

int inPin11 = 12;
int inPin12 = 14;
int inPin13 = 15;
int inPin14 = 16;
int inPin15 = 17;
int inPin16 = 18;
int inPin17 = 19;
int inPin18 = 22;
int inPin19 = 23;
int inPin20 = 24;

int inPin21 = 25;
int inPin22 = 26;
int inPin23 = 27;
int inPin24 = 28;
int inPin25 = 29;
int inPin26 = 30;
int inPin27 = 31;
int inPin28 = 32;
int inPin29 = 33;
int inPin30 = 34;

int val = 0;

//const long intval = 20;  /* set delay loop second */
//unsigned long prevms = 0;

void setup()
{
  Serial.begin(115200);
  while (!Serial);
  Serial.println();
  
  lcd.init();
  lcd.home();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("VRU MECHA&Robot 62");

  lcd.setCursor(0, 1);
  lcd.print("  Asset checking");

  lcd.setCursor(0, 2);
  lcd.print("ACTUAL : 30");

  lcd.setCursor(0, 3);
  lcd.print("READY : 0");

  //lcd.noBacklight();

  pinMode(inPin1, INPUT);
  pinMode(inPin2, INPUT);
  pinMode(inPin3, INPUT);

  delay(1000);
  //prevms = millis();
}
int chkLoop;
void loop()
{
  val = 0;

  if (digitalRead(inPin1)) { val += 1; Serial.print("Pin:" + String(inPin1)); Serial.println("Val:" + String(digitalRead(inPin1))); }
  if (digitalRead(inPin2)) { val += 1; Serial.print("Pin:" + String(inPin2)); Serial.println("Val:" + String(digitalRead(inPin2))); }
  if (digitalRead(inPin3)) { val += 1; Serial.print("Pin:" + String(inPin3)); Serial.println("Val:" + String(digitalRead(inPin3))); }
  if (digitalRead(inPin4)) { val += 1; Serial.print("Pin:" + String(inPin4)); Serial.println("Val:" + String(digitalRead(inPin4))); }
  if (digitalRead(inPin5)) { val += 1; Serial.print("Pin:" + String(inPin5)); Serial.println("Val:" + String(digitalRead(inPin5))); }
  if (digitalRead(inPin6)) { val += 1; Serial.print("Pin:" + String(inPin6)); Serial.println("Val:" + String(digitalRead(inPin6))); }
  if (digitalRead(inPin7)) { val += 1; Serial.print("Pin:" + String(inPin7)); Serial.println("Val:" + String(digitalRead(inPin7))); }
  if (digitalRead(inPin8)) { val += 1; Serial.print("Pin:" + String(inPin8)); Serial.println("Val:" + String(digitalRead(inPin8))); }
  if (digitalRead(inPin9)) { val += 1; Serial.print("Pin:" + String(inPin9)); Serial.println("Val:" + String(digitalRead(inPin9))); }
  if (digitalRead(inPin10)) { val += 1; Serial.print("Pin:" + String(inPin10)); Serial.println("Val:" + String(digitalRead(inPin10))); }
  
  if (digitalRead(inPin11)) { val += 1; Serial.print("Pin:" + String(inPin11)); Serial.println("Val:" + String(digitalRead(inPin11))); }
  if (digitalRead(inPin12)) { val += 1; Serial.print("Pin:" + String(inPin12)); Serial.println("Val:" + String(digitalRead(inPin12))); }
  if (digitalRead(inPin13)) { val += 1; Serial.print("Pin:" + String(inPin13)); Serial.println("Val:" + String(digitalRead(inPin13))); }
  if (digitalRead(inPin14)) { val += 1; Serial.print("Pin:" + String(inPin14)); Serial.println("Val:" + String(digitalRead(inPin14))); }
  if (digitalRead(inPin15)) { val += 1; Serial.print("Pin:" + String(inPin15)); Serial.println("Val:" + String(digitalRead(inPin15))); }
  if (digitalRead(inPin16)) { val += 1; Serial.print("Pin:" + String(inPin16)); Serial.println("Val:" + String(digitalRead(inPin16))); }
  if (digitalRead(inPin17)) { val += 1; Serial.print("Pin:" + String(inPin17)); Serial.println("Val:" + String(digitalRead(inPin17))); }
  if (digitalRead(inPin18)) { val += 1; Serial.print("Pin:" + String(inPin18)); Serial.println("Val:" + String(digitalRead(inPin18))); }
  if (digitalRead(inPin19)) { val += 1; Serial.print("Pin:" + String(inPin19)); Serial.println("Val:" + String(digitalRead(inPin19))); }
  if (digitalRead(inPin20)) { val += 1; Serial.print("Pin:" + String(inPin20)); Serial.println("Val:" + String(digitalRead(inPin20))); }
  
  if (digitalRead(inPin21)) { val += 1; Serial.print("Pin:" + String(inPin21)); Serial.println("Val:" + String(digitalRead(inPin21))); }
  if (digitalRead(inPin22)) { val += 1; Serial.print("Pin:" + String(inPin22)); Serial.println("Val:" + String(digitalRead(inPin22))); }
  if (digitalRead(inPin23)) { val += 1; Serial.print("Pin:" + String(inPin23)); Serial.println("Val:" + String(digitalRead(inPin23))); }
  if (digitalRead(inPin24)) { val += 1; Serial.print("Pin:" + String(inPin24)); Serial.println("Val:" + String(digitalRead(inPin24))); }
  if (digitalRead(inPin25)) { val += 1; Serial.print("Pin:" + String(inPin25)); Serial.println("Val:" + String(digitalRead(inPin25))); }
  if (digitalRead(inPin26)) { val += 1; Serial.print("Pin:" + String(inPin26)); Serial.println("Val:" + String(digitalRead(inPin26))); }
  if (digitalRead(inPin27)) { val += 1; Serial.print("Pin:" + String(inPin27)); Serial.println("Val:" + String(digitalRead(inPin27))); }
  if (digitalRead(inPin28)) { val += 1; Serial.print("Pin:" + String(inPin28)); Serial.println("Val:" + String(digitalRead(inPin28))); }
  if (digitalRead(inPin29)) { val += 1; Serial.print("Pin:" + String(inPin29)); Serial.println("Val:" + String(digitalRead(inPin29))); }
  if (digitalRead(inPin30)) { val += 1; Serial.print("Pin:" + String(inPin30)); Serial.println("Val:" + String(digitalRead(inPin30))); }
  
  Serial.println("Value : " + String(val));
  Serial.println("------------------------");
  
  if (chkLoop != val){
    chkLoop = val;
    lcd.backlight();
    lcd.setCursor(0, 3);
    lcd.print("READY : " +  String(val));
  }
  
  /*
  unsigned long curms = millis();
  if (curms - prevms >= intval * 1000) {
    lcd.noBacklight();
    prevms = curms;
  }
  */
}
