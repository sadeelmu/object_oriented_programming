#ifndef BOOKSHELF_H
#define BOOKSHELF_H
#include <string>
#include <iostream>
#include "Book.h"
using namespace std;

class Bookshelf
{
private:
    int capacity;
    Book *bookList;
    int current;
    string title;

public:
    Bookshelf(int capacity);
    Bookshelf(const Bookshelf &b);
    ~Bookshelf();
    bool isFull();
    bool isEmpty();
    void add(string title);
    void add_all(const Bookshelf &other);
    void remove(string title);
};
#endif
