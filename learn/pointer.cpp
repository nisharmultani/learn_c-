#include <iostream>
using namespace std;

void getpointer(int n){
    cout<< n   <<"function3" <<endl;
    cout<< &n   <<"function3" <<endl;
    // return *n = 55;

}

void  getpointer2(int *n){
    cout<< n   <<"function2" <<endl;
    cout<< *n   <<"function2" <<endl;
    // return *n = 55;

}
int getpointer3(int &n){
    cout<< n   <<"function3" <<endl;
    cout<< &n   <<"function3" <<endl;
    return n = 55;

}

int main(){
    int number = 45;
 cout << &number <<" main function" <<endl;
//   int* ptr = &number;

//  cout << ptr <<endl;

//  *ptr = 500;
//  cout << *ptr <<endl ;
//  cout << ptr << endl;
//  cout << number <<endl;
//  cout << sizeof(ptr) <<endl;
//  cout << sizeof(number) <<endl;

// function  call by value
// getpointer(number);
// function call by reference with pointer arguments
// getpointer2(&number);
// function call by reference with reference arguments
getpointer3(number);
 cout << number <<endl;



  
    cout<< endl;
    cout<< endl;
    return 0;
}