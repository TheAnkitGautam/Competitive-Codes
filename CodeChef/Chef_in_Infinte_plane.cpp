#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t, n, min, c;
    bool f = true;

    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        min = *min_element(a, a + n);
        c = 0;
        for (ll i = 0; i < n; i++)
        {
            if ((a[i] - min) >= 0)
            {
                c++;
            }
            else if ((a[i] - min) < 0)
            {
                f = false;
            }
            if (f == false)
            {
                c = 0;
                for (ll i = 0; i < n; i++)
                {
                    if (a[i] > 0)
                    {
                        c++;
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
