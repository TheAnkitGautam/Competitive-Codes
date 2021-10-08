#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, res = 1,mod=1000000007;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        res = (res * 2) % mod;
    }

    cout << res;

    return 0;
}