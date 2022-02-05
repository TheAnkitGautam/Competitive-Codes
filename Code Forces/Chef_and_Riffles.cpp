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
        int n, k;
        cin >> n >> k;

        int exp = log2(n);
        int ans[n] = {0};
        int num = 1;
        for (int i = 0; i < n / k; i++)
        {
            ans[k * i] = num;
            num++;
        }
        for (int i = 0; i < n / k; i++)
        {
            ans[(k * i) + 1] = num;
            num++;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
    }

    return 0;
}