#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generate_random_birthdate(){
    srand(time(NULL));
    int lower = 0;
    int upper = 365;
    int day =(rand() % (upper - lower + 1)) + lower; 
    return day;
}

int simulate(){
    int num;
    cout<<"Enter the number of times you want to generate";
    cin>>num;
    int person[num];
    for(int i = 0;i<=num;i++){
    person[i]=generate_random_birthdate;
    }
    for(int k=0;k<size;k++){
       for(int j =k+1;j<size-1;j++){
                if(person[k]==person[j]){
                return k;
            }//end if
       }//end first for loop
}//end second for loop
}

int main(){

    return 0;
}
