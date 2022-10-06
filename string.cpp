#include <iostream>
#include <cstring>

using namespace std;

int textfunction(string &s)
{
    int n = s.length();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            sum = sum + 1;
        }
    }
    return sum;
};

int main()
{
    string text = "ccc ";
    int a = textfunction(text);
    cout << a;

    return 0;
}