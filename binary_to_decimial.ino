int kLed1 = 9; //setting up the first LED
int kLed2 = 10;
int kLed3 = 11;
int kLed4 = 12;

int bt1 = 22; //setting up the buttons
int bt2 = 24;
int bt3 = 26;
int bt4 = 28;

int val1; //val to  hold button values
int val2;
int val3;
int val4;

int a = 8; //setting up sseg values
int b = 7;
int c = 6; 
int d = 5;
int e = 4;
int f = 3;
int g = 2;
int h = 13;

void setup() {
   pinMode(kLed1, OUTPUT);
   
   pinMode(bt1,INPUT);
  
}

/*int check_HL(int x, int y){ //this function turns ON or OFF the LED indicators
  if(x == HIGH){
    digitalWrite(y,HIGH);
  }
  if(x == LOW){
    digitalWrite(y,LOW);
  }
}*/
void zero(void){
 for(int i = 3; i<=8 ; i++){
  digitalWrite(i,HIGH);
 }
  digitalWrite(g,LOW);
  digitalWrite(h,LOW);
}
void one(void){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  for(int i = 2 ; i<=5; i++){
    digitalWrite(i,LOW);
  }
  digitalWrite(h,LOW);
}
void two(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
  
}
void three(){
  for(int i = 5; i <= 8; i++){
    digitalWrite(i,HIGH);
  }
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
}

void four(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
}
void five(){
   digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
}
void six(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
 for(int i = 2 ; i<=6 ; i++){
  digitalWrite(i, HIGH);
 }
 digitalWrite(h,LOW);
}
void seven(){
  for(int i = 6 ; i<=8 ; i++){
    digitalWrite(i,HIGH);
  }
  for(int j = 2 ; j<=5 ; j++){
    digitalWrite(j,LOW);
  }
  digitalWrite(h,LOW);
}
void eight(){
  for(int i=2;i<=8;i++){
    digitalWrite(i,HIGH);
  }
  digitalWrite(h,LOW);
}
void nine(){
  for(int i=5;i<=8;i++){
    digitalWrite(i,HIGH);
  }
  for(int j=2;j<=3;j++){
    digitalWrite(j,HIGH);
  }
  digitalWrite(e,LOW);
  digitalWrite(h,LOW);
}
void loop() {
  
  val1 = digitalRead(bt1);
  val2 = digitalRead(bt2);
  val3 = digitalRead(bt3);
  val4 = digitalRead(bt4);

/*  check_HL(val1, kLed1);
  check_HL(val2, kLed2);
  check_HL(val3, kLed3);
  check_HL(val4, kLed4); */
 if(val1 == HIGH && val2 == LOW && val3 == LOW && val4 == HIGH){
    nine();
 }
 if(val1 == HIGH && val2 == LOW && val3 == LOW && val4 == LOW){
    eight();
 }
 if(val1 == LOW && val2 == HIGH && val3 == HIGH && val4 == HIGH){
    seven();
 }
 if(val1 == LOW && val2 == HIGH && val3 == HIGH && val4 == LOW){
    six();
 }
 if(val1 == LOW && val2 == HIGH && val3 == LOW && val4 == HIGH){
    five();
 }
 if(val1 == LOW && val2 == HIGH && val3 == LOW && val4 == LOW){
    four();
 }
 if(val1 == LOW && val2 == LOW && val3 == HIGH && val4 == HIGH){
    three();
 }
 if(val1 == LOW && val2 == LOW && val3 == HIGH && val4 == LOW){
    two();
 }
 if(val1 == LOW && val2 == LOW && val3 == LOW && val4 == HIGH){
    one();
 }
 if(val1 == LOW && val2 == LOW && val3 == LOW && val4 == LOW){
    zero();
 }

}
