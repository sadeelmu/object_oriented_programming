#include "flight.h"
#include "passenger.h"
#include "date.h"
#include "time.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Flight fOne("AMM", "NY", "RJ-0987");
    fOne.setDate(Date(3, 4, 2021));
    fOne.setTime(Time(1, 2, 3));
    fOne.print();
    cout << endl;
    //    Passenger(string name, string nationality, string passportNumber, Date dateOfBirth);

    Passenger p1("Ibrahim Albrahim", "Egypt", "E9987", Date(1, 1, 2020));
    fOne.addPassenger(p1);
    Passenger p2("Khaled Khalil", "Palestine", "P1937", Date(2, 2, 1999));
    fOne.addPassenger(p2);
    Passenger p3("Salma Salam", "Jordan", "J9987", Date(1, 12, 1987));
    fOne.addPassenger(p3);
    Passenger p4("Hala Hilal", "Algeria", "A9991", Date(13, 11, 1971));
    fOne.addPassenger(p4);
    cout << "Passengers: " << endl;
    fOne.print();
    cout << endl;
    return 0;
}
