//Sadeel Muwahed 20200232 Lab 4 Section 8

//source file

#include <iostream>
#include <string>
#include "City.h" 
using namespace std;
int counter2=0;


City::City(string name,float income, int numResidents){

setName(name);
setIncome(income);
setNumResidents(numResidents);
counter2++;
cout<<counter2;
}

City::City(){
name_="";
income_=0;
numResidents_=0;
counter2++;
cout<<counter2;

}

City::~City(){
cout<<"Destructor"<<endl;
counter2=counter2-1;
cout<<counter2;

}


//setters
void City::setName(string n){
name_=n;
}
void City::setIncome(float i){
income_=i;

}
void City::setNumResidents(int r){
numResidents_=r;
}

//getters

string City::getName(){
    return name_;
}

float City::getIncome(){
        return income_;
    }

int City::getNumResidents(){
        return numResidents_;
}

void City::printDetails(){
    cout<<"Name: "<<name_<<endl<<"Income"<<income_<<endl<<"Number of Residents"<<numResidents_<<end;
}


float City::updateIncome(int value){
float newIncome;
if(value>0){
    newIncome=income_+value;
}
else if(value<0){
    newIncome=income_-value;
}
return newIncome;
}


int City::addResidents(int num){
int newResidents;
newResidents=num+numResidents_;
return newResidents;
}

float City::getCityIncome(){
float total;
total=income_*numResidents_*12;
return total;
}

bool City::hasMoreIncome(City c2){
  if (getIncome() > c2.getIncome())
    {
        return true;
    }
    else
    {
        return false;
    }
}

City City::combineCities(City c2){
City combine_cities;
combine_cities.name_=name_+c2.name_;
combine_cities.income_=income_+c2.income_;
combine_cities.numResidents_=numResidents_+c2.numResidents_;
return combine_cities;
}


