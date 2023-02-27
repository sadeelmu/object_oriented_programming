#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int maxSize_;
    int current_;
    Book *bookList_;

    void resizeLibrary(int n)
    {
        if (n >= 0)
        {
            Book *newBookList_;
            maxSize_ = maxSize_ + n;
            newBookList_ = new Book[maxSize_];
            for (int i = 0; i < current_; i++)
            {
                newBookList_[i] = bookList_[n];
            }
            delete[] bookList_;
            bookList_ = newBookList_;
        }
    }

public:
    Library(int n);
    Library(const Library &);
    ~Library();
    bool isEmpty();
    bool isFull();
    int findBookByTitle(const string &title);
    int findBookByISBN(string isbn);
    void addBook(const Book &book);
    void addBook();
    int getMaxSize() const;
    int getCurrent() const;
    float capacityUsage();
    bool removeBookCopy(string isbn);
    // friend put only in .h
    friend void printLibrary(const Library &libr);
};
#endif
