#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    double a, b, c, d, a1, a2, ans1, b1, b2, ans2;
    cin >> a >> b >> c >> d;
    a1 = 3.0 * a / 10.0;
    a2 = a - ((a / 250.0) * c);
    ans1 = max(a1, a2);
    b1 = 3.0 * b / 10.0;
    b2 = b - ((b / 250.0) * d);
    ans2 = max(b1, b2);
    if (ans1 > ans2)
        cout << "Misha\n";
    else if (ans1 < ans2)
        cout << "Vasya\n";
    else
        cout << "Tie\n";

    return 0;
}