#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2;
        cin >> x1 >> x2;
        if (x1 == x2)
            cout << "YES\n";
        else if (x1 < x2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}