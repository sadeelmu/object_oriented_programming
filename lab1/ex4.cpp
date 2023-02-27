
#include <iostream>
#include <cstdlib>
using namespace std;
#define max 9
#define min 0

// ----- COPY FUNCTION generate() FROM EX3 HERE ----- //

void generate(int &a, int &b, int &c, int &d)
{
    a = min + rand() % (max - min + 1);
    while (b == a)
    {
        b = min + rand() % (max - min + 1);
    }

    while (c == b || c == a)
    {
        c = min + rand() % (max - min + 1);
    }

    while (d == c || d == b || d == a)
    {
        d = min + rand() % (max - min + 1);
    }
}

int main()
{
    // 1. Define four integer variables (call them
    //    a, b, c, d) for storing the hidden numbers.
    //    Use function generate() to store in them the
    //    hidden random digits.

    int a, b, c, d;
    generate(a, b, c, d);

    // 2. Define four integer variables (call them
    //    d1, d2, d3, 4) for storing the player's guess.

    int d1, d2, d3, d4;

    // 3. Repeat For Ever:
    //
    //      A. Read the player's guess.
    cin >> d1;
    cin >> d2;
    cin >> d3;
    cin >> d4;
    //
    //      B. Initialize and then increment the number
    //         of Bulls in each of the following cases:
    //         - if d1 equals a
    //         - if d2 equals b
    //         - if d3 equals c
    //         - if d4 equals d
    int bulls = 0;
    if (d1 == a)
    {
        bulls++;
    }
    if (d2 == b)
    {
        bulls++;
    }
    if (d3 == c)
    {
        bulls++;
    }
    if (d4 == d)
    {
        bulls++;
    }

    //
    //      C. If the number of Bulls is 4, stop
    //         the game and print "YOU WIN!".
    if (bulls == 4)
    {
        cout << "You Win" << endl;
        exit(1);
    }
    //
    //      D. Initialize and then increment the number of
    //         Cows in each of the following cases:

    int cows = 0;
    //         - Check if d1 does not equal a, but equals
    //           b or c or d.
    if (d1 != a && (d1 == b || d1 == c || d1 == d))
    {
        cows++;
    }
    if (d2 != b && (d2 == a || d2 == c || d2 == d))
    {
        cows++;
    }
    if (d3 != c && (d3 == a || d3 == b || d3 == d))
    {
        cows++;
    }
    if (d4 != d && (d4 == a || d4 == b || d4 == c))
    {
        cows++;
    }

    //         - Check if d2 does not equal b, but equals
    //           a or c or d.
    //         - Do the same for d3 and d4.
    //         (use && and ||)
    //
    //
    //      E. Print the number of Cows and Bulls.
    cout << cows << " " << endl;
    cout << bulls << " " << endl;

    return 0;
}
