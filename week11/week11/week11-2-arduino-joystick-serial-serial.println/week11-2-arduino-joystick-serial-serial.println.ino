//week11-2-arduino-joystick-serial-serial.println
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);//在加這行

}

void loop() {
  int x = analogRead(A0);//讀入x座標
  int y = analogRead(A1);//讀入y座標
  int sw = digitalRead(2);//joystick壓紐
  if(digitalRead(2)==LOW)sw=1;//按下去，設1
  else sw = 0;//彈起來，設0
  char line[200];
  sprintf(line,"x:%d y:%d sw:%d\n",x,y,sw);
  Serial.println(line);

}
