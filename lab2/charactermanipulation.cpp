#include <iostream>
#include <string>
using namespace std;

bool is_reduntant(char c[], int size);
bool is_identical(char c[], int size);
bool is_duplicated(string name);

int main() {
  const int size=10;
  char arr[size];
  for(int i = 0; i<size ;++i){
  cout<<"Enter a character"<<endl;
  cin>>arr[i];
  }
  for(int j = 0;j<size;j++){
  cout<<arr[j]<<endl;
  }
  bool redu = is_reduntant(arr,size);
  bool i = is_identical(arr, size);

  cout<<redu<<endl<<identic<<endl;

  string name;
  cout<<"Enter string called name"<<endl;
  cin>>name;

  bool n = bool is_duplicated(name);

} 

bool is_reduntant(char c[], int size){
    
for(int k=0;k<size;k++){
    if(c[k]!=c[k+1]){
        return false;
    }
}//end for loop
return true; 
}//end function

bool is_identical(char c[], int size){
   for(int k=0;k<size;k++){
       for(int j =k+1;j<size-1;j++){
                if(c[k]==c[j]){
                return false;
            }//end if
       }//end first for loop
}//end second for loop
return true;
}

bool is_duplicated(string name){
for()
}
