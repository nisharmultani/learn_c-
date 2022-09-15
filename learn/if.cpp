#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    cout<<a;
    cout<<endl;
    int b = a + 1;
    cout<<b;
    cout<<endl;
    if ((a = 3) == b)
    {
        cout <<"ifwala "<< a;
        cout << endl;
    }
    else
    {
        cout << "nsiiar" << a + 1;
    }
    cout << a;
    cout<<endl;
    cout << b;

    
    cout << endl;
    cout << endl;
}