#define KEY1 A0
#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10

int A = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(KEY1, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEY1)==0){
    A+=1;
    delay(300);
  }

  if(A==0){
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
  }

  if(A==1){
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
  }

  if(A==2){
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
  }

  if(A==3){
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 1);
    digitalWrite(LED4, 0);
  }

  if(A==4){
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 4);
  }

  if(A==5){
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 1);
    digitalWrite(LED4, 1);
  }

}
