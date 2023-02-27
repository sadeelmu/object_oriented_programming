#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;
//to give value for the static
int Customer::numOfCustomers = 0;

Customer::Customer(string name, int id) : cID_(id)
{
  //setID(id);
  setName(name);
  numOfCustomers++;
}

Customer::~Customer()
{
  cout << "Destructor";
  numOfCustomers--;
}

void Customer::setName(string name)
{
  cName_ = name;
}

//there is no set for
// void Customer::setID(int id){
// cID_=id;
// //?
// }

string Customer::getName() const
{
  return cName_;
}
int Customer::getID() const
{
  return cID_;
}

int Customer::getNumOfCustomers()
{
  return numOfCustomers;
}
