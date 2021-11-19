#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;

    ll odd = n / 2 + n % 2;
    ll even = n / 2;
    if (k <= odd)
        cout << (2 * k - 1);
    else if (k > odd)
        cout << (2 * k) - (2 * odd);
    return 0;
}
