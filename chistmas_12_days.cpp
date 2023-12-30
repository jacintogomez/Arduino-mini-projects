//Use Arduino to control blinking Christmas lights

#define numpins 12
int pins[numpins]={2,3,4,5,6,7,8,9,10,11,12,13};

void setup(){
    for(int i=0;i<numpins;i++){
        pinMode(pins[i],OUTPUT);
    }
    delay(1000);
}

int whatdayisit(){
    for(int j=0;j<numpins;j++){
        if(digitalRead(pins[j])==HIGH){
            return pins[j];
        }
    }
    return -1;
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