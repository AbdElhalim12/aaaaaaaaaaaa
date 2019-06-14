int incomingByte = 0;
#define enA 9
#define enB 3
#define in1 8
#define in2 7
#define in3 5
#define in4 4
char t;
void setup() {

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(13,OUTPUT);

}

void loop() {

if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
if(t=='f'){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(4,LOW);
}
else if (t=='w'){
  digitalWrite(8,LOW);
  digitalWrite(5,LOW);
    digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);

  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);

}
else if (t=='l'){
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  /*enables*/
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);

    digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  
}
else if (t=='l'){
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  /*enables*/
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);

    digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  
}
else if( t=='1'){
    digitalWrite(13,HIGH);

}
else if( t=='2'){
    digitalWrite(13,LOW);

}
}
