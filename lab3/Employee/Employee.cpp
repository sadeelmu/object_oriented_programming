#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(int id,string name,int salary, string department){
setID(id);
setName(name);
setSalary(salary);
setDepartment(department);
}


void Employee::setID(int id){
id_=id;
}
void Employee::setName(string name){
name_=name;
}
void Employee::setSalary(int salary){
salary_=salary;
}
void Employee::setDepartment(string department){
department_=department;
}

 int Employee::getID(){
     return id_;
 }
string Employee::getName(){
    return name_;
}
int Employee::getSalary(){
    return salary_;
}
string Employee::getDepartment(){
    return department_;
}
