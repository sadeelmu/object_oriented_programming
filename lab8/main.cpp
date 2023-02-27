#include "Question.h"
#include "mcq.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Question q1("Is this correct?", "Yes", 7);
    string choices[] = {"A", "B", "C", "D"};
    int totalp = 0;
    string answ;
    mcq q2("A B C OR D?", 0, choices, 7, 5);
    q1.ask();
    cin >> answ;
    if (q1.is_correct(answ) == true)
    {
        cout << "Correct" << endl;
        totalp = totalp + q1.get_points();
    }
    else
    {
        cout << "Wrong" << endl;
    }
    q2.ask();
    cin >> answ;
    if (q2.is_correct(answ) == true)
    {
        cout << "Correct" << endl;
        totalp = totalp + q2.get_points();
    }
    else
    {
        cout << "Wrong" << endl;
    }

    cout << "Total point: " << totalp << endl;

    return 0;
}
