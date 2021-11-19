#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll val = (x * 1) + (y * 2);
        if (x % 2 == 0 and x != 0)
            cout << "YES\n";
        else if (x == 0 and y % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}