//Use Arduino to control blinking Christmas lights

#define d1 2

void setup(){
    pinMode(d1,OUTPUT);
}

void loop(){
    int relay=d1;
    digitalWrite(relay,HIGH);
    delay(1000);
    digitalWrite(relay,LOW);
    delay(1000);
}