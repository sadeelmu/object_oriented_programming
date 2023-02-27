// header.h
#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>
#include <string>
using namespace std;

class Clock
{
private:
    // attributes here
    short int hours_;
    short int minutes_;
    short int seconds_;

public:
    // construtor
    Clock();
    // functions here
    // setter prototype
    void setHour(short int h);
    void setMinute(short int m);
    void setSecond(short int s);
    void show();
    void increment();
    void decrement();

    short int getHour();
    short int getMinute();
    short int getSecond();
    
};

#endif
