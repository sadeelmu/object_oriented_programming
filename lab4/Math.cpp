#include "Math.h"
#include <iostream>
#include <string>
using namespace std;

double Math::areaOfCircle(double radius)
{
    double area = 0;
    return area = pi * (radius * radius);
}

int Math::SumOfNumbers(int givenNumber)
{
    int sum = 0;
    for (int i = 0; givenNumber >= i; i++)
    {
        sum = sum + i;
    }
    return sum;
}

double Math::fabs(double absolute)
{
    if (absolute > 0)
    {
        return absolute;
    }
    else if (absolute < 0)
    {
        return absolute * -1;
    }
}
int Math::round(double number)
{
    return (number > 0.0) ? (number + 0.5) : (number - 0.5);
}
