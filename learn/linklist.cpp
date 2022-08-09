#include <iostream>
using namespace std;


int main(){
    int number = 45;
 cout << number <<endl;
  int* ptr = &number;

 cout << ptr <<endl;

 *ptr = 500;
 cout << *ptr <<endl ;
 cout << ptr << endl;
 cout << number <<endl;
 cout << sizeof(ptr) <<endl;
 cout << sizeof(number);



  
    cout<< endl;
    cout<< endl;
    return 0;
}