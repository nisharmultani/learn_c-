#include <iostream>
using namespace std;
int count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int small = count(n-1);
    int big =  n + small;
}
int main()
{
    int n;
    cout << "Enter Count Number" << endl;
    cin >> n;
    cout << endl;
    int ans = count(n);
    cout << ans << endl;
    cout << endl;
    cout << endl;

    return 0;
}