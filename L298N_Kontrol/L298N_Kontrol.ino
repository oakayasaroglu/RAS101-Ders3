const int in1 = 7;
const int in2 = 6;
const int in3 = 5;
const int in4 = 4;
const int en1 = 9;
const int en2 = 3;


void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);  
}

void loop() {
  analogWrite(en1,150);         //PWM signal, it can be between 0-255
  analogWrite(en2,150);         //PWM signal, it can be between 0-255
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
