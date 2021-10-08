#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[1000001];
int main()
{
    int i, j, k;
    int n, m;
    int a, b, c;

    cin >> a >> b >> c;
    m = a * b * c;
    for(i = 1; i <= m; i++)
    {
        for(j = i; j <= m; j += i)
           cout<< arr[j]++ <<" ";
            // cout<<arr[j];
    }

    ll ans = 0, mod = 1073741824;
    for(i = 1; i <= a; i++)
    {
        for(j = 1; j <= b; j++)
        {
            for(k = 1; k <= c; k++)
            {
                ans += arr[i * j * k];
                ans = ans % mod;
            }
        }
    }

    cout << ans;

    return 0;
}