#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define size 50

int main(){
    srand(time(NULL));
    int lower = 0;
    int upper = 49;
    int copoun[size];
    for(int l = 0;l<size;l++){
    coupoun[l] =(rand() % (upper - lower + 1)) + lower; 

    }
    for(int i  =0;i<50;i++){
        for(int j = i+1; j<upper; j++){
            while(copoun[i]!=copoun[j]){
                coupoun[l] =(rand() % (upper - lower + 1)) + lower; 
            }
        }
    }
    return 0;
}
