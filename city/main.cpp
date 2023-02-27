
#include "City.h"
#include <iostream>
#include <string>
using namespace std;

int count;

int main(){
    City c1;
    count++;

    string n2;
    float i2;
    int nr2;

  
    cout<<"Enter name for the second object"<<endl;
    cin>>n2;
    cout<<"Enter income for the second object"<<endl;
    cin>>i2;
    cout<<"Enter number of residents for the second object"<<endl;
    cin>>nr2;

    City c2(n2,i2,nr2);
    //count++;


    c1.setIncome(1000);
    c1.setName("Amman");
    c1.setNumResidents(2000000);
  


    c1.addResidents(500000);

    //value is 1500
    c2.updateIncome(1500);


    cout<<c1.getIncome();
    cout<<c2.getIncome();

    bool flag=false;
    flag = c1.hasMoreIncome(c2);

    City united;
    //count++;

    united=c1.combineCities(c2);
    united.printDetails();

    return 0;
}

