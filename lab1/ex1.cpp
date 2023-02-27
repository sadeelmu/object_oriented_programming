
#include <iostream>
using namespace std;

int factor(int a);
void printError();
int main()
{
    int n, k;
    cout << "Enter the number of buttons in the lock: ";
    cin >> n;

    if (n < 1 || n > 20)
    {
        printError();
        exit(1);
    }

    cout << "Enter the number of buttons in the passcode: ";
    cin >> k;

    if (k < 1 || k > n)
    {
        printError();
        exit(1);
    }

    // compute n choose k using the formula: n! / (k! x (n-k)!)
    // 1) compute n!

    //unsigned long long means Unsigned long variables are extended size variables for number storage, and store 32 bits (4 bytes).
    unsigned long long n_fact = factor(n);

    // 2) compute k!
    unsigned long long k_fact = factor(k);

    // 3) compute (n-k)!

    unsigned long long nk_fact = factor(n - k);

    // compute n choose k
    unsigned long long result = n_fact / (k_fact * nk_fact);
    cout << "You have to try at most " << result << " times." << endl;

    return 0;
}

int factor(int a)
{

    unsigned long long fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= 1;
    }
    return fact;
}
void printError()
{
    cout << "---------------------------------------" << endl;
    cout << "ERROR: INVALID INPUT."
         << "\nRules:\n  * 1 <= lock buttons <= 20." << endl
         << "  * 1 <= passcode buttons <= lock buttons." << endl;
    cout << "The program will exit." << endl;
    cout << "---------------------------------------" << endl;
}
