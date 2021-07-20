#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    long n;
    int k, t, x, rem;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        x = k / (n - 1);
        int rem = k - x * (n - 1);
        if (rem == 0)
            cout << n * x - 1 << endl;
        else
            cout << n * x + rem << endl;
    }
    return 0;
}