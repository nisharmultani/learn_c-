#include <iostream>
using namespace std;
void print(int n)
{

    if (n == 0)
    {
        return;
    }
    cout << n <<endl;
    print(n - 1);
}

int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    cout << endl;
    print(n);
    cout << endl;
    cout << endl;

    return 0;
}