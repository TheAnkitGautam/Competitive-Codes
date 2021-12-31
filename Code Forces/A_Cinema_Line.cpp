#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll c25 = 0, c50 = 0;
    while (n--)
    {
        ll x;
        cin >> x;

        if (x == 25)
            c25++;
        else if (x == 50)
        {
            c50++;
            c25--;
        }
        else
        {
            if (c50 > 0)
                c50--, c25--;
            else
                c25 = c25 - 3;
        }
        if (c25 < 0 or c50 < 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}