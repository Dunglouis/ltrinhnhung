#define KEY1 12
#define KEY2 8

int x,y,z;

void Taoso(int *so)
{
  *so=random(10);
}

float TBC( int a, int b, int c)
{
 
  float TBC;
  TBC = (a+b+c)*1.0/3;
  return TBC;

}

void SXGD(int *a, int *b, int *c)
{
  int tg;
  if(*a < *b)
  {
    tg = *a;
    *a = *b;
    *b = tg;
  }
  if(*b < *c)
  {
    tg = *b;
    *b = *c;
    *c = tg;
  }
  if(*a < *c)
  {
    tg = *a;
    *a = *c;
    *c = tg;
  }
}

int tinhtongsole(int a, int b, int c)
{
  int S;
  S=0;
  if(a%2 !=0)
  {
    S=S+a;
  }
  if(b%2 !=0)
  {
    S=S+b;
  }
  if(c%2 !=0)
  {
    S=S+c;
  }
  return S;
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

  if(digitalRead(KEY1)==0)
  {
    Serial.print("\n TBC 3 so nguyen: ");
    Serial.println(TBC(x,y,z));
    delay(1000);
  }

  if(digitalRead(KEY2)==0)
  {
    SXGD(&x,&y,&z);
      Serial.println("Day so duoc sap xep theo thu tu giam dan: ");
      
      Serial.print("   ");
      Serial.print(x);
      Serial.print("   ");
      Serial.print(y);
      Serial.print("   ");
      Serial.print(z);
      Serial.println("\n");
    Serial.print("\n tong cac so le: ");
    Serial.println(tinhtongsole(x,y,z));
    delay(1000);
  }

}
