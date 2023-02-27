// sourcefile.cpp
#include <iostream>
#include <string>
#include "Clock.h" //must be used
using namespace std;

Clock::Clock()
{
    hours_ = 0;
    minutes_ = 0;
    seconds_ = 0;
}

void Clock::setHour(short int h)
{

    if (h < 0 || h > 23)
    {
        cout << "Error";
        exit(0);
    }
    else
    {
        hours_ = h;
    }
}

void Clock ::setMinute(short int m)
{
    if (m < 0 || m > 59)
    {
        cout << "Error";
        while (m < 0 || m > 59)
        {
            cout << "Enter correct input";
            cin >> m;
        }
        minutes_ = m; // correct value will be reached
    }
    else
    {
        minutes_ = m;
    }
}

void Clock::setSecond(short int s)
{
    if (s < 0 || s > 59)
    {
        cout << "Error";
        seconds_ = 0;
    }

    else
    {
        seconds_ = s;
    }
}

short int Clock::getHour()
{
    return hours_;
}

short int Clock::getMinute()
{
    return minutes_;
}

short int Clock::getSecond()
{
    return seconds_;
}

void Clock::show()
{
    if (hours_ < 10)
    {
        cout << "0";
    }
    cout << hours_ << ":";
    if (minutes_ < 10)
    {
        cout << "0";
    }
    cout << minutes_ << ":";
    if (seconds_ < 10)
    {
        cout << "0";
    }
    cout << seconds_;
}
// fix the leading zeros

void Clock::increment()
{
    seconds_ = seconds_ + 1;
    if (seconds_ == 60)
    {
        seconds_ = 0;
        minutes_ = minutes_ + 1;
    }
    if (minutes_ == 60)
    {
        minutes_ = 0;
        hours_ = hours_ + 1;
    }
    if (hours_ == 24)
    {
        hours_ = 0;
    }
}

void Clock::decrement()
{
    seconds_ = seconds_ - 1;
    if (seconds_ == -1)
    {
        minutes_ = 59;
        hours_ = hours_ - 1;
    }
    if (hours_ == -1)
    {
        hours_ = 23;
        minutes_ = 59;
        seconds_ = 59;
    }
}
