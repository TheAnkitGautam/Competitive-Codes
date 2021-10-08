#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c, sa = 0, sb = 0, sc = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        sa += a;
        sb += b;
        sc += c;
    }
    if (sa == 0 && sb == 0 && sc == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}