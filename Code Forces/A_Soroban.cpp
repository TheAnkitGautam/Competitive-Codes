#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    ll k;
    cin >> n;
    if (n == 0)
        cout << "O-|-OOOO";
    while (n != 0)
    {
        k = n % 10;
        if (k < 5)
        {
            cout << "O-|";
            for (ll i = 0; i < 5; i++)
            {
                if (i == k)
                {
                    cout << "-";
                }
                else
                {
                    cout << "O";
                }
            }
        }
        else
        {
            cout << "-O|";
            for (ll i = 0; i < 5; i++)
            {
                if (i == k - 5)
                {
                    cout << "-";
                }
                else
                {
                    cout << "O";
                }
            }
        }
        cout << endl;

        n = n / 10;
    }

    return 0;
}