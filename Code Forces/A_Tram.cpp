#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, ins = 0, maxCap = 0;
    cin >> n;
    while (n--)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        ins = ins + b - a;
        maxCap = max(maxCap, ins);
    }
    cout << maxCap;
    return 0;
}