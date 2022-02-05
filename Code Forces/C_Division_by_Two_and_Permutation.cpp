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
        cin >> n;
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x <= n and s.find(x) == s.end())
                s.insert(x);
            else
            {
                while (x > 0)
                {
                    if (x <= n and s.find(x) == s.end())
                        break;
                    x = x / 2;
                }
                if (x != 0)
                    s.insert(x);
            }
        }

        if (s.size() == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}