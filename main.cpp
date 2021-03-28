#include "mbed.h"

#define RGB_R  PB_4
#define RGB_G  PB_3
#define RGB_B  PC_7

#define led1 PB_2
#define led2 PA_15
#define led3 PC_13

#define delay200ms     200ms

DigitalOut ledg(led1);
DigitalOut ledb(led2);
DigitalOut ledy(led3);

PwmOut LEDR(RGB_R);
PwmOut LEDG(RGB_G);
PwmOut LEDB(RGB_B);

float RR, RG, RB;

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        RR = rand() % 100;
        LEDR = RR/100;
        ledg = !ledg;
        ThisThread::sleep_for(delay200ms);
        RG = rand() % 100;
        LEDG = RG/100;
        ledb = !ledb;
        ThisThread::sleep_for(delay200ms);
        RB = rand() % 100;
        LEDB = RB/100;
        ledy = !ledy;
        ThisThread::sleep_for(delay200ms);

    }
}

