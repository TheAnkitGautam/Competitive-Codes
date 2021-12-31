#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> remove(vector<ll> &v, ll x)
{
    vector<ll> temp;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i] != x)
            temp.push_back(v[i]);
    }
    return temp;
}

ll ugli(vector<ll> &temp)
{
    ll c = 0;

    for (ll i = 1; i < temp.size(); i++)
    {
        if (temp[i] != temp[i - 1])
            c++;
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v, temp, ans;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for (ll i = 1; i <= k; i++)
        {
            temp = remove(v, i);
            ll a = ugli(temp);
            ans.push_back(a);
        }

        // cout << a << " ";
        for (auto &val : ans)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}