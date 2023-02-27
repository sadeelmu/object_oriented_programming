#include "Doctor.h"
#include "Hospital.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Code";
    // create an object of type Hospital called Hospital1.
    Hospital Hospital1(1, "Amman");
    // number of Doctors: 3
    // create new array and make its size 3
    int size = 3;
    Doctor *list = new Doctor(size);

    for (int i = 0; i < size; i++)
    {
        int id;
        float salary;
        string name;
        cout << "Enter details for doctor " << i << endl;
        cout << "Enter ID: " << endl;
        cin >> id;
        list[i].setID(id);
        cout << "Enter name: " << endl;
        getline(cin, name);
        list[i].setName(name);
        cout << "Enter salary: " << endl;
        cin >> salary;
        list[i].setSalary(salary);
    }
    Hospital1.setDoctors(list, size);

    Hospital Hospital1copy(Hospital1);

    string nameUser;
    cout << "Enter your name";
    getline(cin, nameUser);
    Hospital1.printDetails();
    Hospital1copy.printDetails();
    if (Hospital1.find(nameUser) != -1)
    {
        cout << "Doctor with your name found";
    }
    else
    {
        cout << "No doctor with your name found";
    }
    return 0;
}
