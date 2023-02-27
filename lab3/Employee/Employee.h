#ifndef Employee_H
#define Employee_H
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    //data type
    int id_;
    string name_;
    int salary_;
    string department_;

public:
    //constructor
    Employee(int id = 0, string name = "No name", int salary = 0, string department = "No department");
    Employee(int id, int salary);

    //copy constructor
    Employee(const Employee &e);

    //setters
    void setID(int id);
    void setName(string name);
    void setSalary(int salary);
    void setDepartment(string department);

    //getters
    int getID();
    string getName();
    int getSalary();
    string getDepartment();

    //public functions
};

#endif
