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
        int x, y, k;
        cin >> x >> y >> k;

        if (abs(x) % k == 0 and abs(y) % k == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}