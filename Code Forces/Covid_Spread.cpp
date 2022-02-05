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
        ll n, d;
        cin >> n >> d;

        ll cases = 1;

        for (int i = 1; i <= d; i++)
        {
            if (i <= 10)
                cases *= 2;
            else
                cases *= 3;

            if (cases >= n)
                break;
        }
        cout << min(cases, n) << endl;
    }

    return 0;
}