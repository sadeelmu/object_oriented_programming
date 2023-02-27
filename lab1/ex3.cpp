#include <iostream>
using namespace std;
#define max 9
#define min 0

void generate(int &a, int &b, int &c, int &d);

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int z = 0;

    generate(i, j, k, z);
    return 0;
}

void generate(int &a, int &b, int &c, int &d)
{
    a = min + rand() % (max - min + 1);
    cout << a;
    cout << " ";
    while (b == a)
    {
        b = min + rand() % (max - min + 1);
    }
    cout << b;
    cout << " ";
    while (c == b || c == a)
    {
        c = min + rand() % (max - min + 1);
    }
    cout << c;
    cout << " ";
    while (d == c || d == b || d == a)
    {
        d = min + rand() % (max - min + 1);
    }
    cout << d;
    cout << " ";
}
