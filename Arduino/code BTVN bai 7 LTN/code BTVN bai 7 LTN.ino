#define KEY1 A0
#define KEY2 A1
#define N 5
int b[N],i,j;

void Taomang(int a[], int n)
  {
    for(i=0;i<n;i++)
      {
        a[i] = random(10);
      }
  }
void Hienthi( int a[], int n)
{
 for(i=0;i<n;i++)
  {
    Serial.print(a[i]);
    Serial.print(" ");
  }
 Serial.println(" \n");
}

void Hoanvi( int *a, int *b)
  {
    int tg;
    tg = *a;
    *a = *b;
    *b = tg;
  }
void Sapxeptang( int a[], int n)
{
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  if(a[i]>a[j])
  Hoanvi(&a[i],&a[j]);
}

void ktsnt(int a) {
  if (a < 2)
    return 1;
  for (int i = 2; i < a; i++) {
    if (a % i != 0)
      return 1; 
   }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(KEY1,INPUT);
  pinMode(KEY2,INPUT);
  Taomang(b,N);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEY1)==0)
    {
      Serial.println("\n Mang vua tao la ");
      Hienthi(b,N);
      delay(1000);
      /*
      Serial.print("\nTong cac so nguyen to = ");
      Serial.println(Tinhtong_mang(b,N));*/
    }

  if(digitalRead(KEY2)==0)
    {
      Serial.println("\n Mang sap xep theo thu tu tang dan");
      Sapxeptang(b,N);
      Hienthi(b,N);
      delay(1000);
    }
}
