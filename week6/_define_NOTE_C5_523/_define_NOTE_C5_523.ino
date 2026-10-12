//week06-1-arduion-pin-2-button-INPUT-PULLUP
void setup() {
  pinMode(2,INPUT_PULLUP);//預設pin2是button
  pinMode(8,OUTPUT);//預設pin8是buzzer喇叭

}

void loop() {
  if (digitalRead(2) == LOW){
    tone(8,523,100);//0.1秒
    delay(100);//等一下(讓聲音夠長)
    }
}
