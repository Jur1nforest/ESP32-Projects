#define button1 32
#define button2 33
#define button3 25
#define button4 26

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, OUTPUT);
  pinMode(button2, OUTPUT);  
  pinMode(button3, OUTPUT);
  pinMode(button4, OUTPUT);  
  digitalWrite(button1,HIGH);
  digitalWrite(button2,HIGH);
  digitalWrite(button3,HIGH);
  digitalWrite(button4,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 4; j++) {
      for (int k = 1; k <= 4; k++) {
        for (int l = 1; l <= 4; l++) {
          if (i == 1){
            digitalWrite(button1, LOW);
          } else if (i == 2){
            digitalWrite(button2,LOW);
          } else if (i == 3){
            digitalWrite(button3,LOW);
          } else {
            digitalWrite(button4,LOW);
          }
          delay(25);
          digitalWrite(button1,HIGH);
          digitalWrite(button2,HIGH);
          digitalWrite(button3,HIGH);
          digitalWrite(button4,HIGH);
          delay(75);

          if (j == 1){
            digitalWrite(button1, LOW);
          } else if (j == 2){
            digitalWrite(button2,LOW);
          } else if (j == 3){
            digitalWrite(button3,LOW);
          } else {
            digitalWrite(button4,LOW);
          }
          delay(25);
          digitalWrite(button1,HIGH);
          digitalWrite(button2,HIGH);
          digitalWrite(button3,HIGH);
          digitalWrite(button4,HIGH);
          delay(75);

          if (k == 1){
            digitalWrite(button1, LOW);
          } else if (k == 2){
            digitalWrite(button2,LOW);
          } else if (k == 3){
            digitalWrite(button3,LOW);
          } else {
            digitalWrite(button4,LOW);
          }
          delay(25);
          digitalWrite(button1,HIGH);
          digitalWrite(button2,HIGH);
          digitalWrite(button3,HIGH);
          digitalWrite(button4,HIGH);
          delay(75);

          if (l == 1){
            digitalWrite(button1, LOW);
          } else if (l == 2){
            digitalWrite(button2,LOW);
          } else if (l == 3){
            digitalWrite(button3,LOW);
          } else {
            digitalWrite(button4,LOW);
          }
          delay(25);
          digitalWrite(button1,HIGH);
          digitalWrite(button2,HIGH);
          digitalWrite(button3,HIGH);
          digitalWrite(button4,HIGH);
          delay(75);

        }
      }
    }
  }

