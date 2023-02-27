#ifndef Flight_H
#define Flight_H
#include "passenger.h"
#include "date.h"
#include "time.h"
#include <iostream>
#include <string>
using namespace std;

class Flight
{
private:
    string origin_;
    string destination_;
    string number_;
    Passenger arrayOfPassengers[200];
    Date date_;
    Time time_;
    static int count_;

public:
    Flight(string origin, string destination, string number);
    const Date &get_date() const;
    const Time &get_time() const;
    string get_origin() const;
    void print() const;

    void addPassenger(Passenger p);
    void setDate(const Date &date);
    void setTime(const Time &time);
};
#endif
