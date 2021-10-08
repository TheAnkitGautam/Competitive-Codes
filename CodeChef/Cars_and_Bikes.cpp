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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
            cout << "NO"
                 << "\n";
        else if (n % 4 == 2 || n % 4 == 3)
            cout << "YES"
                 << "\n";
    }
    return 0;
}