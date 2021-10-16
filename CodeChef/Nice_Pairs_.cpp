#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < min(n, i + 9); j++)
            {
                int temp = abs(s[j] - s[i]);
                if ((j - i) == temp)
                {
                    c++;
                }
            }
        }
        cout << c << "\n";
    }
    return 0;
}