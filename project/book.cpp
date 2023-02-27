// book.cpp
#include <iostream>
#include "book.h"
using namespace std;

// parametrized defualt constructor
Book::Book(string title, string ISBN, int number_of_copies, string firstAuthor)
{
    set_title_(title);
    // how to verify each ISBN is unique
    set_ISBN_(ISBN);
    set_firstAuthor_(firstAuthor);
    set_number_of_copies_(number_of_copies);
}

// setters
void Book::set_title_(string title)
{
    // add !- "0"
    if (title != " ")
    {
        title_ = title;
    }
    else
    {
        cout << "invalid input the title string is empty:" << endl;
        exit(0);
    }
}
void Book::set_ISBN_(string ISBN)
{
    if (ISBN != " ")
    {
        ISBN_ = ISBN;
    }
    else
    {
        cout << "invalid input the ISBN string is empty:" << endl;
        exit(0);
    }
}
void Book::set_firstAuthor_(string firstAuthor)
{
    if (firstAuthor != " ")
    {
        firstAuthor_ = firstAuthor;
    }
    else
    {
        cout << "invalid input the firstAuthor string is empty:" << endl;
        exit(0);
    }
}
void Book::set_number_of_copies_(int number_of_copies)
{
    if (number_of_copies < 0)
    {
        cout << "invalid input only 0 and above is allowed:"
             << "\n\n";
        exit(0);
    }
    number_of_copies_ = number_of_copies;
}

// getters
string Book::get_title_() const
{
    return title_;
}
string Book::get_ISBN_() const
{
    return ISBN_;
}
string Book::get_firstAuthor_() const
{
    return firstAuthor_;
}
int Book::get_number_of_copies_() const
{
    return number_of_copies_;
}

// member functions
void Book::updateBookNumCopies(int n)
{
    int x = number_of_copies_;
    x += n;
    if (x >= 0)
    {
        set_number_of_copies_(x);
    }
    else
    {
        cout << "invalid input for changing book "
             << "numbers the output is in negative: \n\n";
    }
}
void Book::print() const
{
    cout << "The title is: " << title_ << "\t"
         << "The ISBN is: " << ISBN_ << " \t"
         << "The firstAuthor is: " << firstAuthor_ << " \t"
         << "The number of copies are: " << number_of_copies_ << "\n\n";
}
