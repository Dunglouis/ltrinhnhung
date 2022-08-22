#define KEY 3
#define LED1 13
#define LED2 12
#define LED3 11

int buttonStatel,dem=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(KEY, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEY)==LOW);
  {
    while(digitalRead(KEY)==LOW);
    dem++;
    if(dem > 5) dem=5;
  }

  switch(dem)
  {
    case 1:
          digitalWrite(LED1, HIGH);
          digitalWrite(LED2, LOW);
          digitalWrite(LED3, LOW);
          
          break; 
    case 2:
          digitalWrite(LED1, LOW);
          digitalWrite(LED2, HIGH);
          digitalWrite(LED3, LOW);
          
          break; 
    case 3:
          digitalWrite(LED1, LOW);
          digitalWrite(LED2, LOW);
          digitalWrite(LED3, HIGH);
          
          break;
    case 4:      
          digitalWrite(LED1, HIGH);
          digitalWrite(LED2, HIGH);
          digitalWrite(LED3, HIGH); 
  }
}
