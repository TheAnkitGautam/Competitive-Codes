#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        if ((n + 1) * y >= x)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}