#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
            cout << "YES" << endl;
        else if (a + c == b)
            cout << "YES" << endl;
        else if (b + c == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}