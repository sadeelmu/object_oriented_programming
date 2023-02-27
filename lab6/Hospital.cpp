#include "Hospital.h"
#include "Doctor.h"
#include <iostream>
#include <string>
using namespace std;

Hospital::Hospital(int id, string location)
{
    hospitalID_ = id;
    location_ = location;
    num_ = 0;
    list_ = nullptr;
}

void Hospital::setDoctors(Doctor *n, int numOfDoctors)
{
    delete[] list_;
    num_ = numOfDoctors;
    list_ = new Doctor[num_];
    for (int i = 0; i < num_; i++)
    {
        list_[i] = n[i];
    }
}
Hospital::~Hospital()
{
    delete[] list_;
}

Hospital::Hospital(const Hospital &h)
{
    hospitalID_ = h.hospitalID_;
    location_ = h.location_;
    num_ = h.num_;
    for (int i = 0; i < num_; i++)
    {
        list_[i] = h.list_[i];
    }
}

int Hospital::find(string doctor_name)
{
    int index = -1;
    for (int i = 0; i < num_; i++)
    {
        if (list_[i].getName() == doctor_name)
        {
            index = i;
            break;
        }
    }
    return index;
}

float Hospital::getTotalSalaries()
{
    float sum = 0;
    for (int i = 0; i < num_; i++)
    {
        sum += list_[i].getSalary();
    }
    return sum;
}

void Hospital::printDetails()
{
    cout << "Hospital ID: " << hospitalID_ << endl;
    cout << "Hospital Location: " << location_ << endl;
    cout << "Hospital number: " << num_ << endl;
    for (int i = 0; i < num_; i++)
    {
        list_[i].printDetails();
    }
}
