#include "Library.h"
#include "book.h"
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

Library::Library(int n)
{
    // make sure n is postive and set maxSize to n
    if (n >= 0)
    {
        maxSize_ = n;
    }

    // allocate dynamic space
    bookList_ = new Book[maxSize_];

    // set current to zeros
    current_ = 0;
}

Library::Library(const Library &l)
{
    maxSize_ = l.maxSize_;
    current_ = l.current_;
    bookList_ = new Book[l.maxSize_];
    for (int i = 0; i < l.maxSize_; i++)
    {
        bookList_[i] = l.bookList_[i];
    }
}

Library::~Library()
{
    delete[] bookList_;
}

bool Library::isEmpty()
{
    if (maxSize_ == 0 || current_ == 0)
    {
        return true;
    }
    else
        return false;
}

bool Library::isFull()
{
    if (maxSize_ == current_)
    {
        return true;
    }
    else
        return false;
}
int Library::findBookByTitle(const string &title)
{

    for (int i = 0; i < this->current_; i++)
    {

        if (bookList_[i].get_title_() == title)
        {
            return i;
        }

    } // end for loop
    return -1;
}

int Library::findBookByISBN(string isbn)
{
    for (int i = 0; i < this->current_; i++)
    {
        if (bookList_[i].get_ISBN_() == isbn)
        {
            return i;
        } // book does not equal the ISBN given
    }     // end for loop
    return -1;
}

void Library::addBook(const Book &book)
{
    // adds the book to the end of list bookList if the Library is not full and the book is not already exist in the list.

    if (isFull() == false && (findBookByISBN(book.get_ISBN_()) == -1))
    {
        bookList_[current_] = book;
        this->current_++;
    }

    // If the book to is already in the list, then update the number of copies of that book (increment the current number of copies by the amount number_of_copies)

    if (findBookByISBN(book.get_ISBN_()) != -1)
    {
        int index = findBookByISBN(book.get_ISBN_());
        bookList_[index].updateBookNumCopies(book.get_number_of_copies_());
    }

    // If a book is not in the list, but the list is full, then resize the library pointed. bybookList to allow for 10 more books then add the book at the first available location (i.e., after all the books that already exist).
    if (isFull() == true && (findBookByISBN(book.get_ISBN_()) == -1))
    {

        resizeLibrary(10);
        bookList_[current_] = book;
        this->current_++;
    }
}

void Library::addBook()
{
    Book b1;
    string title;
    string author;
    string isbn;
    int numOfCopies;

    cout << "Please enter the title of the new book" << endl;
    cin >> title;
    b1.set_title_(title);
    cout << "Please enter Author of the new book" << endl;
    cin >> author;
    b1.set_firstAuthor_(author);
    cout << "Please enter ISBN of the new book" << endl;
    cin >> isbn;
    b1.set_ISBN_(isbn);
    cout << "Please enter The number of copies of the new book" << endl;
    cin >> numOfCopies;
    b1.set_number_of_copies_(numOfCopies);

    for (int i = 0; i < this->current_; i++)
    {
        // adds the book to the end of list bookList if the Library is not full and the book is not already exist in the list.
        if (isFull() == false && (findBookByISBN(b1.get_ISBN_()) == -1))
        {
            bookList_[current_] = b1;
            this->current_++;
        }
        // If the book to is already in the list, then update the number of copies of that book (increment the current number of copies by the amount number_of_copies)

        if (findBookByISBN(b1.get_ISBN_()) != -1)
        {
            int index = findBookByISBN(b1.get_ISBN_());
            bookList_[index].updateBookNumCopies(b1.get_number_of_copies_());
        }
        // If a book is not in the list, but the list is full, then resize the library pointed. bybookList to allow for 10 more books then add the book at the first available location (i.e., after all the books that already exist).
        if (isFull() == true && (findBookByISBN(b1.get_ISBN_()) == -1))
        {
            resizeLibrary(10);
            bookList_[current_] = b1;
            this->current_++;
        }
    }

} // member function

int Library::getMaxSize() const
{
    return maxSize_;
}

int Library::getCurrent() const
{
    return current_;
}

float Library::capacityUsage()
{

    float capacity = (float(current_) / float(maxSize_)) * 100;
    return capacity;
}

bool Library::removeBookCopy(string isbn)
{
    int index = findBookByISBN(isbn);

    // if the book exists in the library then decrements the number of copies of the book by one
    if (index != -1)
    {

        bookList_[findBookByISBN(isbn)].updateBookNumCopies(-1);
        int numCompies = bookList_[index].get_number_of_copies_();

        // If the number of copies becomes zero, the function must delete the book from the list by shifting left all book items on the right of the book to be removed.
        if (numCompies == 0)
        {
            // two for loop to delete by shifting
            for (int i = index + 1; i < this->current_; i++)
            {
                bookList_[i - 1] = bookList_[i];
            }
            current_--;
        }
        return true;
    } // check index is right

    // the function returns true if the book is found, otherwise, prints a proper message and returns false.

    return false;
}

void printLibrary(const Library &libr)
{
    for (int i = 0; i < libr.getCurrent(); i++)
    {
        libr.bookList_[i].print();
    }
    cout << libr.getCurrent();
    cout << libr.getMaxSize();
}
