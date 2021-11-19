#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totDrink = k * l;
    int lime = c * d;
    int salt = p / np;

    int ans = min(totDrink / nl, min(lime, salt)) / n;
    cout << ans;

    return 0;
}