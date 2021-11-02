#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    ll x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    int ans = max(abs(y2 - y1), abs(x2 - x1));
    cout << ans;
    return 0;
}