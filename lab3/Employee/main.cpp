#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	Employee e1;
	Employee e2(1111);
	Employee e3(2222, "Ali");
	Employee e4(3333, "leen", 700, "HR");
	Employee e5(4444, 550);
	Employee e6(5555, "HR");
	Employee e7(e5);
	//If the user doesn't specify the value of the id or the salary, make them 0. If the user doesn't specify the value of the name or the department, make them "No name", "No department".
	return 0;
}
