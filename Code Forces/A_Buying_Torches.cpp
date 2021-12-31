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
        ll x, y, k;
        cin >> x >> y >> k;

        ll tot_st = (y * k) + (k - 1);
        if (tot_st % (x - 1) == 0)
            cout << (tot_st / (x - 1)) + k << endl;
        else
            cout << (tot_st / (x - 1)) + 1 + k << endl;
    }
    return 0;
}