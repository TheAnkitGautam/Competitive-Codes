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
        double n;
        cin >> n;
        double val = pow(0.143 * n, n);
        double frac = val - (int)val;
        if (frac < 0.5)
            cout << (int)val << endl;
        else
            cout << (int)val + 1 << endl;
    }

    return 0;
}