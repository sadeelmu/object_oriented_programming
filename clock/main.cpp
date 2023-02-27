// TIMER PROGRAM
#include "Clock.h"
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

bool hour(Clock friend1h, Clock friend2h)
{
    if (friend1h.getHour() < friend2h.getHour())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool minute(Clock friend1m, Clock friend2m)
{
    if (friend1m.getMinute() < friend2m.getMinute())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool second(Clock friend1s, Clock friend2s)
{
    if (friend1s.getSecond() < friend2s.getSecond())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int decide = 0;
    cout << "Decide between a Timer or Stopwatch" << endl
         << "If you want a Timer enter 1 and if you want a Stopwatch enter 2" << endl;
    cin >> decide;

    // TIMER
    if (decide == 1)
    {
        // Clock Object
        Clock c1;
        short int hours = 0;
        short int minutes = 0;
        short int seconds = 0;
        cout << "Enter hour" << endl;
        cin >> hours;
        cout << "Enter minutes" << endl;
        cin >> minutes;
        cout << "Enter seconds " << endl;
        cin >> seconds;
        c1.setHour(hours);
        c1.setMinute(minutes);
        c1.setSecond(seconds);

        while (!(hours == 00 && minutes == 00 && seconds == 00))
        {
            system("clear");
            c1.show();
            c1.decrement();
            usleep(1000000);
        }
        system("clear");
        c1.show();
    }

    // stopwatch
    if (decide == 2)
    {
        Clock c2;
        bool flag = true;
        while (flag == true)
        {
            system("clear");
            c2.show();
            c2.increment();
            usleep(1000000);
        }
        c2.show();
    }

    Clock f1;
    Clock f2;
    f1.setHour(01);
    f1.setMinute(32);
    f1.setSecond(43);

    f2.setHour(02);
    f2.setMinute(32);
    f2.setSecond(38);

    if (hour(f1, f2))
    {
        cout << "“I’m smarter than my friend";
    }
    else if (minute(f1, f2))
    {
        cout << "“I’m smarter than my friend";
    }
    else if (second(f1, f2))
    {
        cout << "“I’m smarter than my friend";
    }
    else
    {
        cout << "my friend is smarter than me";
    }

    return 0;
}
