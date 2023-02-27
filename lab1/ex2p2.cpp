//Sadeel Muwahed 20200232

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Add the TWO functions here

int random(int max, int min = 0);
double random(double max, double min = 0.0);

int main()
{
    srand(time(0));

    cout << "Random integer in the range [100, 200]: " << random(200, 100) << endl;

    cout << "Random integer in the range [-100, 0]: " << random(0, -100) << endl;

    cout << "Random integer in the range [0, 200]: " << random(200) << endl;

    cout << "Random double in the range [1.5, 2.5]: " << random(2.5, 1.5) << endl;

    cout << "Random double in the range [-2.5, -1.5]: " << random(-1.5, -2.5) << endl;

    cout << "Random double in the range [0, 5]: " << random(5.0) << endl;

    return 0;
}

int random(int max, int min)
{
    int res = 0;
    res = min + rand() % (max - min + 1);
    return res;
}
double random(double max, double min)
{
    double res = 0;
    res = min + (double)rand() / RAND_MAX * (max - min);
    return res;
}
