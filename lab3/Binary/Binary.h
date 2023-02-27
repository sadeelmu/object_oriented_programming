#ifndef Binary_H
#define Binary_H
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Binary
{
private:
    //data type
    string binary_;
    unsigned int decimal_;

    //private functions
    // int result = convertToDecimal("1001")  <-- 9
    unsigned int convertToDecimal(string str)
    {
        unsigned int sum = 0;
        int j = 0; // power
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if (str[i] == '1')
                sum += pow(2, j);
            j++;
        }
        return sum;
    }

    // string result = convert_to_string(7) <--- "111"
    string convertToBinary(unsigned int num)
    {
        string result = "";
        while (num > 0)
        {
            result = to_string(num % 2) + result;
            num /= 2;
        }
        return result;
    }

public:
    //constructor
    Binary();
    //A parameterized constructor that takes the number as a string in binary representation.
    Binary(string binary);
    //A parameterized constructor that takes the decimal value of the binary number as an unsigned int .
    Binary(unsigned int decimal);

    //copy constructor
    Binary(const Binary &e);

    //setters
    void setBinary(string binary);
    void setDecimal(unsigned int decimal);

    //getters
    string getBinary();
    unsigned int getDecimal();

    //public functions
    bool isGreaterThan(Binary other);
    void add(Binary other);
    unsigned int plus(Binary other);

    void print();
};

#endif
