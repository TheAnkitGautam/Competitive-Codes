#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t, mm = 0, cc = 0;
    ;
    cin >> t;
    while (t--)
    {
        int m, c;
        cin >> m >> c;

        if (m == c)
            continue;

        if (m > c)
            mm++;
        else if (c > m)
            cc++;
    }
    if (mm > cc)
        cout << "Mishka" << endl;
    else if (mm < cc)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}