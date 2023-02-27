#ifndef QUESTION_H
#define QUESTION_H
#include <iostream>
#include <string>
using namespace std;

class Question
{
protected:
    string text_;
    string answer_;
    int points_;

public:
    Question(string text, string answer, int points);
    void ask() const;
    string get_answer() const;
    int get_points() const;
    bool is_correct(string answer) const;
};

#endif

// #pragma once 
