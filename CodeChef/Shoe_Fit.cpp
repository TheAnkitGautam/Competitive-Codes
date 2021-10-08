#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> a >> b >> c;
        int d = a + b + c;
        if (d == 0 || d == 3)
        {
            cout << "0" << endl;
        }
        else
            cout << "1" << endl;
    }
    return 0;
}