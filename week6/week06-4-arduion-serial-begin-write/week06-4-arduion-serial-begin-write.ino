//week06-4-arduion-serial-begin-write
//修改自week06-2-arduion-button-change-mode-LD-Eflow
int mode = 0;//0:從小變到大，1:從大變到小
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  for(int i=3;i<=13;i++){
    pinMode(i,OUTPUT);
  }
    tone(8,523,100);delay(100);//Do
    tone(8,784,100);delay(100);//Mi
}
int prev = HIGH, now=3;//prev 是按鈕(前一瞬間的
void loop() {
  if(prev == HIGH && digitalRead(2) == LOW){//
    if (mode == 0){
      mode =1;//從0變1
      tone(8,784,100);delay(100);
      tone(8,523,100);delay(100);
    }
    else {
      mode = 0;//從1變0
      tone(8,523,100);delay(100);
      tone(8,784,100);delay(100);
    }
    prev = LOW;//前面的tone()Mi,Do人 放這裡

    if(mode==1)Serial.write('1');
    if(mode==0)Serial.write('0');
    }else if( prev == LOW && digitalRead(2) == HIGH){//放開的瞬間
     prev = HIGH;//把前面的tone()Mi,D人 放這裡
    }
    if(mode == 0){//0:從小變到大
      now++;
      if (now == 13)now = 3;//超過範圍，又變成3
      digitalWrite(now,HIGH);//亮
      delay(100);//等一下
      digitalWrite(now,LOW);//暗
      }else{//1:大變小
        now--;
        if (now<3)now = 13;
        digitalWrite(now,HIGH);//亮
        delay(100);//等一下
        digitalWrite(now,LOW);//暗
        }
}
