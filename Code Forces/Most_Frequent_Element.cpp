#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m, l, r, k;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (m--)
    {
        int c = 0;
        cin >> l >> r >> k;
        for (int i = l; i <= r; i++)
        {
            if (arr[i] == arr[i - 1])
                c++;
            else
            {
                c = 0;
            }
            if (c >= k)
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }

    return 0;
}