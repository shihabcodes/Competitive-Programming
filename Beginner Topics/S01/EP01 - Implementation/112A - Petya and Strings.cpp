#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() == s2.length())
    {
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

        int result = s1.compare(s2);

        if (result == 0)
        {
            cout << "0\n";
        }
        else if (result > 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}
