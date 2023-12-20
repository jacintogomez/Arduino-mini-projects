//Arduino project hexapod

#include <Servo.h>
#define sensorOut 6

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
Servo s7;
Servo s8;
Servo s9;
Servo s10;
Servo s11;
Servo s12;

void setup() {

    s1.attach(2);
    s2.attach(3);
    s3.attach(4);
    s4.attach(5);
    s5.attach(6);
    s6.attach(7);
    s7.attach(8);
    s8.attach(9);
    s9.attach(10);
    s10.attach(11);
    s11.attach(12);
    s12.attach(13);

    Serial.begin(9600);
}

void loop() {

    {

//first set bottom lift up
        s1.write(180);
        delay(0);

        s4.write(0);
        delay(0);

        s5.write(180);
        delay(500);

//first set top walk
        s7.write(120);
        delay(0);

        s10.write(60);
        delay(0);

        s11.write(120);
        delay(500);

//second set top recoil
        s8.write(120);
        delay(0);

        s9.write(60);
        delay(0);

        s12.write(120);
        delay(500);

//first set bottom return
        s1.write(90);
        delay(0);

        s4.write(90);
        delay(0);

        s5.write(90);
        delay(500);

//second set bottom lift up
        s2.write(0);
        delay(0);

        s3.write(180);
        delay(0);

        s6.write(0);
        delay(500);

//second set top walk
        s8.write(60);
        delay(0);

        s9.write(120);
        delay(0);

        s12.write(60);
        delay(500);

//first set top recoil
        s7.write(60);
        delay(0);

        s10.write(120);
        delay(0);

        s11.write(60);
        delay(500);

//second set bottom return
        s2.write(90);
        delay(0);

        s3.write(90);
        delay(0);

        s6.write(90);
        delay(500);

    }
}


