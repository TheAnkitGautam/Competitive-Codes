#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, a, b, p, q;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> p >> q;
        int sa = 0, sb = 0, i = 0;
        if (a == p and b == q)
            cout << "YES\n";
        else
        {
            sa = p / a;
            sb = q / b;
            if ((sa % 2 == 1 and sb % 2 == 0) or (sa % 2 == 0 and sb % 2 == 1))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}