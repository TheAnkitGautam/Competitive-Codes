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
        int n, x;
        cin >> n >> x;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<int>());

        int ans = 0, sum = 0, f = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            ans++;
            if (sum >= x)
            {
                f = 1;
                break;
            }
        }
        if (f or sum >= x)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}