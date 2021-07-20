#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, d, x, y, z, w1, w2;
    cin >> t;
    while (t--)
    {
        cin >> d >> x >> y >> z;
        w1 = x * 7;
        w2 = d * y + (7 - d) * z;
        cout << max(w1,w2) << endl;
    }
    return 0;
}