int n,donvi,sobandau,sodao=0;
void setup() {
 Serial.begin(9600);
 n=random(1000);
  //n=1221;
  sobandau=n;
  Serial.print("so ban dau la: ");
  Serial.print(n);
  Serial.println("\n");
}
void loop() {
  // put your main code here, to run repeatedly:
while(n!=0)
{
  donvi= n%10;
  sodao=sodao*10+donvi;
  n=n/10;
}
if(sobandau==sodao)
{
  Serial.print("so dao chinh la so doi xung: ");
  Serial.print(sodao);
}
else
{
  Serial.print("so dao khong la so doi xung: ");
  Serial.print(sodao);
}
while(1);
}
