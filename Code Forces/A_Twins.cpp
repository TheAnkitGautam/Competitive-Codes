#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, greater<int>());
    int sum = 0, s = 0, i = 0;
    sum = accumulate(arr, arr + n, sum);

    while (s <= (sum / 2))
        s += arr[i], i++;
    cout << i << " ";
    return 0;
}