#include "Customer.h"
#include "Math.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

  /*Modify the driver program to instantiate three objects of type Customer and then
  use the getter function defined in B.2 to output the number of Customer objects
  instantiated so far.*/
  Customer c1("Sadeel", 1);
  Customer c2("Sad", 2);

  /*Modify the code such that it calls the destructor for one of the 3 objects 
  you defined before then call the numOfCustomers getter function again. */
  {
    Customer c3("d", 3);
    cout << Customer::getNumOfCustomers();
  }
  cout << Customer::getNumOfCustomers();
  c1.getNumOfCustomers();

  //Define a constant object of type Customer.
  Customer const c4("S", 4);

  cout << Math::pi;
  cout << Math::areaOfCircle(5);
  cout << Math::SumOfNumbers(6);
  cout << Math::fabs(-3);
  cout << Math::round(34.2);
}
