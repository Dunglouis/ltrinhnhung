#define KEY1 A0
#define KEY2 A1
#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(KEY1, INPUT);
  pinMode(KEY2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEY1) ==0 && digitalRead(KEY2) ==0){
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
    delay(3000);
  }
  if(digitalRead(KEY1) ==0 && digitalRead(KEY2) ==1){
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 1);
    delay(3000);
  }
  if(digitalRead(KEY1) ==1 && digitalRead(KEY2) ==1){ 
    digitalWrite(LED1,0);
    digitalWrite(LED2,1);
    digitalWrite(LED3,0);
    digitalWrite(LED4,0);
    delay(3000);
  }
  if(digitalRead(KEY1) ==1 && digitalRead(KEY2) ==0){ 
    digitalWrite(LED1,0);
    digitalWrite(LED2,0);
    digitalWrite(LED3,1);
    digitalWrite(LED4,0);
    delay(3000);
  }
}

