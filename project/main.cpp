#include "Library.h"
#include "book.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Book *myBooks_items = new Book[5]; // 1
    for (int i = 0; i < 5; i++)
    { // 2
        string title;
        string ISBN;
        string Author;
        int numofCopies;
        cout << "please enter the title of the book" << i << endl;
        cin >> title;
        myBooks_items[i].set_title_(title);
        cout << "please enter the isbn of the book" << i << endl;
        cin >> ISBN;
        myBooks_items[i].set_ISBN_(ISBN);
        cout << "please enter the Author of the book" << i << endl;
        cin >> Author;
        myBooks_items[i].set_firstAuthor_(Author);
        cout << "please enter the copies of the book" << i << endl;
        cin >> numofCopies;
        myBooks_items[i].set_number_of_copies_(numofCopies);
    }
    Library lib(6); // 3
    for (int i = 0; i < 6; i++)
    {
        lib.addBook(myBooks_items[i]); // 4
    }
    // 5?? idk
    delete[] myBooks_items; // 6
}

// OUR PROBLEMS
/*
void resizeLibrary(n);
void addBook()
void addBook(const )
removebookbycopy
findbookbytitle

float ?
*/
