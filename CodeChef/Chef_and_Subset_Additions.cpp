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
        int n, x, y;
        cin >> n >> x >> y;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] - a[i] != x and b[i] - a[i] != y)
                ans = 0;
        }

        if (ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}