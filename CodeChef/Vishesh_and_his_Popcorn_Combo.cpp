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

        int a, b, mx = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a >> b;
            // cout << a << " " << b << endl;
            mx = max(mx, (a + b));
        }
        cout << mx << endl;
    }

    return 0;
}