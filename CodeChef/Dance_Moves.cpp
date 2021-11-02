#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, x, y;
    cin >> t;
    while (t--)
    {
        int c = 0;
        cin >> x >> y;
        while (x != y)
        {
            if (x < y)
            {
                x += 2;
                c++;
            }
            else if (y < x)
            {
                x = x - 1;
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}