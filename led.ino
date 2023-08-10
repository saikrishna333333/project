void setup() {
  // put your setup code here, to run once:
pinMode(D4,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(D4,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,LOW);
digitalWrite(D5,LOW);
delay(1000);
digitalWrite(D4,LOW);
digitalWrite(D2,LOW);
digitalWrite(D3,HIGH);
digitalWrite(D5,HIGH);
delay(1000);

}
