//week11-1-arduion-joystick-analogRead-A0-A1
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int x = analogRead(A0);//
  int y = analogRead(A1);//
  tone(8,x);//

}
