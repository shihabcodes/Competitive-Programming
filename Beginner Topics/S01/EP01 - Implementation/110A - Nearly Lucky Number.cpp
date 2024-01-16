#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;

    int n = 0;

    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '4' || num[i] == '7')
        {
            n++;
        }
    }

    if (n == 4 || n == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}