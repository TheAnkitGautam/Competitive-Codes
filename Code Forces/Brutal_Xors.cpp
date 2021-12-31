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
        ll n;
        cin >> n;
        set<ll> s;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                s.insert(i ^ j);
            }
        }
        cout << s.size() << endl;
        // for (auto v : s)
        //     cout << v << " ";
        // cout << endl;
    }
    return 0;
}