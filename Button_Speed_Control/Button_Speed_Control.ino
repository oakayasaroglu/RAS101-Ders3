const int in1 = 7;
const int in2 = 6;
const int in3 = 5;
const int in4 = 4;
const int en1 = 9;
const int en2 = 3;
#define vitescik 10
#define vitesdus 11

int hiz=155;

void setup() {

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);  
  pinMode(vitescik,INPUT);
  pinMode(vitesdus,INPUT);
}

void loop() {
  
  if (vitescik==1){
    hiz=hiz+15;
    }

  if (vitesdus==1){
    hiz=hiz-5;
    }
    
  if (hiz>255){
    hiz=255;
    }
    
  if (hiz<0){
    hiz=0;
    }

     
  analogWrite(en1, hiz);         //PWM signal, it can be between 0-255
  analogWrite(en2, hiz);         //PWM signal, it can be between 0-255
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
