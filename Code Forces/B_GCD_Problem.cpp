#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n;

        for (int a = 2; a < n; a++)
        {
            int b = n - a - 1;
            if (__gcd(a, b) == 1)
            {
                cout << a << " " << b << " " << 1 << " " << endl;
                break;
            }
        }
    }

    return 0;
}