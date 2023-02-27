#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;

public:
    Book(string title = "");
    string getTitle();
    void setTitle(string title);
};
#endif
