#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= r and arr[i] >= l and k >= arr[i])
            {
                c++;
                k -= arr[i];
            }
            if (k < 0)
                break;
        }
        cout << c << endl;
    }

    return 0;
}