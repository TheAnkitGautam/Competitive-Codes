#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sortbysec(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return (a.second > b.second);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    map<ll, ll> ma;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if(x<=m)
        ma[x]++;
    }
    vector<pair<ll, ll>> vec;
    for (auto v : ma)
        vec.push_back(v);

    sort(vec.begin(), vec.end(), sortbysec);
    for (auto val : vec)
    {
        while (val.second-->0)
            cout << val.first << " ";
    }

    return 0;
}