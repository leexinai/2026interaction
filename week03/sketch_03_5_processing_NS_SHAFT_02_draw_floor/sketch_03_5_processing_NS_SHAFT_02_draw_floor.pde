//03-5-processing-NS-SHAFT-02-draw-floor
//小朋友下樓梯
void setup(){
  size(600,600);//小畫家截圖，得到大小
  for(int i=0;i<20;i++)floorX[i] = int(random(25,600-140-25));
}
int []floorX = new int[20];//準備20個地磚
void draw(){
  background(0,5,95);//小畫家的吸管{吸色彩}再編輯
  fill(47,105,190);//左右磚的色彩
  for(int i = 0; i<=10;i++){
    rect(0,i*60,25,60);//左邊的牆
    rect(600-25,i*60,25,60);//右邊的牆
  }
  fill(208,216,189);//畫地板
  //rect(200,200,140,25);//大概寬度140
  for(int i=0;i<20;i++){
    rect(floorX[i],75+i*75,140,25);
  }
}
