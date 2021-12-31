#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//ll findMin(vectorll> v)
// {
//    ll minIdx = 100;

// }
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        vector<ll> v;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        ll maxEle = *max_element(v.begin(), v.end());
        ll maxIdx = max_element(v.begin(), v.end()) - v.begin();
        ll ss = 0, c = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0 and i != maxIdx)
                ss += v[i] / 2, c++;
        }
        cout << ss << " " << c << endl;
        cout << maxEle * pow(2, ss) + c << endl;
    }
    return 0;
}