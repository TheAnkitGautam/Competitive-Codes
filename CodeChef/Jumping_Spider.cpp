#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int m = k + 1, ans;
        int time = n / m;

        if (n % m == 0)
            ans = time;
        else if (k * (time + 1) <= n)
            ans = time + 1;
        else
            ans = (time + n - time * m);

        cout << ans << endl;
    }

    return 0;
}