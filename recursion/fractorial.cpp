#include <iostream>
using namespace std;
// when function call it self directly or indirectly so its call recurtion, in recurtion big probelm is depend on same datatype problem

int fractorial(int n)
{
    if (n==0)
    {
       return  1;
    }
    
    int small = fractorial(n-1);
    int big = n*small;
    return big;
}

int main()
{
    int n;
    cin >> n;
    int ans = fractorial(n);
    cout << ans <<endl;
    return 0;
}