#include "Binary.h"
#include <iostream>
#include <string>
using namespace std;

unsigned int summation(Binary b, Binary btwo)
{
    unsigned int sum = 0;
    //sum = b.plus(btwo);

    //or

    sum = b.getDecimal() + btwo.getDecimal();
    cout << sum;
    return sum;
}
int main()
{
    string b1n, b2n, b3n;

    cout << "Please enter a binary number";
    cin >> b1n;
    cout << "Please enter a binary number";
    cin >> b2n;
    cout << "Please enter a binary number";
    cin >> b3n;
    // b1.setBinary(b1n);
    // b2.setBinary(b2n);
    // b3.setBinary(b3n);
    Binary b1(b1n);
    Binary b2(b2n);
    Binary b3(b3n);
    summation(b1, b2);
    b1.print();
    b2.print();
    b3.print();
}
