#define KEY A0
#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(KEY, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEY) ==1){
    digitalWrite(LED1, 1);
    delay(1000);
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 1);
    delay(1000);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 1);
    delay(1000);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 1);
    delay(1000);
    digitalWrite(LED4, 0);

  }

  if(digitalRead(KEY) == 0) 
  {
    digitalWrite(LED1,0);
    digitalWrite(LED2,0);
    digitalWrite(LED3,0);
    digitalWrite(LED4,0);
    delay(1000);
  }
}
