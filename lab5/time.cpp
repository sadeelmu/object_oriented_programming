#include "time.h"
#include <string>
#include <iostream>
using namespace std;

Time::Time(unsigned int hours = 0, unsigned int minutes = 0, unsigned int seconds = 0)
{
    if (hours > 23)
    {
        hours = 23;
    }
    if (minutes > 59)
    {
        minutes = 59;
    }
    if (seconds > 59)
    {
        seconds = 59;
    }
}
unsigned int Time::getHours()
{
    return hours_;
}
unsigned int Time::getMinutes()
{
    return minutes_;
}
unsigned int Time::getSeconds()
{
    return seconds_;
}

void Time::print()
{
    cout << hours_;
    cout << ":";
    if (minutes_ > 10)
    {
        cout << minutes_;
    }
    else
    {
        cout << 0;
        cout << minutes_;
    }
    cout << ":";
    if (seconds_ > 10)
    {
        cout << seconds_;
    }
    else
    {
        cout << 0;
        cout << minutes_;
    }
}
