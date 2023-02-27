#include "passenger.h"
#include <iostream>
#include <string>
using namespace std;

Passenger::Passenger() : name_(" "), nationality_(" "), passportNumber_(" ")
{
}

Passenger::Passenger(string name, string nationality, string passportNumber, Date dateOfBirth) : name_(name), nationality_(nationality), passportNumber_(passportNumber), dateOfBirth_(dateOfBirth)
{
}

void Passenger::setName(string name)
{
    name_ = name;
}

void Passenger::setNationality(string nationality)
{
    nationality_ = nationality;
}
void Passenger::setPassportNumber(string passportNumber)
{
    passportNumber_ = passportNumber;
}
void Passenger::setDateOfBirth(Date dateOfBirth)
{
    dateOfBirth_ = dateOfBirth;
}

Date Passenger::getDateOfBirth()
{
    return dateOfBirth_;
}

string Passenger::getName()
{
    return name_;
}

string Passenger::getNationality()
{
    return nationality_;
}

string Passenger::getPassportNumber()
{
    return passportNumber_;
}

void Passenger::print() const
{
    cout << name_ << " from " << nationality_ << " (passport no. [" << passportNumber_ << "], DoB: ";
    dateOfBirth_.print();
    cout << "])" << endl;
}
