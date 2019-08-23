#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 20, 4); // ถ้าไม่ได้ให้ลอง 0x3F
//2-12(11), 14-19(6), 22-35(13)

int inPin = 40;
int val = 0;

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

  delay(2000);
  lcd.noBacklight();

  /*
  for (int i = 0; i < 10; i++) {
    pinMode(Pins[i], INPUT_PULLUP);
  }
  */
  pinMode(inPin, INPUT);
  
}

void loop()
{
  val = digitalRead(inPin);   // read the input pin
  Serial.print("Pin:" + String(inPin));
  Serial.println("Val:" + String(val));
  //if (val) {
    lcd.backlight();
    lcd.setCursor(0, 3);
    lcd.print("READY : " +  String(val));
  //}

  delay(1000);

}
