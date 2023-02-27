#include "Question.h"
#include "mcq.h"
#include <iostream>
#include <string>
using namespace std;

mcq::mcq(string text, int points, string *choices, int size, int index) : Question(text, choices[index], points)
{
    size_ = size;

    index_ = index;
    a_ = new string[size];
    for (int i = 0; i < size; i++)
    {
        a_[i] = choices[i];
    }
}
mcq::mcq(const mcq &c) : Question(c.text_, c.answer_, c.points_)
{
    size_ = c.size_;
    a_ = new string[c.size_];
    for (int i = 0; i < size_; i++)
    {
        a_[i] = c.a_[i];
    }
    index_ = c.index_;
}
mcq::~mcq()
{
    delete[] a_;
}

void mcq::ask() const
{
    Question::ask();
    for (int i = 0; i < size_; i++)
    {
        cout << "index: " << i << ": " << a_[i] << endl;
    }
}

bool mcq::is_correct(string answer) const
{

    if (Question::answer_ == answer)
    {
        return true;
    }
    else if (index_ == stoi(answer))
    {
        return true;
    }
    else
        return false;
}
