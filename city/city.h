

#ifndef CITY_H
#define CITY_H
#include <iostream>
#include <string>
using namespace std;

class City{

  private:
    string name_;
    float income_;
    int numResidents_;

    

  public:
    //default constructor
    City();
    //destructor
    ~City();
    //paramterized constructor
    City(string name="", float income=0, int numResident=0);

    //setters
    void setName(string n);
    void setIncome(float i);
    void setNumResidents(int r);

    //getters
    string getName();
    float getIncome();
    int getNumResidents();

    //function
    void printDetails();
    City combineCities(City c);
    bool hasMoreIncome(City c);
    float getCityIncome();
    int addResidents(int n);
    float updateIncome(int v);

};


#endif


