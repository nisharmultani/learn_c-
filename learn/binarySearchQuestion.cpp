#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int k = 4;
    int arr[n] = {1, 2, 3, 4, 5, 3, 4, 3};

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << i;
            cout <<endl;
            
            return 0;
        }
    }

    // cout << arr[4];
    cout << endl;
    cout << endl;
    return 0;
}