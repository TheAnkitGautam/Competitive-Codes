#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, e, k;
    cin >> t;
    while (t--)
    {
        cin >> e >> k;
        int c = 0;
        while (e > 0)
        {
            e = floor(e / k);
            c++;
        }
        cout << c << endl;
    }
    return 0;
}