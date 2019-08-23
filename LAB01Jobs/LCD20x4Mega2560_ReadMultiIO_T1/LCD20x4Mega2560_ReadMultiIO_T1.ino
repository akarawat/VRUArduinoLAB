#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 20, 4); // ถ้าไม่ได้ให้ลอง 0x3F

const int Pins[10] = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

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

  for (int i = 0; i < 10; i++) {
    pinMode(Pins[i], INPUT_PULLUP);
  }
  
}

int cntAll = 0;
int chkCnt = 0;
void loop()
{
  cntAll = 0;
  boolean sensorVal = false;
  // Set sensorValue to 'true' if any pin reads HIGH
  for (int i = 0; i < 10 && sensorVal == false; i++) {
    sensorVal = digitalRead(Pins[i]);
    //print out the value of the pushbutton
    Serial.print("Pin ");
    Serial.print(Pins[i]);
    Serial.print(": ");
    Serial.println(sensorVal);
    if (sensorVal) {
      cntAll += 1;
    } else {
      cntAll -= 1;
    }
  }

  if (chkCnt != cntAll) {
    //chkCnt = cntAll;
    lcd.backlight();
    lcd.setCursor(0, 3);
    lcd.print("READY : " +  String(chkCnt));
  }

  delay(1000);

}
