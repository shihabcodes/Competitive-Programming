#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int x[n];
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] == 1)
        {
            ans = 1;
        }
    }

    if (ans == 1)
    {
        cout << "HARD"
             << "\n";
    }
    else
    {
        cout << "EASY"
             << "\n";
    }
}