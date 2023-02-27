#ifndef T_H
#define T_H

#include <iostream>
using namespace std;

class Time
{
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

public:
    Time(unsigned h = 0, unsigned m = 0, unsigned s = 0) : hour(h), minute(m), second(s)
    {
        if (hour > 23)
            hour = 23;
        if (minute > 59)
            minute = 59;
        if (second > 59)
            second = 59;
    }

    unsigned int get_hour() const { return hour; }
    unsigned int get_minute() const { return minute; }
    unsigned int get_second() const { return second; }

    void print() const
    {
        if (hour < 10)
            cout << "0";
        cout << hour << ":";

        if (minute < 10)
            cout << "0";
        cout << minute << ":";

        if (second < 10)
            cout << "0";
        cout << second;
    }
};
#endif
