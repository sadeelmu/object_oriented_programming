#ifndef Hospital_H
#define Hospital_H
#include <iostream>
#include "Doctor.h"
#include <string>
using namespace std;

class Hospital
{
private:
    int hospitalID_;
    string location_;
    int num_;
    Doctor *list_;

public:
    Hospital(int id, string location);
    // doctor *n array
    void setDoctors(Doctor *n, int numOfDoctors);

    ~Hospital();

    // copy constructor
    Hospital(const Hospital &h);

    float getTotalSalaries();
    void printDetails();
    int find(string doctor_name);
};

#endif
