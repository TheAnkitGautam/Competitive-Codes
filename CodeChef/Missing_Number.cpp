#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < (n - 1); i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] != (i+1))
        {
            cout << i;
            break;
        }
    }

    return 0;
}