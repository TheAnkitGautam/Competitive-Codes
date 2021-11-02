#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll t, n;
    cin >> t;
    while (t--)
    {
        map<ll, ll> m;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        for (auto val : m)
            cout << val.first << ":" << val.second << "\n";
    }
    return 0;
}