#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Fuck Ratings
    //I'm doing CP for fun

    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        int large = max(a, max(b, c));

        if (a + b + c <= d)
            cout << "1"
                 << "\n";
        else if (((a + b + c) - large) <= d)
            cout << "2"
                 << "\n";
        else
            cout << "3"
                 << "\n";
    }
    return 0;
}