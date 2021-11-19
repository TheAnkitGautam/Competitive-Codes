#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0, init = 1;
    while (m--)
    {
        ll x;
        cin >> x;
        ans += (x - init + n) % n;
        init = x;
    }
    cout << ans;
    return 0;
}