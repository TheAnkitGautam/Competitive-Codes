#include <bits/stdc++.h>
using namespace std;

int equal(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int x = equal(arr, n);
        int max = *max_element(arr, arr + n);
        if (x)
            cout << 0 << endl;
        else if (max == arr[n - 1])
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}