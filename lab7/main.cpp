#include "Bookshelf.h"
#include "Book.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    Bookshelf shelf1(100);
    Bookshelf popular(shelf1);
    Bookshelf returned(30);
    
    return 0;
}
