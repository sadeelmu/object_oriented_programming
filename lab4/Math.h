#ifndef Math_H
#define Math_H
#include <iostream>
#include <string>
using namespace std;

class Math
{

public:
    static const double pi = 3.14;
    static double areaOfCircle(double radius);
    static double SumOfNumbers(int givenNumber);
    static double fabs(double absolute);
    static int round(double number);
};

#endif
