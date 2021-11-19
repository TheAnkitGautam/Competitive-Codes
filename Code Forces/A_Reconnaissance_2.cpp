#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, a[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = 1001, d;
    d = abs(a[0] - a[n - 1]);
    m = min(m, d);
    int idx1 = 1, idx2 = n;
    for (int i = 0; i < n; i++)
    {
        d = abs(a[i] - a[i + 1]);
        if (m > d)
        {
            m = d;
            idx1 = i + 1;
            idx2 = i + 2;
        }
    }
    cout << idx1 << " " << idx2 << endl;
    return 0;
}