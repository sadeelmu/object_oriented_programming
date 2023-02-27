#include "Author.h"
#include <iostream>
#include <string>
using namespace std;

Author::Author(string n, string b, string bio){
    setName(n);
    setBirthPlace(b);
    setBiography(bio);
}

void Author::setName(string n){

name_=n;
}

void Author::setBirthPlace(string b){
birth_place_=b;

}

void Author::setBiography(string bio){

biography_=bio;
}

string Author::getName(){
return name_;
}
string Author::getBirthPlace(){
return birth_place_;
}
string Author::getBiography(){
return biography_;
}

void Author::print(){
    cout<<name_<<endl<<birth_place_<<biography_<<endl;
}

bool Author::isEqualTo(Author &a){
if(name_==a.name_ && birth_place_==a.birth_place_ && biography_==a.biography_){
    return true;
}
else{
    return false;
}
}

int Author::comapreTo(Author a, char c){
    if(c=='n'){
        if(name_>a.name_){
            return 1;
        }
           if(name_<a.name_){
            return -1;
        }
        else if(name_==a.name_){
            return 0;
        }
    }
    if(c=='b'){
        if(birth_place_>a.birth_place_){
            return 1;
        }
        if(birth_place_<a.birth_place_){
            return -1;
        }
        else if(birth_place_==a.birth_place_){
            return 0;
        }
    }
    else{
        cout<<"Error message";
        exit(1);
    }
}

