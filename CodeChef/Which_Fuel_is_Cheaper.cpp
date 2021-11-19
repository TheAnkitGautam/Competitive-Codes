#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k,sp=0,sd=0;
        cin >> x >> y >> a >> b >> k;
        sp = x + k * a;
        sd = y + k * b;
        if (sp < sd)
            cout << "PETROL\n";
        else if (sp > sd)
            cout << "DIESEL\n";
        else
            cout << "SAME PRICE\n";
    }
    return 0;
}