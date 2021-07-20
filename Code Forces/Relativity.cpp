#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    ll g, c, h;
    cin >> t;
    while (t--)
    {
        cin >> g >> c;
        h = (c * c) / (2 * g);
        cout << h << endl;
    }
    return 0;
}