#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 0;i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] - arr[j] > 0 || arr[j] - arr[i] > 0)
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}