#include <iostream>
using namespace std;
int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int small = power(n - 1);
    int big = 2 * small;
    return big;
}

int main()
{
    int n;
    // int digit;
    cout << "enter any number" << endl;
    cin >> n;
    // cout<<endl;
    // cout<<"enter Power od"<<n <<endl;
    // cin>>digit;
    int ans = power(n);
    cout << ans;
    cout << endl;
    cout << endl;

    return 0;
}