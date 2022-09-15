#include <iostream>
using namespace std;
int main()
{
    // int count = 4;
    // for (int i = 0; i <= count; i++)
    // {
    //     cout<<i<<endl;
    // }
    int i = 1;
    int n;
    int sum = 0;
    cout << "enter number of sum" << endl;
    cin >> n;
    while (i <= n)
    {
        i = i + 1;
        sum = sum + i;

        cout << n << endl;
    }
}