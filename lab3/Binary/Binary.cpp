#include "Binary.h"
#include <iostream>
#include <string>
using namespace std;

Binary::Binary()
{
    binary_;
    decimal_;
}

Binary::Binary(string binary)
{
    setBinary;
}

Binary::Binary(unsigned int decimal)
{
    setDecimal;
}

void Binary::setDecimal(unsigned int decimal)
{
    decimal_ = decimal;
    binary_ = convertToBinary(decimal);
}
void Binary::setBinary(string binary)
{
    binary_ = binary;
    decimal_ = convertToDecimal(binary);
}

string Binary::getBinary()
{
    return binary_;
}
unsigned int Binary::getDecimal()
{
    return decimal_;
}

bool Binary::isGreaterThan(Binary other)
{
    if (decimal_ > other.decimal_)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Binary::add(Binary other)
{
    decimal_ = decimal_ + other.decimal_;
    binary_ = convertToBinary(decimal_);
}
unsigned int Binary::plus(Binary other)
{
    unsigned int sum = decimal_ + other.decimal_;
    return sum;
}

void Binary::print()
{
    cout << decimal_ << binary_;
}
