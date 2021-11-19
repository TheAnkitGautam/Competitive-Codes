#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;
    }
    int c = 0;
    for (int i = 1; i <= 5; i++)
    {
        int r = (s + i) % (n + 1);
        if (r != 1)
            c++;
    }
    cout << c;

    return 0;
}
