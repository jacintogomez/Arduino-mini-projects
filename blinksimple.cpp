//Use Arduino to control blinking Christmas lights

#define d1 2

void setup(){
    pinMode(d2,OUTPUT);
}

void loop(){
    int relay=d1;
    digitalWrite(relay,HIGH);
    delay(1000);
    dkgitalWrite(relay,LOW);
    delay(1000);
}