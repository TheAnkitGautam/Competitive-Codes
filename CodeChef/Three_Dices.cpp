#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        float s = (float)(x + y);
        float res = 0;
        if (s == 2)
        {
            res = 4;
        }
        else if (s == 3)
        {
            res = 3;
        }
        else if (s == 4)
        {
            res = 2;
        }
        else if (s == 5)
        {
            res = 1;
        }

        cout << (res/6) << endl;
    }
    return 0;
}