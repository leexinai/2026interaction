//week03-3-arduion-flow-LED
//LED流動的感覺
void setup() {
  // put your setup code here, to run once:
   for (int i=2; i <= 13; i++) pinMode(i, OUTPUT);
}//全都可以發亮

void loop() {
  // put your main code here, to run repeatedly:
   for (int i=2; i <= 13; i++) {
     for (int k=2; k <= 13; k++) digitalWrite(k, LOW);//全暗
     digitalWrite(i,HIGH);//把i變亮
     delay(100);//每一顆LED亮的時間
    }

}
