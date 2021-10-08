#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, e1, o1;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> n;
        int arr[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        e1 = n / 2;
        o1 = n / 2 + n % 2;
        // cout<<e1<<" "<<o1<<"\n";
        int e2=0, o2=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                e2++;
            else
                o2++;
        }
        // cout<<e2<<" "<<o2<<"\n";
        sum = min(e1, o2) + min(e2, o1);
        cout << sum <<endl;
    }
    return 0;
}