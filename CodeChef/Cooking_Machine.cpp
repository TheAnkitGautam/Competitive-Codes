#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool powOf2(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Fuck Ratings
    //I'm doing CP for fun

    int t, a, b;
    cin >> t;
    while (t--)
    {
        int c = 0;
        cin >> a >> b;
        while (!powOf2(a))
        {
            a = a / 2;
            c++;
        }
        while (a < b)
            a *= 2, c++;
        while (a > b)
            a /= 2, c++;
        cout << c << "\n";
    }
    return 0;
}