#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll ini, jump, time;
        cin >> ini >> jump;
        ll s = ini, curr = ini;

        for (ll i = 1; i <= jump; i++)
        {
            if (curr % 2 == 0)
                s = s - i;
            else
                s = s + i;
            curr = s;
        }
        cout << s << "\n";
    }
    return 0;
}