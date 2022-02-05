#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if (k < x)
            cout << -1 << endl;
        else
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                if (c == x)
                    c = 0;
                cout << c << " ";
                c++;
            }
            cout << endl;
        }
    }

    return 0;
}