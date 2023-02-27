#include <string>
#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(string title)
{
    setTitle(title);
}

void Book::setTitle(string title)
{
    if (title != "")
    {
        this->title = title;
    }
}

string Book::getTitle()
{
    return title;
}
