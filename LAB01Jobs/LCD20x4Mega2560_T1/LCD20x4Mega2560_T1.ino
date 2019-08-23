#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 20, 4); // ถ้าไม่ได้ให้ลอง 0x3F

void setup()
{

  /*
    //lcd.begin (20, 4);
    lcd.init();

    // Switch on the backlight
    lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
    lcd.setBacklight(HIGH);
    lcd.home(); // ไปที่ตัวอักษรที่ 0 แถวที่ 1
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("VRU MECHA&Robot 62");

    lcd.setCursor(0, 1);
    lcd.print("[Asset checking]");

    lcd.setCursor(0, 2);
    lcd.print("ACTUAL : 30");

    lcd.setCursor(0, 3);
    lcd.print("READY : 0");
    delay(5000);
    //lcd.noBacklight();
  */
  lcd.init();
  lcd.home(); // ไปที่ตัวอักษรที่ 0 แถวที่ 1
  lcd.clear();
  lcd.backlight(); //คำสั่งเปิดไฟแบล็คไลท์

  lcd.setCursor(0, 0);
  lcd.print("VRU MECHA&Robot 62");

  lcd.setCursor(0, 1);
  lcd.print("  Asset checking");

  lcd.setCursor(0, 2);
  lcd.print("ACTUAL : 30");

  lcd.setCursor(0, 3);
  lcd.print("READY : 0");

  delay(2000);
}
void loop()
{

}
