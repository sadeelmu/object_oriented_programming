// book.h
#pragma once
#include <iostream>
using namespace std;

class Book
{
    string title_;
    string ISBN_;
    string firstAuthor_;
    int number_of_copies_;

public:
    // parameterized constructor
    Book(string title = "-", string ISBN = "-", int number_of_copies = 0, string firstAuthor = "-");
    // setters and getters
    void set_title_(string title);
    void set_ISBN_(string ISBN);
    void set_firstAuthor_(string firstAuthor);
    void set_number_of_copies_(int number_of_copies);
    string get_title_() const;
    string get_ISBN_() const;
    string get_firstAuthor_() const;
    int get_number_of_copies_() const;
    // member functions
    void updateBookNumCopies(int n);
    void print() const;
};
