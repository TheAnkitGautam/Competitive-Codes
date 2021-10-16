#include <iostream>
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
        int n, m, k, i, idx = 0;
        cin >> n >> m >> k;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        i = 0;
        while (arr[i] == 1)
        {
            idx++;
            i++;
        }
        // cout << idx << endl;
        if (idx >= n)
            cout << 100 << "\n";
        else if (idx >= m)
            cout << k << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}