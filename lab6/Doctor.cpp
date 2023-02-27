#include "Doctor.h"
#include <iostream>
#include <string>
using namespace std;

Doctor::Doctor(int id = 0, string name = "", float salary = 0)
{
    setID(id);
    setName(name);
    setSalary(salary);
}

Doctor::~Doctor()
{
    cout << "Destructor";
}

void Doctor::setID(int id)
{
    id_ = id;
}
void Doctor::setName(string name)
{
    name_ = name;
}

void Doctor::setSalary(float salary)
{
    salary_ = salary;
}
int Doctor::getID()
{
    return id_;
}
string Doctor::getName()
{
    return name_;
}
float Doctor::getSalary()
{
    return salary_;
}
void Doctor::printDetails()
{
    cout << "Doctor ID: " << id_ << endl;
    cout << "Doctor Name: " << name_ << endl;
    cout << "Doctor Salary: " << salary_ << endl;
}
