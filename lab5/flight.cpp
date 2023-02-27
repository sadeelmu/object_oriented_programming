#include "flight.h"
#include "passenger.h"
#include "date.h"
#include "time.h"
#include <iostream>
#include <string>
using namespace std;

Flight::Flight(string origin, string destination, string number)
{
}
const Date &Flight::get_date() const
{
    return date_;
}

//first const makes it so the flight cannot edit the original date in the date.h
//the second const makes it so we know this function doesnt edit
//if we're going to use reference we must put const before if we want to put one after

const Time &Flight::get_time() const
{
    return time_;
}

string Flight::get_origin() const
{
    return origin_;
}

void Flight::print() const
{
    cout << "Flight " << number_ << " From " << origin_ << " to " << destination_ << " on ";
    date_.print();
    cout << " at ";
    time_.print();
    for (int i = 0; i < count_; i++)
    {
        arrayOfPassengers[i].print();
    }
}

void Flight::addPassenger(Passenger p)
{
    arrayOfPassengers[count_] = p;
    count_++;
}

void Flight::setDate(const Date &date)
{
    date_ = date;
}
void Flight::setTime(const Time &time)
{
    time_ = time;
}
