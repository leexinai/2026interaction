//week11-3-arduino-joystick-serial-map-0-255
//將要跟Processing互溝通
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
}
int myAnalogRead(int pin){
  //利用map()函式，把0....1023對應0....255
    
  return map(analogRead(pin),0,1023,0,255);
  }
void loop() {
  delay(30);//要在慢一點
  Serial.write(myAnalogRead(A0));
  Serial.write(myAnalogRead(A1));
  if (digitalRead(2)==LOW)Serial.print("D");//Down
  else Serial.print("U");//UP沒按
  //少個跳行println()改成print()
}
