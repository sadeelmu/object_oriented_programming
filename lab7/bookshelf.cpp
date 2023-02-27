#include "Bookshelf.h"
#include "Book.h"
#include <string>
#include <iostream>
using namespace std;

Bookshelf::Bookshelf(int capacity)
{
    this->capacity = capacity;
    this->current = 0;
    this->bookList = new Book[this->capacity];
}

Bookshelf::Bookshelf(const Bookshelf &b)
{
    this->capacity = b.capacity;
    this->current = b.current;
    this->bookList = new Book[b.capacity];
    for (int i = 0; i < b.capacity; i++)
    {
        bookList[i] = b.bookList[i];
    }
}

Bookshelf::~Bookshelf()
{
    delete[] this->bookList;
}

bool Bookshelf::isFull()
{
    if (this->capacity == this->current)
    {
        return true;
    }
    else
        return false;
}

bool Bookshelf::isEmpty()
{
    if (this->capacity == 0 && this->current == 0)
    {
        return true;
    }
    else
        return false;
}

void Bookshelf::add(string title)
{
    Book b1(title);
    if (isFull() == false)
    {
        this->bookList[current] = b1;
        this->current++;
    }
    if (isFull() == true)
    {
        cout << "The list is full" << endl;
    }
}

void Bookshelf::remove(string title)
{
    for (int i = 0; i < current; i++)
    {

        if (this->bookList[i].getTitle() == title)
        {
            for (int j = i + 1; j < this->current; j++)
            {
                this->bookList[j - 1] = this->bookList[j];
                current--;
            } // end shifting
        }     // end finding
    }         // end finding loop
}

void Bookshelf::add_all(const Bookshelf &other)
{
    Book *tempList;
    int size = this->current + other.current;
    if (size > this->capacity)
    {
        int diff = size - capacity;
        this->capacity = capacity + diff;
        tempList = new Book[this->capacity];
        for (int i = 0; i < this->current; i++)
        {
            tempList[i] = this->bookList[this->current];
            for (int j = i + 1; i < other.current; j++)
            {
                tempList[j] = this->bookList[other.current];
            }
        }
    }
    delete[] this->bookList;
    this->bookList = tempList;
    this->current = current + other.current;
    this->capacity = capacity;
}
