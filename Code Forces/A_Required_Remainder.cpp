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
        int x, y, n;
        cin >> x >> y >> n;
        if (n - n % x + y <= n)
            cout << n - n % x + y << endl;
        else
            cout << n - n % x - (x - y) << endl;
    }
    return 0;
}