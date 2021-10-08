#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b;
    string s;
    cin >> t;
    while (t--)
    {
        int zero = 0, one = 0;
        cin >> n >> a >> b;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        cout << ((zero * a) + (one * b)) << endl;
    }
    return 0;
}