#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, t = 0;
    cin >> n;
    int x[n], y[n];

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++)
    {
        bool r = 0, l = 0, u = 0, d = 0;
        for (int j = 0; j < n; j++)
        {
            if (x[j] > x[i] and y[j] == y[i])
                r = 1;
            if (x[j] < x[i] and y[j] == y[i])
                l = 1;
            if (x[j] == x[i] and y[j] > y[i])
                u = 1;
            if (x[j] == x[i] and y[j] < y[i])
                d = 1;
        }
        if (r and l and u and d)
            t++;
    }

    cout << t << endl;

    return 0;
}