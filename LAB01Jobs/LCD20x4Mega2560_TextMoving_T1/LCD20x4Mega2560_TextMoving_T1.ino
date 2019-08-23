#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 20, 4); // ถ้าไม่ได้ให้ลอง 0x3F


void setup(){
initialDisplay();
}
void loop(){
scrollTextDisplay();
}
void initialDisplay(){
lcd.init();
lcd.backlight(); //คำสั่งเปิดไฟแบล็คไลท์ 
lcd.setCursor(0, 0); // กำหนดแสดงผล คอลัมน์ที่ 0 แถวที่ 0
lcd.print("CodeMobiles");
 delay(1000); // คำสั่งหน่วงเวลา 1000 ms หรือ 1 วินาที
lcd.setCursor(0, 1);// กำหนดแสดงผล คอลัมน์ที่ 0 แถวที่ 1
lcd.print("Ready");
 delay(2000);
}

void scrollTextDisplay(){

 for (int couter = 0; couter < 13; couter++) {
 //ตรวจสอบ couter ว่าน้อยกว่า 13 หรือไม่ ถ้าใช่ ให้เลื่อนตัวอักษรทั้งคอลัมน์ ไปทางซ้าย 1 ช่อง
lcd.scrollDisplayLeft(); // เลื่อนไปทางซ้าย
 delay(200);
 }

 for (int couter = 0; couter < 29; couter++) {
 //ตรวจสอบ couter ว่าน้อยกว่า 29 หรือไม่ ถ้าใช่ ให้เลื่อนตัวอักษรทั้งคอลัมน์ ไปทางขวา 1 ช่อง
lcd.scrollDisplayRight(); // เลื่อนไปทางขวา
 delay(200);
 }

 for (int couter = 0; couter < 16; couter++) {
 //ตรวจสอบ couter ว่าน้อยกว่า 16 หรือไม่ ถ้าใช่ ให้เลื่อนตัวอักษรทั้งคอลัมน์ ไปทางซ้าย 1 ช่อง
lcd.scrollDisplayLeft(); // เลื่อนไปทางซ้าย
 delay(200);
 }
 delay(5000); // คำสั่งหน่วงเวลา 5000 ms หรือ 5 วินาที

}
