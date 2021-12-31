#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    int v[n];
    int ans[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int tot = 0;
    for (int i = 1; i < n; i++)
    {
        if ((v[i - 1] + v[i]) < k)
        {
            tot += k - v[i - 1] - v[i];
            v[i] = k - v[i - 1];
        }
    }
    cout << tot << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}