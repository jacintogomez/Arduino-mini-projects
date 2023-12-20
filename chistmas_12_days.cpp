//Use Arduino to control blinking Christmas lights

#define d1 2;
#define d2 3;
#define d3 4;
#define d4 5;
#define d5 6;
#define d6 7;
#define d7 8;
#define d8 9;
#define d9 10;
#define d10 11;
#define d11 12;
#define d12 13;

void setup(){
    pinMode(d1,OUTPUT);
    pinMode(d2,OUTPUT);
    pinMode(d3,OUTPUT);
    pinMode(d4,OUTPUT);
    pinMode(d5,OUTPUT);
    pinMode(d6,OUTPUT);
    pinMode(d7,OUTPUT);
    pinMode(d8,OUTPUT);
    pinMode(d9,OUTPUT);
    pinMode(d10,OUTPUT);
    pinMode(d11,OUTPUT);
    pinMode(d12,OUTPUT);
}

int whatdayisit(){
    if(digitalRead(d1)==HIGH){return d1;}
    if(digitalRead(d2)==HIGH){return d2;}
    if(digitalRead(d3)==HIGH){return d3;}
    if(digitalRead(d4)==HIGH){return d4;}
    if(digitalRead(d5)==HIGH){return d5;}
    if(digitalRead(d6)==HIGH){return d6;}
    if(digitalRead(d7)==HIGH){return d7;}
    if(digitalRead(d8)==HIGH){return d8;}
    if(digitalRead(d9)==HIGH){return d9;}
    if(digitalRead(d10)==HIGH){return d10;}
    if(digitalRead(d11)==HIGH){return d11;}
    if(digitalRead(d12)==HIGH){return d12;}
}

void turnoffandon(int n){
    digitalWrite(n,LOW);
    delay(1000);
    digitalWrite(n,HIGH);
    delay(1000);
}

void nthday(int n){
    for(int i=0;i<n;i++){
        turnoffandon(n);
    }
}

void loop(){
    int relay=whatdayisit();
    digitalWrite(relay,HIGH);
    delay(7000);
    nthday(relay);
}