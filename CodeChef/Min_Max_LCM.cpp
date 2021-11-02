#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcmEfficient(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll t, x, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> k;
        cout << lcmEfficient(x, 2 * x) << " " << lcmEfficient(x * k, ((x * k) - 1)) << "\n";
    }
    return 0;
}