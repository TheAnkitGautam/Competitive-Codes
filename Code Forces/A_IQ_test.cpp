#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, fo = 2, fe = 2, le, lo;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            le = i;
            fe--;
        }
        else
        {
            lo = i;
            fo--;
        }
    }
    if (fo == 1)
        cout << lo;
    else if (fe == 1)
        cout << le;
    return 0;
}