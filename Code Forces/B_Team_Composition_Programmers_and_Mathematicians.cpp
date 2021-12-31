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
        ll a, b;
        cin >> a >> b;
        ll ans = 0;
        if ((a == 1 and b >= 3) or (b == 1 and a >= 3))
            ans = 1;
        else if (a != 0 and b != 0)
            if ((a / b) >= 3 or (b / a) >= 3)
                ans = min(a, b);
            else
                ans = min((a + b) / 4, min(a, b));
        cout << ans << endl;
    }
    return 0;
}