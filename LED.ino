// 定義 LED 的接腳
const int ledPin = 13;

void setup() {
  // 設定 LED 接腳為輸出
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 打開 LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // 延遲 1 秒
  // 關閉 LED
  digitalWrite(ledPin, LOW);
  delay(1000); // 延遲 1 秒
}