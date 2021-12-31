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
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
                m[x]++;
            else
                m[-1 * x]++;
        }

        int c = 0;

        for (auto val : m)
        {
            if ((val.first != 0 and val.second == 1) or val.first == 0)
                c++;
            else if (val.first != 0 and val.second >= 2)
                c += 2;
        }
        cout << c << endl;
    }

    return 0;
}