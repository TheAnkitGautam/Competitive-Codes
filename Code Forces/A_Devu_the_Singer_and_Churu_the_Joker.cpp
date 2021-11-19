#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = accumulate(arr, arr + n, 0);
    if ((sum + (n - 1) * 10) > d)
    {
        cout << -1;
        return 0;
    }

    cout << (d - sum) / 5;

    return 0;
}