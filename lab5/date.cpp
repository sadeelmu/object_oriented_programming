#include "date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date(unsigned int day = 1, unsigned int month = 1, unsigned int year = 1900)
{
    if (day > 12)
    {
        day = 12;
    }
    if (month == 2)
    {
        if (day > 28)
        {
            day = 28;
        }
    }
    else if (month == 1 || month == 3 || month == 5 || month == 8 || month == 10 || month == 12)
    {
        if (day > 31)
        {
            day = 31;
        }
    }
    else
    {
        if (day > 30)
        {
            day = 30;
        }
    }
}
unsigned int Date::getDay()
{
    return day_;
}
unsigned int Date::getMonth()
{
    return month_;
}
unsigned int Date::getYear()
{
    return year_;
}

void Date::print()
{
    cout << day_;
    cout << "/";
    cout << month_;
    cout << "/";
    cout << year_;
}
