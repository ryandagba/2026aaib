// week06-1 好玩的程式設計
// File-Preference偏好設定, 字型放大, 接續上週的 week05-5
int [][] b = new int[10][16]; // Java 的 2D陣列
void setup() {
  size(800, 500);//視窗大小800 X 500
}

void draw() {
  background(255);//背景白色
  for (int i=0; i<10; i++) {//左手i的for(迴圈)
    for (int j=0; j<16; j++) {//右手j的for(迴圈)
        if(b[i][j]==1)fill(#F5CBFF);//如果陣列有1就放淡紫色
        else fill(255);
        rect( j*50, i*50, 50, 50);//(右手j對應x座標 左手i對應y座標，寬，高)
    }
  }
}
void mousePressed() {
  int i = mouseY / 50, j = mouseX / 50;//(左手i對應y座標 右手j對應x座標
  b[i][j] = 1;//設成1， 等下繪畫淡紫色
}
