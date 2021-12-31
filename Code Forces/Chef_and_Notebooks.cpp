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
        int x, y, k, n, count = 0;
        cin >> x >> y >> k >> n;
        for (int i = 0; i < n; i++)
        {
            int p, c;
            cin >> p >> c;
            if (c <= k and p >= x - y)
                count++;
        }
        if (count > 0)
            cout << "LuckyChef" << endl;
        else
            cout << "UnluckyChef" << endl;
    }
    return 0;
}