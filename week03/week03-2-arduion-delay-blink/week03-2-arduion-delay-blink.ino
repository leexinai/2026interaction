//week03-2a-arduion-delay-blink
void setup() {
  //pinMode(2,INPUT_PULLUP);//第2是按鈕,沒按時「拉高」
  //for (int i=3; i <= 13; i++) pinMode(i, OUTPUT);
  for (int i=2; i <= 13; i++) pinMode(i, OUTPUT);

}

void loop() {
    for (int i=2; i <= 7; i++) digitalWrite(i, HIGH);
    for (int i=8; i <= 13; i++) digitalWrite(i, LOW);
    delay(500);//延遲0.5秒
    for (int i=2; i <= 7; i++) digitalWrite(i, LOW);
    for (int i=8; i <= 13; i++) digitalWrite(i, HIGH);
    delay(500);//延遲0.5秒
}
