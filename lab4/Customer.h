#ifndef Customer_H
#define Customer_H
#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
  string cName_;
  const int cID_;

  //private static memeber
  static int numOfCustomers;

public:
  //paramterized constructor
  Customer(string name, int id);

  //destructor
  ~Customer();

  //setters
  void setName(string name);
  // void setID(int id);

  //getters
  //Modify your code such that all member functions that do not modify data members are made constant.

  /*In a comment section, for each of the member functions in class Customer, list
  which functions can be called on the constant object and which cannot. Justify your
  answer.*/
  //getName() must be constant because when we get the name we dont need to change it
  //print can also be constant because we dont modify the values in it we just call them and print them
  //functions that we want to modify the data in cannot be const
  string getName() const;
  //print function
  int getID() const;

  //public static function
  //void setNumOfCustomers(int numOfCustomers);
  static int getNumOfCustomers();
};

#endif
