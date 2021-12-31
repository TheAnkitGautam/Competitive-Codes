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
        int n, c, s = 0;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s += x;
        }
        if (s <= c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}