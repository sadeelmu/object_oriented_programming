#ifndef Passenger_H
#define Passenger_H
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

class Passenger
{
private:
    //data memebrs
    string nationality_;
    string passportNumber_;
    Date dateOfBirth_;
    string name_;

public:
    Passenger();
    Passenger(string name, string nationality, string passportNumber, Date dateOfBirth);

    void setName(string name);
    void setNationality(string nationality);
    void setPassportNumber(string passportNumber);
    void setDateOfBirth(Date dateOfBirth);

    // const Date &getDateOfBirth() const;
    Date getDateOfBirth();
    string getName();
    string getNationality();
    string getPassportNumber();

    void print() const;
};

#endif
