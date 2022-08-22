#define KEY1 12
#define KEY2 8
int x, y, z;
void Taoso(int *so)
{
  *so = random(100);
}
int Tim_Min( int a, int b, int c)
{
 int min1, min2;
 min1=(a<b)?a:b;
 min2=(min1<c)?min1:c;
 return min2;
}

int Tong_So_Chan(int a, int b, int c) 
{
  int S;
  S = 0;
  if (a%2 == 0) 
  {
    S = S + a;
  }
  if (b%2 == 0) 
  {
    S = S + b;
  }
  if (c%2 == 0) 
  {
    S = S + c;
  }
  return S;
}

int Tong_So_NT( int a, int b, int c)
{
  int snt ;
  snt = 0;
    for (int i = 2; i < (a - 1); i++){
        if (a%i != 0){
            snt = snt + a;
        }   
    }
    


    
 return snt;
}

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(KEY1,INPUT);
    pinMode(KEY2,INPUT);
    Taoso(&x);
    Taoso(&y);
    Taoso(&z);
    Serial.print("\n So thu nhat la: ");
    Serial.println(x);
    Serial.print("\n So thu hai la: ");
    Serial.println(y);
    Serial.print("\n So thu ba la: ");
    Serial.println(z);
}

void loop() {
  // put your main code here, to run repeatedly:
    
    
    
  if(digitalRead(KEY1) == 0)
    {Serial.print("\n Ham tim so Min trong hai so ngau nhien = ");
    Serial.print("\n");
    Serial.println(Tim_Min(x,y,z));
    Serial.print("\n Tong cac so chan = ");
    Serial.println(Tong_So_NT( x,y,z));
    delay(1000);
    }
   if(digitalRead(KEY2)==0) 
   {
    Serial.print("\n Tong cac so nguyen to la: ");
    Serial.println(Tong_So_NT(x,y,z));
    delay(1000);
   }
}