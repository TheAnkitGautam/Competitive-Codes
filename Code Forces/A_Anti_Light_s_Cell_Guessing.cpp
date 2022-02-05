#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int ans = 0;
        if (n > 1 or m > 1)
        {
            if (min(m, n) == 1)
                ans = 1;
            else
                ans = 2;
        }
        cout << ans << endl;
    }

    return 0;
}