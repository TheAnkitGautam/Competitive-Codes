#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int res = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (int(s1[i]) == int(s2[i]))
            continue;
        if (int(s1[i]) > int(s2[i]))
        {
            res = 1;
            break;
        }
        else
        {
            res = -1;
            break;
        }
    }
    cout << res;
    return 0;
}