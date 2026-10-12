//week06-3-processing-rotate-rect
//一個會旋轉的迷宮
void setup(){
  size(500,500);
}
void draw(){
  background(0);//黑色背景
  translate(250,250);//往右移，往下移
  //translate(mouseX,mouseY);//(暫時改用滑鼠當移動量)
  //println(mouseX,mouseY);//(暫時在小黑 印出滑鼠座標)
  rotate(radians(frameCount));//持續轉動
  rect(-200,-200,400,400);//座標奇怪的四邊形
}
