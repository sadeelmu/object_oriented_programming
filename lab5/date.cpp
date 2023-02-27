#ifndef D_H
#define D_H

#include <iostream>
using namespace std;

class Date {
    unsigned int day;
    unsigned int month;
    unsigned int year;

public:
    Date(unsigned int d=1, unsigned int m=1, unsigned int y=1900)
        :day(d), month(m), year(y) {
        if (month > 12)
            month = 12;

        if (month == 2 && day > 28)
            day = 28;
        else if ((month == 1 || month == 3  || month == 5 || month == 7 || 
                 month == 8 || month == 10 || month == 12) && day > 31) {
            day = 31;
        } else if (day > 30) {
            day = 30;
        }
    }

    unsigned int get_day() const { return day; }
    unsigned int get_month() const { return month; }
    unsigned int get_year() const { return year; }

    void print() const {
        cout << day << "/" << month << "/" << year;
    }
};
#endif
