#ifndef Doctor_H
#define Doctor_H
#include <string>
#include <iostream>
using namespace std;
class Doctor
{
private:
    int id_;
    string name_;
    float salary_;

public:
    Doctor(int id = 0, string name = "", float salary = 0);
    ~Doctor();
    Doctor(const Doctor &d);
    void setID(int id);
    void setName(string name);
    void setSalary(float salary);
    int getID();
    string getName();
    float getSalary();
    void printDetails();
};
#endif
