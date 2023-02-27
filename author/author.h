#ifndef Author_H
#define Author_H
#include <iostream>
#include <string>
using namespace std;

class Author {

    private:
        string name_;
        string birth_place_;
        string biography_;


    public:

        //default parametrized constructor
        Author(string name="",string birthplace="",string biography="");

        //copy constructor
        Author(const Author &a);

        //setters
        void setName(string n);
        void setBirthPlace(string b);
        void setBiography(string bio);


        //getters
        string getName();
        string getBirthPlace();
        string getBiography();

        //functions
        bool isEqualTo(Author &a);
        int comapreTo(Author a, char c);
        void print();

};
#endif 
