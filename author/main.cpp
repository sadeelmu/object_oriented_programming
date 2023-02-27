#include "Author.h"
#include <iostream>
#include <string>
using namespace std;

void sort(Author a[], int s, char ch){
    for(int i= 0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(a[j].comapreTo(a[j+1], ch)){
                    //copy constructor
                    Author swap=a[j];
                    a[j]=a[j+1];
                    a[j+1]=swap;
            }
        }
    }
}

int main(){
    int size=3;
    // cout<<"Enter number of authors";
    // cin>>size;

    //default constructor
    Author a1[size];

    for(int i =0;i<size;i++){
        string n;
        string b;
        string bio;
        getline(cin,n);
        a1[i].setName(n);
        getline(cin,b);
        a1[i].setBirthPlace(b);
        getline(cin,bio);
        a1[i].setBiography(bio);
        
        cout<<n<<endl;
        cout<<b<<endl;
        cout<<bio<<endl;

    }


    
    //copy constructor
    sort(a1,size,'n');
    for(int i=0;i<size;i++){
        a1[i].print();
    }

    //copy constructor
    sort(a1,size,'b');
    for(int i=0;i<size;i++){
        a1[i].print();
    }    
    
    //copy constructor
    Author a2=a1[0];
}
