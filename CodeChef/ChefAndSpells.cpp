#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    ll a, b, c, hp, l, sl;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;

        ll ar[3] = {a, b, c};
        sort(ar, ar + 3);
        hp = 0;
        for (int i = 2; i > 0; i--)
        {
            hp += ar[i];
        }
        cout << hp << endl;
    }
    return 0;
}