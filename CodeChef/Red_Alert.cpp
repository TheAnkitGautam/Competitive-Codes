#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, d, h, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> d >> h;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        s = 0;
        string sol = "NO";
        for (int j = 0; j < n; j++)
        {
            if (ar[j] > 0)
            {
                s = s + ar[j];
            }
            else
                s = max(s - d, 0);
            if (s > h)
            {
                sol = "YES";
                break;
            }
        }
        cout << sol << endl;
    }
    return 0;
}