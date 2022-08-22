#define KEY 3
#define LED 13

int KEY_atate = 0;
void setup() {
  //put your setup code here to run once:
  pinMode(KEY,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
  //put your main code here, to run repeatedly:
  KEY_atate = digitalRead(KEY);
  if(KEY_atate==LOW)
  {
  //bat led
  digitalWrite(LED,HIGH);
  }

  else 
  {
  // tat led
  digitalWrite(LED, LOW);
  }
}