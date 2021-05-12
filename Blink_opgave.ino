
 int x=0; //Global variabel
 int lED1 = 13;
 int LED2 = 12;
 int LED3 = 11;

 
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

int blink(int enable, int on_, int off_){
  int Hans =0; //Local variabel
  
  if (enable) {
    digitalWrite(13, LOW); 
    digitalWrite(12, HIGH);  
    delay(on_);                       
    digitalWrite(12, LOW);   
    digitalWrite(13, HIGH); 
    delay(off_); 
  }  
  Hans = (2);
  return Hans; 
}                   

void loop() {
  x=blink(1, 800, 300);
  Serial.println(x);
}
