#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = *max_element(arr, arr + n);

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += max - arr[i];

    cout << sum << endl;

    return 0;
}