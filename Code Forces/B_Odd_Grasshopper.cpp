#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, n, d;
        cin >> x >> n;
        if (n % 4 == 0)
            d = 0;
        else if (n % 4 == 1)
            d = -n;
        else if (n % 4 == 2)
            d = 1;
        else if (n % 4 == 3)
            d = n + 1;

        if (x % 2 == 0)
            cout << x + d << endl;
        else
            cout << x - d << endl;
    }
    return 0;
}