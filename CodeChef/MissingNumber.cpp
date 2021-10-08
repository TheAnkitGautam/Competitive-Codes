#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, a, sum = 0;
    cin >> n;
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << (n * (n + 1) / 2) - sum;

    return 0;
}