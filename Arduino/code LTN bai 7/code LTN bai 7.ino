#define KEY1 A0
#define KEY2 A3

int a[5], i,n;
void taomang(int b[], int m)
{
  for(i=0; i<m ; i++)
  b[i] = random(10);

}

void xuatmang(int b[], int m)
{
  for(i=0; i<m; i++)
  {
    Serial.print(b[i]);
    Serial.print(" ");
  }
  Serial.println(" ");
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(KEY1, INPUT);
  pinMode(KEY2, INPUT);
  Serial.print("Tao so phan tu mang n = ");
  n = 5;
  Serial.println(n);

}

void loop() {
  // put your main code here, to run repeatedly:
  int c[4] =  {-2,5,10,-23};
  int b[4] =  {12,10};
  if(digitalRead(KEY1)==0)
  {
    Serial.println(" minh hoa mang khoi tao ngay khi khai bao ");
    xuatmang(c,4);
    delay(1000);
  }
  if(digitalRead(KEY2)==0)
  {
    Serial.println(" minh hoa mang khoi tao cac gia tri dau mang ");
    xuatmang(b,4);
    delay(1000);
  }

  while(1);

}
