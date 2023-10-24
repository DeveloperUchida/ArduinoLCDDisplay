#include <LiquidCrystal.h>

// インターフェースピンの番号でライブラリを初期化
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // LCDの列数と行数を設定:
  lcd.begin(16, 2);
  // LCDにメッセージを表示:
  lcd.print("ArdinoLCD");
}

void loop() {
  
}
