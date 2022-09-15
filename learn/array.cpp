// library for cout and cin
#include <iostream>
using namespace std;

// function
void getsizeof(int (&arr)[4])
{
    cout << sizeof(arr) << endl;
}
// main function that call first
int main()
{
    int n = 4;
    // array declaration
    // when we  create specified size array that time we can only store limited value.
    int arr[n] = {20, 30, 40, 50};
    //  loop on array
    for (int i = 0; i < n; i++)
    {
        // print all elemnt address
        // cout << &arr[i] << endl;
        // print all array values both are valid
        // cout << i[arr] << endl;
        cout << arr[i] << endl;
    }

    // print array first element address
    cout << &arr <<"nishar" << endl;
    // array first element address store same name with array name
    cout << *arr << endl;
    // return garbage value
    cout << arr[5] << endl;
    // return garbage value
    cout << arr[-2] << endl;
    // get size of integer datatype
    cout << sizeof(int) << "byts" << endl;
    // its return total byts is allocated to arr varibale
    cout << sizeof(arr) << endl;

    // getsizeof(arr);
    cout << endl;
    cout << endl;
    // main function always return
    return 0;
}