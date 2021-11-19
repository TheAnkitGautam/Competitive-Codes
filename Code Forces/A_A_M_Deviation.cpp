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
        ll a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        while (a2 > 0 and a3 > a2)
        {
            if (a2 > a3)
                a2--, a3++;
            else if (a1 > a2)
                a2++, a1--;
            else
                a1++, a3--;
        }
        cout << abs(a1 + a3 - 2 * a2) << endl;
    }
    return 0;
}
