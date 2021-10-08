#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    ll t, x, y, res;
    cin >> t;
    while (t--)
    {

        cin >> x >> y;
        if (gcd(x,y)>1)
        {
            res = 0;
        }
        else if (gcd(x + 1, y) > 1 || gcd(x, y + 1) > 1)
        {
            res = 1;
        }
        else
            res = 2;
        cout << res << endl;
    }
    return 0;
}