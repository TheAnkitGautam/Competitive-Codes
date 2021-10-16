#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll t, n, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        ll temp = n, dig, ans = 0, c = 0;
        while (temp)
        {
            dig = temp % 10;
            c++;
            temp /= 10;
            if (dig == d)
            {
                temp = temp * pow(10, c) + (dig + 1) * pow(10, c - 1);
                ans = temp - n;
                c = 0;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}