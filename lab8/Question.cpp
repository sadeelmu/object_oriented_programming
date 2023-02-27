#include "Question.h"
#include <iostream>
#include <string>
using namespace std;
Question ::Question(string text, string answer, int points)
{
    text_ = text;
    answer_ = answer;
    points_ = points;
}

void Question::ask() const
{
    cout << text_;
    cout << points_;
}

string Question::get_answer() const
{
    return answer_;
}

int Question::get_points() const
{
    return points_;
}

bool Question::is_correct(string answer) const
{
    if (answer_ != answer)
    {
        return false;
    }
    else
        return true;
}
