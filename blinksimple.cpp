//Use Arduino to control blinking lights

#define numpins 12
#define d1 2;
int pins[numpins]={2,3,4,5,6,7,8,9,10,11,12,13};

void setup(){
    for(int i=0;i<numpins;i++){
        pinMode(pins[i],OUTPUT);
    }
    delay(1000);
}

void loop(){
    int relay=d1;
    digitalWrite(relay,HIGH);
    delay(1000);
    digitalWrite(relay,LOW);
    delay(1000);
}