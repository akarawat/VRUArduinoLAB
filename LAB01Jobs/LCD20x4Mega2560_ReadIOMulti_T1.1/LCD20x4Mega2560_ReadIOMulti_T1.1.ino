#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 20, 4); // ถ้าไม่ได้ให้ลอง 0x3F
//2-12(11), 14-19(6), 22-35(13)

int inPin1 = 22;
int inPin2 = 23;
int inPin3 = 24;
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
