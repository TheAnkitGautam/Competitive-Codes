#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Fuck Ratings
    //I'm doing CP for fun

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << "1"
                 << "\n";
            continue;
        }
        int res = 1;
        while (res * 2 <= n)
            res *= 2;
        ll ans = n - res + 1;
        ll temp = res / 2;
        if (res == n)
            cout << res / 2 << "\n";
        else
            cout << max(ans, temp) << "\n";
    }
    return 0;
}