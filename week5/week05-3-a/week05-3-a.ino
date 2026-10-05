//week05-3-a
//week05-2
void setup() {
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  Serial.begin(9600);// USB Serial 開始傳輸,速度 9600 bps
  tone(8,523,100);delay(200);// Do 0.1秒
  tone(8,587,100);delay(200);// Re 0.1秒
  tone(8,659,100);delay(200);// Mi 0.1秒
  tone(8,587,100);delay(200);// Re 0.1秒
  tone(8,523,100);delay(200);// Do 0.1秒
}

char c='0';// 在外面宣告委數 0:不要發登音 1:Do 2:Re 3:Mi
void loop() {
  if (Serial.available()){//如果 USB Serial 有收到資料
    c=Serial.read();//就讀進來(不要再宣告變數
  }
  for (int i=10;i<=13;i++)digitalWrite(i,LOW);
  if (c>='0' && c<='3')digitalWrite(c-'0'+10,HIGH);
  if (c == '0') noTone(8); // 不要發聲音
  if (c == '1') tone(8, 523); // Do 0.1f
  if (c == '2') tone(8, 587); // Re 0.1f)
  if (c == '3') tone(8, 659); // Mi 0.1f)
}
