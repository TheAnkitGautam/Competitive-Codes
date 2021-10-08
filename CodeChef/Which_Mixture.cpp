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

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b == 0)
            cout << "Solid"<< "\n";
        else if (a == 0)
            cout << "Liquid"<< "\n";
        else
            cout << "Solution"<< "\n";
    }
    return 0;
}