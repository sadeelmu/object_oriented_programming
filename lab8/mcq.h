#ifndef MCQ_H
#define MCQ_H
#include <Question.h>
#include <iostream>
#include <string>
using namespace std;
class mcq : public Question
{
private:
    int size_;
    int index_;
    string *a_;

public:
    mcq(string text, int points, string *choices, int size, int index);
    ~mcq();
    mcq(const mcq &c);
    void ask() const;
    bool is_correct(string answer) const;
};

#endif
