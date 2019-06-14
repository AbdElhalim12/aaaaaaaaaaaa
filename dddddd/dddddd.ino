int incomingByte = 0;
#define enA 9
#define enB 4
#define in1 8
#define in2 7
#define in3 6
#define in4 5
char t;
void setup() {

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(13,OUTPUT);

}

void loop() {

if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
if(t=='F'){
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in4,LOW);
}
else if (t=='B'){
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in4,HIGH);

}
else if (t=='L'){
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  /*enables*/
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);

    digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  
}
else if (t=='R'){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  /*enables*/
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);

    digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
else if( t=='W'){
    digitalWrite(13,HIGH);

}
else if( t=='w'){
    digitalWrite(13,LOW);

}
}
