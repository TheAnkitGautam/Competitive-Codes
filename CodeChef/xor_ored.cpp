#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, n;
    ll x,res;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        x = *max_element(a, a + n);
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i] ^ x;
        }
        res = 0;
        for (int i = 0; i < n; i++)
        {
            res = res | a[i];
        }
        cout << x << " ";
        cout << res << endl;
    }
    return 0;
}